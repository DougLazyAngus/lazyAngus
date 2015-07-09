using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class TypeAccumulator
{
	public int[] newTypes;
	public int[] derivedTypes;
	
	public TypeAccumulator (int count)
	{
		newTypes = new int[count];
		derivedTypes = new int[count];

		InitToZero (newTypes);
		InitToZero (derivedTypes);
	}

	void InitToZero (int[] array)
	{
		for (int i = 0; i < array.Length; i++) {
			array [i] = 0;
		}
	}

	public void AddNew (int index)
	{
		AddNew (index, 1);
	}
	
	public void AddNew (int index, 
	                 int value)
	{
		newTypes [index] += value;
	}
	
	public void AddDerived (int index)
	{
		AddDerived (index, 1);
	}
	
	public void AddDerived (int index, 
	                 int value)
	{
		derivedTypes [index] += value;
	}

	public void DeriveFrom (TypeAccumulator ta)
	{
		for (int i = 0; i < derivedTypes.Length; i++) {
			derivedTypes [i] = ta.derivedTypes [i] + newTypes [i];
		}
	}
}

public class LevelDescription
{
	public string specialText;
	public List<ExplicitMouseDesc> explicitMouseDescs;
	public Sprite sprite;
	public TipConfig tipConfig;
	public float tipPause;
	public TypeAccumulator mouseHolesAccumulator;
	public TypeAccumulator boostsAccumulator;
	public TypeAccumulator wigglesAccumulator;
	public TypeAccumulator mouseTypesAccumulator;
	public int gameLevel;

	public LevelDescription ()
	{
		specialText = "";
		explicitMouseDescs = new List<ExplicitMouseDesc> ();
		sprite = null;

		mouseHolesAccumulator = new TypeAccumulator ((int)MouseHole.MouseHoleLocation.NUM_TYPES);
		boostsAccumulator = new TypeAccumulator ((int)BoostConfig.BoostType.NUM_TYPES);
		wigglesAccumulator = new TypeAccumulator ((int)MouseConfig.MouseWiggleType.NUM_TYPES);
		mouseTypesAccumulator = new TypeAccumulator ((int)MouseConfig.MouseType.NUM_TYPES);
	}


}

public class LevelConfig : MonoBehaviour
{
	public float paradePause = 0.1f;
	public int minParadeMice = 2;
	public int maxParadeMice = 4;
	public float paradeEndPause = 4f;
	public int minDistributedMice = 3;
	public int maxDistributedMice = 7;
	public float[] distributedPauseDist;
	public float distributedEndPause = 2f;
	public float minSpoutPause = 0.2f;
	public float maxSpoutPause = 1.1f;
	public float spoutEndPause = 3f;
	public int minSpoutMice = 6;
	public int maxSpoutMice = 10;
	public int superSpeedMiceLevel = 7;
	private QuasiRandomGenerator<MouseHole.MouseHoleLocation> mouseHoleGenerator;
	private QuasiRandomGenerator<int> trackGenerator;
	private QuasiRandomGenerator<float> distributedPauseGenerator;
	private Dictionary<int, LevelDescription> levelDescMap;
	
	enum WaveType
	{
		// Quasi-random, no two mice out of one hole same time.
		WAVE_TYPE_DISTRIBUTED = 0, 
		// a hole -> stream of mice.
		WAVE_TYPE_SPOUT, 
		// N holes simultaneous mice all same direction.
		WAVE_TYPE_PARADE,

		NUM_TYPES
	}

	//We make a static variable to our MusicManager instance
	public static LevelConfig instance { get; private set; }

	private WaveType[] allWaveTypes;

	void Awake ()
	{
		instance = this;
		levelDescMap = new Dictionary<int, LevelDescription> ();
		MakeQuasiRandomGenerators ();
		GeneratePresetLevels ();
	}

	void Start ()
	{
	}

	private void AddExplicitMouseDesc (ref List<ExplicitMouseDesc> retVal, 
	                        float pause,
	                        bool isClockwise, 
	                        MouseHole.MouseHoleLocation location, 
	                        MouseConfig.MouseType mType, 
	                        int track)
	{
		ExplicitMouseDesc emd = new ExplicitMouseDesc ();

		emd.delayToNextMouse = pause;
		emd.isClockwise = isClockwise;
		emd.mouseHoleLocation = location;
		emd.mouseType = mType;
		emd.track = track;
		retVal.Add (emd);
	}

