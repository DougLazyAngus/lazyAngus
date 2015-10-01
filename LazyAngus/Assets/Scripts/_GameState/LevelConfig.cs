using UnityEngine;

using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class LevelDescription
{	
	public const float defaultSpriteSkew = 10;

	public enum WaveType
	{
		// Quasi-random, no two mice out of one hole same time.
		DISTRIBUTED = 0, 
		// a hole -> stream of mice.
		SPOUT, 
		// N holes simultaneous mice all same direction.
		PARADE,
		
		NUM_TYPES
	}
	

	public string specialText;
	public List<ExplicitMouseDesc> explicitMouseDescs;
	public Sprite sprite;
	public float spriteSkew;
	public float spriteScale;
	public float spriteYOffset;
	public TipConfig tipConfig;
	public float tipPause;

	public List<int> debugWaveTypes;

	public EnumAccumulator<MouseSinkController.MouseHoleLocation> mouseHolesAccumulator;
	public EnumAccumulator<BoostConfig.BoostType> boostsAccumulator;
	public EnumAccumulator<MouseConfig.MouseWiggleType> wigglesAccumulator;
	public EnumAccumulator<MouseConfig.MouseType> mouseTypesAccumulator;
	public EnumAccumulator<WaveType> waveTypesAccumulator;

	public int gameLevel;

	public string previousLevelClearedAchievementID;

	public Accumulator realAngusAccumulator;
		
	public LevelDescription ()
	{
		specialText = "";
		explicitMouseDescs = new List<ExplicitMouseDesc> ();
		debugWaveTypes = new List<int> ();
		sprite = null;
		spriteSkew = defaultSpriteSkew;
		spriteScale = 1f;
		spriteYOffset = 0;

		previousLevelClearedAchievementID = null;

		mouseHolesAccumulator = new EnumAccumulator<MouseSinkController.MouseHoleLocation> (
			(int)MouseSinkController.MouseHoleLocation.NUM_TYPES);
		boostsAccumulator = new EnumAccumulator<BoostConfig.BoostType> (
			(int)BoostConfig.BoostType.NUM_TYPES);
		wigglesAccumulator = new EnumAccumulator<MouseConfig.MouseWiggleType> (
			(int)MouseConfig.MouseWiggleType.NUM_TYPES);
		mouseTypesAccumulator = new EnumAccumulator<MouseConfig.MouseType> (
			(int)MouseConfig.MouseType.NUM_TYPES);
		waveTypesAccumulator = new EnumAccumulator<WaveType> (
			(int)WaveType.NUM_TYPES);
		realAngusAccumulator = new Accumulator ();
	}

	public void PropagateAccumulators(LevelDescription previousLd) {
		boostsAccumulator.DeriveFrom (previousLd.boostsAccumulator);
		mouseHolesAccumulator.DeriveFrom (previousLd.mouseHolesAccumulator);
		wigglesAccumulator.DeriveFrom (previousLd.wigglesAccumulator);
		mouseTypesAccumulator.DeriveFrom (previousLd.mouseTypesAccumulator);
		waveTypesAccumulator.DeriveFrom (previousLd.waveTypesAccumulator);
		realAngusAccumulator.DeriveFrom (previousLd.realAngusAccumulator);
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
	public float maxSpoutPause = 0.5f;
	public float spoutEndPause = 3f;

	public int minSpoutMice = 6;
	public int maxSpoutMice = 10;

	public int superSpeedMiceLevel = 7;

	private QuasiRandomGenerator<MouseSinkController.MouseHoleLocation> mouseHoleGenerator;
	private QuasiRandomGenerator<MouseSinkController.MouseHoleLocation> paradeMouseHoleGenerator;

	private QuasiRandomGenerator<int> trackGenerator;
	private QuasiRandomGenerator<float> distributedPauseGenerator;
	private Dictionary<int, LevelDescription> levelDescMap;
	private int[] boostLevelLocks;

	//We make a static variable to our MusicManager instance
	public static LevelConfig instance { get; private set; }

	const string newMouseTrapSpritePath = "Textures/Misc/mousetrap.01";
	string[] angusIntroSpritePaths = {
		"Textures/Misc/screen_art_angus.01", 
		"Textures/Misc/screen_art_angus.02", 
	};
	float[] angusIntroSpriteYOffsets = {
		15,
		-60, 
	};
	

	Sprite newMouseTrapSprite;
	Sprite [] angusIntroSprites;
	
	void Awake ()
	{
		instance = this;
		levelDescMap = new Dictionary<int, LevelDescription> ();
	}

	void Start ()
	{
		LoadSprites ();

		MakeQuasiRandomGenerators ();
		GeneratePresetLevels ();
		GenerateLevelLockInfo ();
	}

	void LoadSprites() {
		newMouseTrapSprite = Resources.Load<UnityEngine.Sprite> (newMouseTrapSpritePath);
		int count = angusIntroSpritePaths.Length;
		angusIntroSprites = new Sprite[count];
		for (int i = 0; i < count; i++) {
			angusIntroSprites[i] = Resources.Load<UnityEngine.Sprite> (angusIntroSpritePaths[i]); 
		}
	}
	
	void GenerateLevelLockInfo ()
	{
		boostLevelLocks = new int[(int)BoostConfig.BoostType.NUM_TYPES];
		for (int boostTypeInt = 0; boostTypeInt < (int)BoostConfig.BoostType.NUM_TYPES; boostTypeInt++) {
			int gameLevel = GetLevelLockInfoForBoost ((BoostConfig.BoostType)boostTypeInt);
			boostLevelLocks [boostTypeInt] = gameLevel;
		}
	}
	
	int GetLevelLockInfoForBoost (BoostConfig.BoostType bt)
	{		
		int gameLevel = 0;
		int btIndex = (int)bt;
		while (true) {
			gameLevel += 1;
			LevelDescription ld = GetLevelDescription (gameLevel);
			if (ld.boostsAccumulator.accumulators[btIndex].newCount  > 0) {
				return gameLevel;
			}
		}
	}

	public int GetLevelLock (BoostConfig.BoostType bType)
	{
		int index = (int)bType;
		return boostLevelLocks [index];
	}
	
	private void AddExplicitMouseDesc (ref List<ExplicitMouseDesc> retVal, 
	                                   float delayToNextMouse,
	                                   bool isClockwise, 
				                       MouseSinkController.MouseHoleLocation location, 
				                       MouseConfig.MouseType mType, 
				                       int track,
	                                   MouseConfig.MouseWiggleType wType = MouseConfig.MouseWiggleType.NONE)
	{
		ExplicitMouseDesc emd = new ExplicitMouseDesc (delayToNextMouse, 
		                                               isClockwise, 
		                                               location, 
		                                               mType, 
		                                               track, 
		                                               wType);

		retVal.Add (emd);
	}

	public LevelDescription GetCurrentLevelDescription ()
	{
		int level = GameLevelState.instance.gameLevel;
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

		int skeletonLevelCount = 50;
		int [] realAngusLevels = {
			1, 2, 4, 
			7, 10, 13,
			17, 21, 25,
			29, 33, 37
		};
		

		int gameLevel = 0;
		for (gameLevel = 1; gameLevel <= skeletonLevelCount; gameLevel++) {
			ld = MakePresetGameLevelSkeleton (gameLevel);

			ld.gameLevel = gameLevel;
			levelDescMap.Add (gameLevel, ld);
		}

		for (int i = 0; i < realAngusLevels.Length; i++) {
			int levelIndex = realAngusLevels[i];
			if (!levelDescMap.ContainsKey(levelIndex)) {
				Debug.Log("\n\n\nNot enough levels!!!\n\n\n");
				break;
			}
			ld = levelDescMap[levelIndex];
			ld.realAngusAccumulator.AddNew ();
		}



		FillOutPresetGameLevelSkeletons ();

		AddPreviousLevelClearedAchievements ();
	}

	void AddPreviousLevelClearedAchievements() {
		LevelDescription ld;

		/*
		ld = GetLevelDescription (2);
		ld.previousLevelClearedAchievementID = "Test01";
		
		ld = GetLevelDescription (3);
		ld.previousLevelClearedAchievementID = "Test02";
		*/
		
		ld = GetLevelDescription (6);
		ld.previousLevelClearedAchievementID = "Wave5";
		
		ld = GetLevelDescription (11);
		ld.previousLevelClearedAchievementID = "Wave10";
		
		ld = GetLevelDescription (21);
		ld.previousLevelClearedAchievementID = "Wave20";
		
		ld = GetLevelDescription (41);
		ld.previousLevelClearedAchievementID = "Wave40";
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
			if (levelDescMap.ContainsKey (gameLevel - 1)) {
				previousLd = levelDescMap [gameLevel - 1];
			}
	
			if (previousLd != null) {
				ld.PropagateAccumulators(previousLd);
			}

			if (ld.explicitMouseDescs.Count == 0) {
				ld.explicitMouseDescs = GenerateRandomMiceForLevel (ld);
				GenerateRandomWigglesForLevel (ld);
			}

			if (ld.sprite == null) {
				SetRandomSpriteForLevel(ld);
			}
		}
	}

	void SetRandomSpriteForLevel(LevelDescription ld) {
		// Not that random....
		int index = ld.gameLevel % angusIntroSprites.Length;
		ld.sprite = angusIntroSprites [index];
		ld.spriteSkew = 0;
		ld.spriteScale = 2;
		ld.spriteYOffset = angusIntroSpriteYOffsets [index];
	}

	void SetupInitialAccumulators (LevelDescription ld)
	{
		// N capacity per hole.
		ld.mouseHolesAccumulator.AddDerived ((int)MouseSinkController.MouseHoleLocation.NORTH, 
		                                     TweakableParams.GetInitialTrapsPerHole());
		ld.mouseHolesAccumulator.AddDerived ((int)MouseSinkController.MouseHoleLocation.SOUTH, 
		                                     TweakableParams.GetInitialTrapsPerHole());
		ld.mouseHolesAccumulator.AddDerived ((int)MouseSinkController.MouseHoleLocation.EAST, 
		                                     TweakableParams.GetInitialTrapsPerHole());
		ld.mouseHolesAccumulator.AddDerived ((int)MouseSinkController.MouseHoleLocation.WEST, 
		                                     TweakableParams.GetInitialTrapsPerHole());

		// only slow mice. 
		ld.mouseTypesAccumulator.AddDerived ((int)MouseConfig.MouseType.SLOW);

		// Only non-wiggles.
		ld.wigglesAccumulator.AddDerived ((int)MouseConfig.MouseWiggleType.NONE);

		// Basic distribution of wave types.
		ld.waveTypesAccumulator.AddDerived ((int)LevelDescription.WaveType.DISTRIBUTED, 3);
		ld.waveTypesAccumulator.AddDerived ((int)LevelDescription.WaveType.PARADE, 1);

		ld.realAngusAccumulator.AddNew();
		ld.realAngusAccumulator.AddDerived();
	}

	LevelDescription MakePresetGameLevelSkeleton (int gameLevel)
	{
		LevelDescription ld = new LevelDescription ();
		ld.explicitMouseDescs = new List<ExplicitMouseDesc> ();

		// Better than switch b/c it's easier to re-arrange levels.
		switch (gameLevel) {

		case 1:
			// Four slow mice, all same direction, long pauses.
			ld.specialText = "";

			SetupInitialAccumulators (ld);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f,
			                      true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, 
			                      true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f,
			                      true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, 
			                      true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);	
			return ld;

		case 2:
			ld.specialText = "Get ready for faster mice!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
				MouseConfig.MouseType.MEDIUM);
			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.MEDIUM);

			// Eight mice, two medium.
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.1f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.1f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);	
			return ld;
			
		case 3:
			ld.specialText = "A new mousetrap!";
			ld.sprite = newMouseTrapSprite;

			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.NORTH);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.3f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      0);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			return ld;
			
		case 4:
			ld.specialText = LazyAngusStrings.INTRO_BOOST_FAST;
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
				BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS);

			ld.tipConfig = new TipConfig ("explainBoosts", 
			                             LazyAngusStrings.TIP_EXPLAIN_BOOSTS);
			ld.tipPause = 1.7f;

			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			return ld;
			
		case 5:
			ld.specialText = "Another mousetrap!";
			ld.sprite = newMouseTrapSprite;
			
			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.SOUTH);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.5f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			return ld;
			
		case 6:
			ld.specialText = "Here comes the fastest mouse yet!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
				MouseConfig.MouseType.FAST);
			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.MEDIUM);
			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.FAST);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.FAST, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			return ld;
			
		case 7:
			ld.specialText = LazyAngusStrings.INTRO_BOOST_SEE;
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
					BoostConfig.BoostType.BOOST_TYPE_GOOD_EYES);

			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_GOOD_EYES);

			// Eight mice, two medium.
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      2);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			return ld;
			
		case 8:
			ld.specialText = "Whew, another trap!";
			ld.sprite = newMouseTrapSprite;

			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.EAST);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.FAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      2);	
			return ld;
			
		case 9:
			ld.specialText = "Some mice have learned to dodge!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseWiggle (
				MouseConfig.MouseWiggleType.BACK_FORTH);
			ld.wigglesAccumulator.AddNew ((int)MouseConfig.MouseWiggleType.BACK_FORTH);
			
			// Eight mice, two medium.
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.5f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      0, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.5f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.FAST, 
			                      1, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.FAST, 
			                      2);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);

			return ld;
			
		case 10:
			ld.specialText = LazyAngusStrings.INTRO_BOOST_GIANT;
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
				BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS);
			
			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.5f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.5f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);
			
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.8f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.3f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.4f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.3f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.FAST, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.3f, false, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.FAST, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.3f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.FAST, 
			                      0);
			
			return ld;
			
		case 11:
			ld.specialText = "I could use another mousetrap...";
			ld.sprite = newMouseTrapSprite;
			
			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.WEST);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.4f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.6f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.FAST, 
			                      1, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2,
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.2f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.FAST, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.4f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.6f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      1); 
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.6f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      3, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.8f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1); 
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 5.4f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1); 
			
			return ld;
			
		case 12:
			ld.specialText = "Watch out for the super speedster mouse!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
				MouseConfig.MouseType.SUPERFAST);

			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.MEDIUM);
			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.FAST);
			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.SUPERFAST);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);		

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);
			

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);	

			return ld;
			
		case 13:
			ld.specialText = LazyAngusStrings.INTRO_BOOST_FART;
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
				BoostConfig.BoostType.BOOST_TYPE_FART);
			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_FART);
			
			return ld;
			
		case 14:
			ld.specialText = "This new mousetrap should help!";
			ld.sprite = newMouseTrapSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.WEST);

			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.DISTRIBUTED, 1);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.PARADE, 1);

			return ld;
			
		case 15:
			ld.specialText = "Mice are weaving side to side!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseWiggle (
					MouseConfig.MouseWiggleType.SIDE_SIDE);

			ld.wigglesAccumulator.AddNew ((int)MouseConfig.MouseWiggleType.SIDE_SIDE);
				
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.FAST, 
			                      1, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.FAST, 
			                      2, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);				
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);	
		
			return ld;
			
		case 16:
			ld.specialText = "Here comes trouble....";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
				MouseConfig.MouseType.SUPERFAST);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.2f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      1);		

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.4f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.1f, true, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.2f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.3f, false, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      2);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.1f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      1);	

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.2f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			return ld;
			
		case 17:
			ld.specialText = "A new mousetrap!";
			ld.sprite = newMouseTrapSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.EAST);

			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.DISTRIBUTED);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.SPOUT);

			return ld;
			
		case 19:
			ld.specialText = "Uh-oh! Some mice dodge AND weave!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseWiggle (
					MouseConfig.MouseWiggleType.ROUND);
			ld.wigglesAccumulator.AddNew ((int)MouseConfig.MouseWiggleType.ROUND);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.3f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      2,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2,
			                      MouseConfig.MouseWiggleType.ROUND);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.1f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.4f, true, MouseSinkController.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      2,
			                      MouseConfig.MouseWiggleType.ROUND);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseSinkController.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      0,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.1f, true, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.2f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      1,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, false, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      2,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.2f, false, MouseSinkController.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, true, MouseSinkController.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      0,
			                      MouseConfig.MouseWiggleType.ROUND);
			return ld;
			
		case 20:
			ld.specialText = "Another mousetrap!";
			ld.sprite = newMouseTrapSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.SOUTH);
			return ld;
			
		case 21:
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.SPOUT);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.DISTRIBUTED);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.PARADE);

			return ld;
			
		case 23:
			ld.specialText = "Looks like another new mousetrap!";
			ld.sprite = newMouseTrapSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.NORTH);
			return ld;
			
		case 26:
			ld.specialText = "One more trap won't hurt!";
			ld.sprite = newMouseTrapSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.NORTH);
			return ld;
			
		case 27:
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.SPOUT);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.DISTRIBUTED);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.PARADE);
			return ld;
			
		case 29:
			ld.specialText = "This looks like a fine new mousetrap!";
			ld.sprite = newMouseTrapSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.WEST);
			return ld;
			
		case 32:
			ld.specialText = "New mousetrap? Don't mind if I do!";
			ld.sprite = newMouseTrapSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.SOUTH);
			return ld;
			
		case 35:
			ld.specialText = "One last mousetrap! Better make it count!";
			ld.sprite = newMouseTrapSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseSinkController.MouseHoleLocation.EAST);
			return ld;

		default:
			return ld;
		}
	}

	LevelDescription GenerateRandomLevelDescription (int gameLevel)
	{
		if (levelDescMap.Count == 0) {
			throw new System.Exception("Calling GenerateRandomLevel before any levels initialized.");
		}


		LevelDescription previousLd = null;
		if (gameLevel > 0) {
			previousLd = GetLevelDescription (gameLevel - 1);
		} else {
			throw new System.Exception("Called GenerateRandomLevel with zero or negative gameLevel");
		}

		LevelDescription ld = new LevelDescription ();

		ld.gameLevel = gameLevel;

		if (previousLd != null) {
			ld.PropagateAccumulators(previousLd);
		}

		ld.explicitMouseDescs = GenerateRandomMiceForLevel (ld);
		SetRandomSpriteForLevel(ld);

		GenerateRandomWigglesForLevel (ld);

		return ld;
	}


	void GenerateRandomWigglesForLevel (LevelDescription ld)
	{
		Random.seed = ld.gameLevel;

		List<int> wiggleDistribution = ld.wigglesAccumulator.GetDistribution ();
		QuasiRandomGenerator<int> wiggleTypeGenerator = 
			new QuasiRandomGenerator<int> (wiggleDistribution);
		

		for (int i = 0; i < ld.explicitMouseDescs.Count; i++) {
			ExplicitMouseDesc emd = ld.explicitMouseDescs [i];

			MouseConfig.MouseWiggleType wt = (MouseConfig.MouseWiggleType)wiggleTypeGenerator.GetNextValue ();
			emd.AddWiggle (wt);
		}
	}

	List<ExplicitMouseDesc> GenerateRandomMiceForLevel (LevelDescription ld)
	{
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();

		Random.seed = ld.gameLevel;
		
		List<int> waveDistribution = ld.waveTypesAccumulator.GetDistribution ();
		QuasiRandomGenerator<int> waveTypeGenerator = 
			new QuasiRandomGenerator<int> (waveDistribution);
		
		List<int> mouseDistribution = ld.mouseTypesAccumulator.GetDistribution ();
		QuasiRandomGenerator<int> mouseTypeGenerator = 
			new QuasiRandomGenerator<int> (mouseDistribution);

		// One wave per two levels.
		for (int i = 0; i < ld.gameLevel/2; i++) {
			LevelDescription.WaveType waveType =
				(LevelDescription.WaveType)waveTypeGenerator.GetNextValue ();
			retVal.AddRange (this.GenerateWaveForLevel (waveType,
			                                            mouseTypeGenerator,
			                                            ld));
			ld.debugWaveTypes.Add((int)waveType);
		}
		return retVal;
	}



	List<ExplicitMouseDesc> GenerateWaveForLevel (LevelDescription.WaveType wt, 
	                                              QuasiRandomGenerator<int> mouseTypeGenerator,
	                                              LevelDescription ld)
	{
		switch (wt) {
		case LevelDescription.WaveType.DISTRIBUTED:
			return GenerateDistributedWave (mouseTypeGenerator);
		case LevelDescription.WaveType.PARADE:
			return GenerateParadeWave (mouseTypeGenerator);
		default:
			return GenerateSpoutWave (mouseTypeGenerator);
		}
	}
	
	List<ExplicitMouseDesc> GenerateDistributedWave (
			QuasiRandomGenerator<int> mouseTypeGenerator)
	{
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();
		int count = Random.Range (minDistributedMice, 
		                          maxDistributedMice + 1);

		for (int i = 0; i < count; i++) {
			float pause = distributedPauseGenerator.GetNextValue ();
			bool isClockwise = (Random.Range (0, 2) == 0);
			MouseSinkController.MouseHoleLocation location = mouseHoleGenerator.GetNextValue ();
			MouseConfig.MouseType mType = 
				(MouseConfig.MouseType)mouseTypeGenerator.GetNextValue ();
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
			QuasiRandomGenerator<int> mouseTypeGenerator)
	{
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();

		bool isClockwise = (Random.Range (0, 2) == 0);

		paradeMouseHoleGenerator.RefreshValues ();
		int count = Random.Range (minParadeMice, maxParadeMice + 1);

		for (int i = 0; i < count; i++) {
			float pause = paradePause;
			MouseConfig.MouseType mType = 
				(MouseConfig.MouseType)mouseTypeGenerator.GetNextValue ();
			int track = trackGenerator.GetNextValue ();
			MouseSinkController.MouseHoleLocation location =
				paradeMouseHoleGenerator.GetNextValue ();

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
			QuasiRandomGenerator<int> mouseTypeGenerator)
	{
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();
		int count = Random.Range (minSpoutMice, 
		                          maxSpoutMice + 1);
		
		MouseSinkController.MouseHoleLocation location = mouseHoleGenerator.GetNextValue ();
		bool isClockwise = (Random.Range (0, 2) == 0);

		for (int i = 0; i < count; i++) {

			float pause = Random.Range (minSpoutPause, maxSpoutPause);
			MouseConfig.MouseType mType = 
				(MouseConfig.MouseType)mouseTypeGenerator.GetNextValue ();
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
	

	void MakeQuasiRandomGenerators ()
	{
		List<MouseSinkController.MouseHoleLocation> holeDist = new List<MouseSinkController.MouseHoleLocation> ();
		holeDist.Add (MouseSinkController.MouseHoleLocation.NORTH);
		holeDist.Add (MouseSinkController.MouseHoleLocation.EAST);
		holeDist.Add (MouseSinkController.MouseHoleLocation.SOUTH);
		holeDist.Add (MouseSinkController.MouseHoleLocation.WEST);

		paradeMouseHoleGenerator = new QuasiRandomGenerator<MouseSinkController.MouseHoleLocation> (holeDist);
		paradeMouseHoleGenerator.refreshTrigger = 0;
		
		holeDist.Add (MouseSinkController.MouseHoleLocation.NORTH);
		holeDist.Add (MouseSinkController.MouseHoleLocation.EAST);
		holeDist.Add (MouseSinkController.MouseHoleLocation.SOUTH);
		holeDist.Add (MouseSinkController.MouseHoleLocation.WEST);

		mouseHoleGenerator = new QuasiRandomGenerator<MouseSinkController.MouseHoleLocation> (holeDist);
		mouseHoleGenerator.refreshTrigger = 1;

		List<int> trackDist = new List<int> ();
		for (int i = 0; i < TweakableParams.numTracks; i++) {
			trackDist.Add (i);
		}
		trackGenerator = new QuasiRandomGenerator<int> (trackDist);
		
		distributedPauseGenerator = new QuasiRandomGenerator<float> (distributedPauseDist);
	}

	public int LevelForRealAngusUnlocks(int numUnlocks) {
		LevelDescription ld;

		int gameLevel = 0;

		while (true) {
			gameLevel++;
			if (!levelDescMap.ContainsKey(gameLevel)) {
				return gameLevel;
			}
			ld = levelDescMap[gameLevel];

			if (ld.realAngusAccumulator.derivedCount == numUnlocks) {
				return gameLevel;
			}
		}
	}
}
