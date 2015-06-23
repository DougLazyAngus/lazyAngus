using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class LevelDescription {
	public const int NORTH_BIT = (1 << (int)(MouseHole.MouseHoleLocation.NORTH));
	public const int EAST_BIT = (1 << (int)(MouseHole.MouseHoleLocation.EAST));
	public const int SOUTH_BIT = (1 << (int)(MouseHole.MouseHoleLocation.SOUTH));
	public const int WEST_BIT = (1 << (int)(MouseHole.MouseHoleLocation.WEST));

	public string specialText;
	public List<ExplicitMouseDesc> explicitMouseDesc;
	public int growMouseHoles;

	public LevelDescription() {
		growMouseHoles = 0;
		specialText = "";
		explicitMouseDesc = new List<ExplicitMouseDesc> ();
	}
}

public class LevelConfig : MonoBehaviour {

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

	enum WaveType {
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


	void Awake() {
		instance = this;
		levelDescMap = new Dictionary<int, LevelDescription> ();
	}

	void Start() {
		MakeQuasiRandomGenerators ();
	}

	private void AddExplicitMouseDesc(ref List<ExplicitMouseDesc> retVal, 
	                        float pause,
	                        bool isClockwise, 
	                        MouseHole.MouseHoleLocation location, 
	                        MouseMove.MouseType mType, 
	                        int track) {
		ExplicitMouseDesc emd;

		emd.delayToNextMouse = pause;
		emd.isClockwise = isClockwise;
		emd.mouseHoleLocation = location;
		emd.mouseType = mType;
		emd.track = track;
		retVal.Add (emd);
	}

	public LevelDescription GetLevelDescription(int gameLevel) {
		LevelDescription ld;
		if (levelDescMap.ContainsKey (gameLevel)) {
			ld = levelDescMap [gameLevel];
		} else {
			ld = new LevelDescription ();
			ld = MakeLevelDescription (gameLevel);
			levelDescMap.Add (gameLevel, ld);
		}
		return ld;
	}
	
	LevelDescription MakeLevelDescription(int gameLevel) {
		LevelDescription ld = new LevelDescription ();
		ld.explicitMouseDesc = new List<ExplicitMouseDesc> ();

		switch (gameLevel) {
		case 1:
			{
				// Four slow mice, all same direction, long pauses.
				ld.specialText = "";
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);	
				break;
			}
			
		case 2:
			{
				// Six slow mice,  different directions, still long pauses.
				ld.specialText = "Kitty treats help Angus move faster!";

				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 4.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);	
				break;
			}
			