	public LevelDescription GetCurrentLevelDescription ()
	{
		int level = GameController.instance.gameLevel;
		return GetLevelDescription (level);
	}

	public LevelDescription GetLevelDescription (int gameLevel)
	{
		LevelDescription ld;
		if (levelDescMap.ContainsKey (gameLevel)) {
			return levelDescMap [gameLevel];
		}

		ld = GenerateRandomLevelDescription (gameLevel);
		levelDescMap.Remove (gameLevel);

		ld.gameLevel = gameLevel;
		levelDescMap.Add (gameLevel, ld);

		return ld;
	}

	void GeneratePresetLevels ()
	{
		levelDescMap.Clear ();

		LevelDescription ld;

		int gameLevel = 0;
		while (true) {
			gameLevel += 1;
			ld = MakePresetGameLevelSkeleton (gameLevel);

			if (ld == null) {
				break;
			}

			ld.gameLevel = gameLevel;
			levelDescMap.Add (gameLevel, ld);
		}

		FillOutPresetGameLevelSkeletons ();
	}

	void FillOutPresetGameLevelSkeletons ()
	{
		int gameLevel = 0;
		while (true) {
			gameLevel += 1;

			if (!levelDescMap.ContainsKey (gameLevel)) {
				return;
			}
			LevelDescription ld = levelDescMap [gameLevel];
			LevelDescription previousLd = null;
			if (levelDescMap.ContainsKey (gameLevel-1)) {
				previousLd = levelDescMap [gameLevel-1];
			}
	
			if (previousLd != null) {
				ld.boostsAccumulator.DeriveFrom (previousLd.boostsAccumulator);
				ld.mouseHolesAccumulator.DeriveFrom (previousLd.mouseHolesAccumulator);
				ld.wigglesAccumulator.DeriveFrom (previousLd.wigglesAccumulator);
				ld.mouseTypesAccumulator.DeriveFrom (previousLd.mouseTypesAccumulator);
			}

			if (ld.explicitMouseDescs.Count == 0) {
				ld.explicitMouseDescs = GenerateRandomMiceForLevel(gameLevel);
			}
		}
	}

	LevelDescription MakePresetGameLevelSkeleton (int gameLevel)
	{
		LevelDescription ld = new LevelDescription ();
		ld.explicitMouseDescs = new List<ExplicitMouseDesc> ();

		// Better than switch b/c it's easier to re-arrange levels.
		int glCounter = gameLevel;

		if (--glCounter == 0) {
			// Four slow mice, all same direction, long pauses.
			ld.specialText = "";

			ld.mouseHolesAccumulator.AddDerived ((int)MouseHole.MouseHoleLocation.NORTH, 
				                                    TweakableParams.instance.initialMicePerHole);
			ld.mouseHolesAccumulator.AddDerived ((int)MouseHole.MouseHoleLocation.SOUTH, 
				                                    TweakableParams.instance.initialMicePerHole);
			ld.mouseHolesAccumulator.AddDerived ((int)MouseHole.MouseHoleLocation.EAST, 
				                                    TweakableParams.instance.initialMicePerHole);
			ld.mouseHolesAccumulator.AddDerived ((int)MouseHole.MouseHoleLocation.WEST, 
				                                    TweakableParams.instance.initialMicePerHole);

			ld.mouseTypesAccumulator.AddDerived ((int)MouseConfig.MouseType.MOUSE_TYPE_SLOW);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs,
				                      3.0f, true, MouseHole.MouseHoleLocation.NORTH,
				                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
				                      0);
				
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, 
				                      true, MouseHole.MouseHoleLocation.SOUTH,
				                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
				                      1);		
				
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f,
				                      true, MouseHole.MouseHoleLocation.NORTH,
				                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
				                      2);
				
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, 
				                      true, MouseHole.MouseHoleLocation.SOUTH,
				                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
				                      1);	
		} else if (--glCounter == 0) {
			// Six slow mice,  different directions, still long pauses.
			ld.specialText = "Cat food helps Angus move faster!";
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
					BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS);

			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS);

			ld.tipConfig = new TipConfig ("multikill", 
			                             "Earn money for cat food by killing two mice at once!", 
			                             new Vector2 (0, 0));
			ld.tipPause = 2.0f;

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);	
		} else if (--glCounter == 0) {
			ld.specialText = "The mouse holes are growing!";
			ld.sprite = Resources.Load<UnityEngine.Sprite> ("Textures/cheese");

			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.NORTH);
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.SOUTH);
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.EAST);
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.WEST);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      0);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);	
		} else if (--glCounter == 0) {
			ld.specialText = "Get ready for faster mice!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
					MouseConfig.MouseType.MOUSE_TYPE_MEDIUM);
			ld.mouseTypesAccumulator.AddDerived ((int)MouseConfig.MouseType.MOUSE_TYPE_MEDIUM);

			// Eight mice, two medium.
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.1f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.1f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      2);	
		} else if (--glCounter == 0) {
			ld.specialText = "This cat food helps Angus see better!";
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
					BoostConfig.BoostType.BOOST_TYPE_GOOD_EYES);

			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_GOOD_EYES);

			// Eight mice, two medium.
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      0);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      2);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);	
		} else if (--glCounter == 0) {
			ld.specialText = "Some mice scoot back and forth...";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseWiggle (
					MouseConfig.MouseWiggleType.MOUSE_WIGGLE_BACK_FORTH);
			ld.wigglesAccumulator.AddNew ((int)MouseConfig.MouseWiggleType.MOUSE_WIGGLE_BACK_FORTH);

		} else if (--glCounter == 0) {
			ld.specialText = "Here comes the fastest mouse yet!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
					MouseConfig.MouseType.MOUSE_TYPE_FAST);
			ld.mouseTypesAccumulator.AddDerived ((int)MouseConfig.MouseType.MOUSE_TYPE_FAST);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_FAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      2);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_FAST, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      1);	
		} else if (--glCounter == 0) {
			ld.specialText = "Some mouse holes are getting bigger!";
			ld.sprite = Resources.Load<UnityEngine.Sprite> ("Textures/cheese");


			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.NORTH);
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.SOUTH);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      1);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_FAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_FAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_FAST, 
			                      2);	
		} else if (--glCounter == 0) {
			ld.specialText = "Try new Giant Paws cat food!";
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
				BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS);

			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS);

		} else if (--glCounter == 0) {
			ld.specialText = "Watch out for the super speedster mouse!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
				MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST);
			ld.mouseTypesAccumulator.AddDerived ((int)MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST);

		} else if (--glCounter == 0) {
			ld.specialText = "Some mouse holes are getting bigger!";
			ld.sprite = Resources.Load<UnityEngine.Sprite> ("Textures/cheese");
			
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.EAST);
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.WEST);

		} else if (--glCounter == 0) {
			ld.specialText = "Some mice dodge side to side...";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseWiggle (
					MouseConfig.MouseWiggleType.MOUSE_WIGGLE_SIDE_SIDE);
			ld.wigglesAccumulator.AddNew ((int)MouseConfig.MouseWiggleType.MOUSE_WIGGLE_SIDE_SIDE);
				
		} else if (--glCounter == 0) {
			ld.specialText = "Farty cat food... Yum!";
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
					BoostConfig.BoostType.BOOST_TYPE_FART);
			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_FART);

		} else if (--glCounter == 0) {
			ld.specialText = "One mouse hole is growing!";
			ld.sprite = Resources.Load<UnityEngine.Sprite> ("Textures/cheese");			
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.EAST);

		} else if (--glCounter == 0) {
			ld.specialText = "Here comes trouble....";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
				MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.2f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.4f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.1f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.2f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.3f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      2);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.1f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST, 
			                      1);	

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.2f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			                      1);
		} else if (--glCounter == 0) {
			ld.specialText = "Introducing... Poison Paws cat food!";
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
					BoostConfig.BoostType.BOOST_TYPE_POISON_PAWS);
			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_POISON_PAWS);
		} else if (--glCounter == 0) {
			ld.specialText = "Another mouse hole expands!";
			ld.sprite = Resources.Load<UnityEngine.Sprite> ("Textures/cheese");			
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.WEST);

		} else if (--glCounter == 0) {
			ld.specialText = "Some mice move round and round...";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseWiggle (
					MouseConfig.MouseWiggleType.MOUSE_WIGGLE_ROUND);
			ld.wigglesAccumulator.AddNew ((int)MouseConfig.MouseWiggleType.MOUSE_WIGGLE_ROUND);
		} else if (--glCounter == 0) {
			ld.specialText = "One hole is a little more roomy!";
			ld.sprite = Resources.Load<UnityEngine.Sprite> ("Textures/cheese");			
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.NORTH);

		} else if (--glCounter == 0) {
			ld.specialText = "A little more room for mice!";
			ld.sprite = Resources.Load<UnityEngine.Sprite> ("Textures/cheese");			
				
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.SOUTH);
		} else {
			return null;
		}

		return ld;
	}

	LevelDescription GenerateRandomLevelDescription (int gameLevel)
	{
		LevelDescription ld = new LevelDescription ();
		ld.explicitMouseDescs = GenerateRandomMiceForLevel (gameLevel);
		GenerateRandomWigglesForLevel (ld);

		return ld;
	}

	List<MouseConfig.MouseWiggleType> GetWiggleTypeDistributionForLevel (LevelDescription ld)
	{
		// FIXME(dbanks)
		// This could be better.
		List<MouseConfig.MouseWiggleType> retVal = new List<MouseConfig.MouseWiggleType> ();
		retVal.Add (MouseConfig.MouseWiggleType.NUM_TYPES);
		retVal.Add (MouseConfig.MouseWiggleType.NUM_TYPES);

		for (int i = 1; i <= ld.wigglesAccumulator.derivedTypes.Length; i++) {
			if (ld.wigglesAccumulator.derivedTypes[i] > 0) {
				retVal.Add ((MouseConfig.MouseWiggleType)i);
			}
		}
		return retVal;
	}

	void GenerateRandomWigglesForLevel (LevelDescription ld)
	{
		List<MouseConfig.MouseWiggleType> wiggleTypes = GetWiggleTypeDistributionForLevel (ld);
		for (int i = 0; i < ld.explicitMouseDescs.Count; i++) {
			ExplicitMouseDesc emd = ld.explicitMouseDescs [i];

			MouseConfig.MouseWiggleType wt = wiggleTypes [Random.Range (0, wiggleTypes.Count)];
			emd.AddWiggle (wt);
		}
	}

	List<ExplicitMouseDesc> GenerateRandomMiceForLevel (int gameLevel, bool allowSuperSpeedy = true)
	{
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();

		Random.seed = gameLevel;
		
		WaveType[] waveDistribution = GetWaveDistributionForLevel (gameLevel);
		QuasiRandomGenerator<WaveType> waveTypeGenerator = 
			new QuasiRandomGenerator<WaveType> (waveDistribution);
		
		MouseConfig.MouseType[] mouseDistribution = GetMouseDistributionForLevel (gameLevel, 
		                                                                        allowSuperSpeedy);
		QuasiRandomGenerator<MouseConfig.MouseType> mouseTypeGenerator = 
			new QuasiRandomGenerator<MouseConfig.MouseType> (mouseDistribution);

		// One wave per two levels.
		for (int i = 0; i < gameLevel/2; i++) {
			WaveType waveType = waveTypeGenerator.GetNextValue ();
			retVal.AddRange (this.GenerateWaveForLevel (waveType,
			                                            mouseTypeGenerator,
			                                            gameLevel));
		}
		return retVal;
	}

	WaveType[] GetWaveDistributionForLevel (int gameLevel)
	{
		/*
		if (gameLevel % 5 == 0) {
			return new WaveType[] {
				WaveType.WAVE_TYPE_PARADE,
				WaveType.WAVE_TYPE_PARADE,
				WaveType.WAVE_TYPE_PARADE,
			};
		}

		if (gameLevel % 7 == 0) {
			return new WaveType[] {
				WaveType.WAVE_TYPE_SPOUT,
				WaveType.WAVE_TYPE_SPOUT,
				WaveType.WAVE_TYPE_SPOUT,
			};	
		}
		*/

		return new WaveType[] {
			WaveType.WAVE_TYPE_DISTRIBUTED,
			WaveType.WAVE_TYPE_DISTRIBUTED,
			WaveType.WAVE_TYPE_PARADE,
			WaveType.WAVE_TYPE_SPOUT,
		};

	}
	
	MouseConfig.MouseType[] GetMouseDistributionForLevel (int gameLevel, bool allowSuperSpeedy)
	{
		if (!allowSuperSpeedy) {
			return new MouseConfig.MouseType[] {
				MouseConfig.MouseType.MOUSE_TYPE_FAST,
				MouseConfig.MouseType.MOUSE_TYPE_MEDIUM,
				MouseConfig.MouseType.MOUSE_TYPE_MEDIUM,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
			};
		} else {
			return new MouseConfig.MouseType[] {
				MouseConfig.MouseType.MOUSE_TYPE_SUPERFAST,
				MouseConfig.MouseType.MOUSE_TYPE_FAST,
				MouseConfig.MouseType.MOUSE_TYPE_FAST,
				MouseConfig.MouseType.MOUSE_TYPE_FAST,
				MouseConfig.MouseType.MOUSE_TYPE_MEDIUM,
				MouseConfig.MouseType.MOUSE_TYPE_MEDIUM,
				MouseConfig.MouseType.MOUSE_TYPE_MEDIUM,
				MouseConfig.MouseType.MOUSE_TYPE_MEDIUM,
				MouseConfig.MouseType.MOUSE_TYPE_MEDIUM,
				MouseConfig.MouseType.MOUSE_TYPE_MEDIUM,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
				MouseConfig.MouseType.MOUSE_TYPE_SLOW,
			};
		}
	}
	
	List<WaveType> GetWaveTypesForLevel (int gameLevel)
	{
		List<WaveType> proto = new List<WaveType> ();

		for (int i = 0; i < gameLevel; i++) {
			WaveType wt = (WaveType)Random.Range (0, (int)WaveType.NUM_TYPES);
			proto.Add (wt);
		}
		return proto;
	}

	List<ExplicitMouseDesc> GenerateWaveForLevel (WaveType wt, 
	                                              QuasiRandomGenerator<MouseConfig.MouseType> mouseTypeGenerator,
	                                              int gameLevel)
	{
		switch (wt) {
		case WaveType.WAVE_TYPE_DISTRIBUTED:
			return GenerateDistributedWave (mouseTypeGenerator);
		case WaveType.WAVE_TYPE_PARADE:
			return GenerateParadeWave (mouseTypeGenerator);
		default:
			return GenerateSpoutWave (mouseTypeGenerator);
		}
	}
	
	List<ExplicitMouseDesc> GenerateDistributedWave (
			QuasiRandomGenerator<MouseConfig.MouseType> mouseTypeGenerator)
	{
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();
		int count = Random.Range (minDistributedMice, 
		                          maxDistributedMice + 1);

		for (int i = 0; i < count; i++) {
			float pause = distributedPauseGenerator.GetNextValue ();
			bool isClockwise = (Random.Range (0, 2) == 0);
			MouseHole.MouseHoleLocation location = mouseHoleGenerator.GetNextValue ();
			MouseConfig.MouseType mType = mouseTypeGenerator.GetNextValue ();
			int track = trackGenerator.GetNextValue ();

			if (i == count - 1) {
				pause = distributedEndPause;
			}

			AddExplicitMouseDesc (ref retVal, 
			          pause,
			          isClockwise, 
			          location, 
			          mType, 
			          track);
		}
		return retVal;
	}
	
	List<ExplicitMouseDesc> GenerateParadeWave (
			QuasiRandomGenerator<MouseConfig.MouseType> mouseTypeGenerator)
	{
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();

		bool isClockwise = (Random.Range (0, 2) == 0);

		mouseHoleGenerator.RefreshValues ();
		int count = Random.Range (minParadeMice, maxParadeMice + 1);

		for (int i = 0; i < count; i++) {
			float pause = paradePause;
			MouseConfig.MouseType mType = mouseTypeGenerator.GetNextValue ();
			int track = trackGenerator.GetNextValue ();
			MouseHole.MouseHoleLocation location = mouseHoleGenerator.GetNextValue ();

			if (retVal.Count == count - 1) {
				pause = paradeEndPause;
			}
			
			AddExplicitMouseDesc (ref retVal, 
			          pause,
			          isClockwise, 
			          location, 
			          mType, 
			          track);
		}
		return retVal;
	}
	
	List<ExplicitMouseDesc> GenerateSpoutWave (
			QuasiRandomGenerator<MouseConfig.MouseType> mouseTypeGenerator)
	{
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();
		int count = Random.Range (minSpoutMice, 
		                          maxSpoutMice + 1);
		
		MouseHole.MouseHoleLocation location = mouseHoleGenerator.GetNextValue ();
		bool isClockwise = (Random.Range (0, 2) == 0);

		for (int i = 0; i < count; i++) {

			float pause = Random.Range (minSpoutPause, maxSpoutPause);
			MouseConfig.MouseType mType = mouseTypeGenerator.GetNextValue ();
			int track = trackGenerator.GetNextValue ();
			
			if (i == count - 1) {
				pause = spoutEndPause;
			}
			
			AddExplicitMouseDesc (ref retVal, 
			          pause,
			          isClockwise, 
			          location, 
			          mType, 
			          track);
			isClockwise = !isClockwise;
		}
		return retVal;
	}

	public List<ExplicitMouseDesc> GetHandcraftedMiceForLevel (int gameLevel)
	{
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();

		if (gameLevel == 1) {
			return retVal;
		} 

		if (gameLevel == 2) {
			// Six slow mice, a bit more random.
			AddExplicitMouseDesc (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.WEST,
			         MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			         1);
			
			AddExplicitMouseDesc (ref retVal, 3.0f, true, MouseHole.MouseHoleLocation.NORTH,
			          MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			         2);
			
			AddExplicitMouseDesc (ref retVal, 2.0f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			         0);
			
			AddExplicitMouseDesc (ref retVal, 1.0f, true, MouseHole.MouseHoleLocation.WEST,
			         MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			         1);
			
			AddExplicitMouseDesc (ref retVal, 0.1f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			         2);
			
			AddExplicitMouseDesc (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			         0);
			return retVal;
		} 

		if (gameLevel == 3) {
			// 
			AddExplicitMouseDesc (ref retVal, 0.5f, false, MouseHole.MouseHoleLocation.SOUTH,
			          MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			          2);
			
			AddExplicitMouseDesc (ref retVal, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			          MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			          1);
			
			AddExplicitMouseDesc (ref retVal, 1.0f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			          0);
			
			AddExplicitMouseDesc (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.WEST,
			          MouseConfig.MouseType.MOUSE_TYPE_FAST, 
			          2);
			
			AddExplicitMouseDesc (ref retVal, 0.1f, false, MouseHole.MouseHoleLocation.SOUTH,
			          MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			          1);
			
			AddExplicitMouseDesc (ref retVal, 4.0f, false, MouseHole.MouseHoleLocation.NORTH,
			          MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			          0);
			
			AddExplicitMouseDesc (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.WEST,
			          MouseConfig.MouseType.MOUSE_TYPE_MEDIUM, 
			          2);

			AddExplicitMouseDesc (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.WEST,
			          MouseConfig.MouseType.MOUSE_TYPE_FAST, 
			          1);
			
			AddExplicitMouseDesc (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			          MouseConfig.MouseType.MOUSE_TYPE_SLOW, 
			          0);
		} 
		return retVal;
	}

	void MakeQuasiRandomGenerators ()
	{
		MouseHole.MouseHoleLocation[] holeDist = new MouseHole.MouseHoleLocation[] {
			MouseHole.MouseHoleLocation.NORTH,
			MouseHole.MouseHoleLocation.EAST,
			MouseHole.MouseHoleLocation.SOUTH,
			MouseHole.MouseHoleLocation.WEST,
			
		};
		mouseHoleGenerator = new QuasiRandomGenerator<MouseHole.MouseHoleLocation> (holeDist);
		mouseHoleGenerator.refreshTrigger = 1;
		
		int[] trackDist = new int[TweakableParams.instance.numTracks];
		for (int i = 0; i < TweakableParams.instance.numTracks; i++) {
			trackDist [i] = i;
		}
		trackGenerator = new QuasiRandomGenerator<int> (trackDist);
		
		distributedPauseGenerator = new QuasiRandomGenerator<float> (distributedPauseDist);
	}

}