		case 3:
			{
				// Six slow mice,  different directions, short pauses.
				ld.specialText = "The mouse holes are growing!";
				ld.growMouseHoles = (LevelDescription.NORTH_BIT | 
					LevelDescription.EAST_BIT | 
					LevelDescription.SOUTH_BIT | 
					LevelDescription.WEST_BIT);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 0.1f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 0.1f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      0);		
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 1.5f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 4.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);	
				break;
			}

			
		case 4:
			{
				ld.specialText = "Get ready for faster mice!";

				// Eight mice, two medium.
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 1.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 2.1f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      2);		
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.1f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			                      1);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 2.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 1.5f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 2.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      0);	
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 4.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			                      2);	
				break;
			}

		case 5:
			{
				ld.specialText = "This new kitty treat helps Angus see better!";

				// Eight mice, two medium.
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 2.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			                      1);		
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 1.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 0.1f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			                      0);		
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      2);	
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 0.1f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 4.0f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);	
				break;
			}

		case 6:
			{
				ld.specialText = "Here comes the fastest mouse yet!";
			
				// ten mice, two medium, two fast.
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      2);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 2.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 2.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_FAST, 
			                      0);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 1.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);		
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			                      2);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 2.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);	
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 1.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      0);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 4.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			                      2);	
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseMove.MouseType.MOUSE_TYPE_FAST, 
			                      1);
			
				AddExplicitMouseDesc (ref ld.explicitMouseDesc, 4.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			                      1);	
				break;
			}

		case 7:
		{
			ld.specialText = "The mouse holes are growing again!";
			ld.growMouseHoles = (LevelDescription.NORTH_BIT | 
			                     LevelDescription.EAST_BIT | 
			                     LevelDescription.SOUTH_BIT | 
			                     LevelDescription.WEST_BIT);
			
			ld.explicitMouseDesc = GenerateMiceForLevel (gameLevel, false);
			break;
		}
			
		case 8:
		{
			ld.specialText = "Watch out for the super speedster mouse!";

			ld.explicitMouseDesc = GenerateMiceForLevel (gameLevel);
			break;
		}
			
		default:
			ld.specialText = "";
			ld.explicitMouseDesc = GenerateMiceForLevel (gameLevel);
			break;
		}
		return ld;
	}

	List<ExplicitMouseDesc> GenerateMiceForLevel (int gameLevel, bool allowSuperSpeedy = true) {
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc>();

		Random.seed = gameLevel;
		
		WaveType[] waveDistribution = GetWaveDistributionForLevel (gameLevel);
		QuasiRandomGenerator<WaveType> waveTypeGenerator = 
			new QuasiRandomGenerator<WaveType> (waveDistribution);
		
		MouseMove.MouseType[] mouseDistribution = GetMouseDistributionForLevel (gameLevel, 
		                                                                        allowSuperSpeedy);
		QuasiRandomGenerator<MouseMove.MouseType> mouseTypeGenerator = 
			new QuasiRandomGenerator<MouseMove.MouseType> (mouseDistribution);

		// One wave per two levels.
		for (int i = 0; i < gameLevel/2; i++) {
			WaveType waveType = waveTypeGenerator.GetNextValue();
			retVal.AddRange (this.GenerateWaveForLevel (waveType,
			                                            mouseTypeGenerator,
			                                            gameLevel));
		}
		return retVal;
	}

	WaveType[] GetWaveDistributionForLevel(int gameLevel) {
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
	
	MouseMove.MouseType[] GetMouseDistributionForLevel(int gameLevel, bool allowSuperSpeedy) {
		if (!allowSuperSpeedy) {
			return new MouseMove.MouseType[] {
				MouseMove.MouseType.MOUSE_TYPE_FAST,
				MouseMove.MouseType.MOUSE_TYPE_MEDIUM,
				MouseMove.MouseType.MOUSE_TYPE_MEDIUM,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
			};
		} else {
			return new MouseMove.MouseType[] {
				MouseMove.MouseType.MOUSE_TYPE_SUPERFAST,
				MouseMove.MouseType.MOUSE_TYPE_FAST,
				MouseMove.MouseType.MOUSE_TYPE_FAST,
				MouseMove.MouseType.MOUSE_TYPE_FAST,
				MouseMove.MouseType.MOUSE_TYPE_MEDIUM,
				MouseMove.MouseType.MOUSE_TYPE_MEDIUM,
				MouseMove.MouseType.MOUSE_TYPE_MEDIUM,
				MouseMove.MouseType.MOUSE_TYPE_MEDIUM,
				MouseMove.MouseType.MOUSE_TYPE_MEDIUM,
				MouseMove.MouseType.MOUSE_TYPE_MEDIUM,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
				MouseMove.MouseType.MOUSE_TYPE_SLOW,
			};
		}
	}
	
	List<WaveType> GetWaveTypesForLevel(int gameLevel) {
		List<WaveType> proto = new List<WaveType> ();

		for (int i = 0; i < gameLevel; i++) {
			WaveType wt = (WaveType)Random.Range (0, (int)WaveType.NUM_TYPES);
			proto.Add (wt);
		}
		return proto;
	}

	List<ExplicitMouseDesc> GenerateWaveForLevel (WaveType wt, 
	                                              QuasiRandomGenerator<MouseMove.MouseType> mouseTypeGenerator,
	                                              int gameLevel) {
		switch (wt) {
		case WaveType.WAVE_TYPE_DISTRIBUTED:
			return GenerateDistributedWave (mouseTypeGenerator);
		case WaveType.WAVE_TYPE_PARADE:
			return GenerateParadeWave (mouseTypeGenerator);
		default:
			return GenerateSpoutWave (mouseTypeGenerator);
		}
	}
	
	List<ExplicitMouseDesc> GenerateDistributedWave(
			QuasiRandomGenerator<MouseMove.MouseType> mouseTypeGenerator) {
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();
		int count = Random.Range (minDistributedMice, 
		                          maxDistributedMice + 1);

		for (int i = 0; i < count; i++) {
			float pause = distributedPauseGenerator.GetNextValue ();
			bool isClockwise = (Random.Range (0, 2) == 0);
			MouseHole.MouseHoleLocation location = mouseHoleGenerator.GetNextValue ();
			MouseMove.MouseType mType = mouseTypeGenerator.GetNextValue ();
			int track = trackGenerator.GetNextValue ();

			if (i == count-1) {
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
			QuasiRandomGenerator<MouseMove.MouseType> mouseTypeGenerator) {
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();

		bool isClockwise = (Random.Range (0, 2) == 0);

		mouseHoleGenerator.RefreshValues ();
		int count = Random.Range (minParadeMice, maxParadeMice + 1);

		for (int i = 0; i < count; i++) {
			float pause = paradePause;
			MouseMove.MouseType mType = mouseTypeGenerator.GetNextValue ();
			int track = trackGenerator.GetNextValue ();
			MouseHole.MouseHoleLocation location = mouseHoleGenerator.GetNextValue();

			if (retVal.Count == count-1) {
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
			QuasiRandomGenerator<MouseMove.MouseType> mouseTypeGenerator) {
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();
		int count = Random.Range (minSpoutMice, 
		                          maxSpoutMice + 1);
		
		MouseHole.MouseHoleLocation location = mouseHoleGenerator.GetNextValue ();
		bool isClockwise = (Random.Range (0, 2) == 0);

		for (int i = 0; i < count; i++) {

			float pause = Random.Range (minSpoutPause, maxSpoutPause);
			MouseMove.MouseType mType = mouseTypeGenerator.GetNextValue ();
			int track = trackGenerator.GetNextValue ();
			
			if (i == count-1) {
				pause = spoutEndPause;
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


	public List<ExplicitMouseDesc> GetHandcraftedMiceForLevel (int gameLevel) {
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc>();

		if (gameLevel == 1) {
			return retVal;
		} 

		if (gameLevel == 2) {
			// Six slow mice, a bit more random.
			AddExplicitMouseDesc (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.WEST,
			         MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         1);
			
			AddExplicitMouseDesc (ref retVal, 3.0f, true, MouseHole.MouseHoleLocation.NORTH,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         2);
			
			AddExplicitMouseDesc (ref retVal, 2.0f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         0);
			
			AddExplicitMouseDesc (ref retVal, 1.0f, true, MouseHole.MouseHoleLocation.WEST,
			         MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         1);
			
			AddExplicitMouseDesc (ref retVal, 0.1f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         2);
			
			AddExplicitMouseDesc (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         0);
			return retVal;
		} 

		if (gameLevel == 3) {
			// 
			AddExplicitMouseDesc (ref retVal, 0.5f, false, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			          2);
			
			AddExplicitMouseDesc (ref retVal, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			          1);
			
			AddExplicitMouseDesc (ref retVal, 1.0f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			          0);
			
			AddExplicitMouseDesc (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.WEST,
			          MouseMove.MouseType.MOUSE_TYPE_FAST, 
			          2);
			
			AddExplicitMouseDesc (ref retVal, 0.1f, false, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			          1);
			
			AddExplicitMouseDesc (ref retVal, 4.0f, false, MouseHole.MouseHoleLocation.NORTH,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			          0);
			
			AddExplicitMouseDesc (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.WEST,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			          2);

			AddExplicitMouseDesc (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.WEST,
			          MouseMove.MouseType.MOUSE_TYPE_FAST, 
			          1);
			
			AddExplicitMouseDesc (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			          0);
		} 
		return retVal;
	}


	void MakeQuasiRandomGenerators() {
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
