using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

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
	}

	void Start() {
		MakeQuasiRandomGenerators ();
	}

	private void AddMouse(ref List<ExplicitMouseDesc> retVal, 
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

	public List<ExplicitMouseDesc> GenerateMiceForLevel (int gameLevel) {
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc>();
		if (gameLevel <= 3) {
			return retVal;
		};

		Random.seed = gameLevel;
		
		WaveType[] waveDistribution = GetWaveDistributionForLevel (gameLevel);
		QuasiRandomGenerator<WaveType> waveTypeGenerator = 
			new QuasiRandomGenerator<WaveType> (waveDistribution);
		
		MouseMove.MouseType[] mouseDistribution = GetMouseDistributionForLevel (gameLevel);
		QuasiRandomGenerator<MouseMove.MouseType> mouseTypeGenerator = 
			new QuasiRandomGenerator<MouseMove.MouseType> (mouseDistribution);

		// One wave per level.
		for (int i = 0; i < gameLevel; i++) {
			WaveType waveType = waveTypeGenerator.GetNextValue();
			retVal.AddRange (this.GenerateWaveForLevel (waveType,
			                                            mouseTypeGenerator,
			                                            gameLevel));
		}
		return retVal;
	}

	WaveType[] GetWaveDistributionForLevel(int gameLevel) {
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

		return new WaveType[] {
			WaveType.WAVE_TYPE_DISTRIBUTED,
			WaveType.WAVE_TYPE_DISTRIBUTED,
			WaveType.WAVE_TYPE_PARADE,
			WaveType.WAVE_TYPE_SPOUT,
		};

	}
	
	MouseMove.MouseType[] GetMouseDistributionForLevel(int gameLevel) {
		if (gameLevel < superSpeedMiceLevel) {
			return new MouseMove.MouseType[] {
				MouseMove.MouseType.MOUSE_TYPE_FAST,
				MouseMove.MouseType.MOUSE_TYPE_MEDIUM,
				MouseMove.MouseType.MOUSE_TYPE_MEDIUM,
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
			return GenerateDistributedWaveForLevel (mouseTypeGenerator, 
			                                       gameLevel);
		case WaveType.WAVE_TYPE_PARADE:
			return GenerateParadeWaveForLevel (mouseTypeGenerator, 
			                                  gameLevel);
		default:
			return GenerateSpoutWaveForLevel (mouseTypeGenerator, 
			                                 gameLevel);
		}
	}
	
	List<ExplicitMouseDesc> GenerateDistributedWaveForLevel (QuasiRandomGenerator<MouseMove.MouseType> mouseTypeGenerator,
	                                                         int gameLevel) {
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

			AddMouse (ref retVal, 
			          pause,
			          isClockwise, 
			          location, 
			          mType, 
			          track);
		}
		return retVal;
	}
	
	List<ExplicitMouseDesc> GenerateParadeWaveForLevel (QuasiRandomGenerator<MouseMove.MouseType> mouseTypeGenerator,
	                                                         int gameLevel) {
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
			
			AddMouse (ref retVal, 
			          pause,
			          isClockwise, 
			          location, 
			          mType, 
			          track);
		}
		return retVal;
	}
	
	List<ExplicitMouseDesc> GenerateSpoutWaveForLevel (QuasiRandomGenerator<MouseMove.MouseType> mouseTypeGenerator,
	                                                   int gameLevel) {
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
			
			AddMouse (ref retVal, 
			          pause,
			          isClockwise, 
			          location, 
			          mType, 
			          track);
		}
		return retVal;
	}


	public List<ExplicitMouseDesc> GetExplicitMiceForLevel (int gameLevel) {
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc>();

		if (gameLevel == 1) {
			AddMouse (ref retVal, 4.0f, true, MouseHole.MouseHoleLocation.NORTH,
			         MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         0);
			
			AddMouse (ref retVal, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			         MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         1);		

			AddMouse (ref retVal, 1.0f, true, MouseHole.MouseHoleLocation.WEST,
			         MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         2);
			
			AddMouse (ref retVal, 0.1f, false, MouseHole.MouseHoleLocation.SOUTH,
			         MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         1);
			
			AddMouse (ref retVal, 0.1f, true, MouseHole.MouseHoleLocation.NORTH,
			         MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         0);
			
		} else if (gameLevel == 2) {
			AddMouse (ref retVal, 1.0f, false, MouseHole.MouseHoleLocation.WEST,
			         MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         1);
			
			AddMouse (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.NORTH,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         2);
			
			AddMouse (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			         0);
			
			AddMouse (ref retVal, 0.1f, true, MouseHole.MouseHoleLocation.WEST,
			         MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         1);
			
			AddMouse (ref retVal, 0.1f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         2);
			
			AddMouse (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			         0);
			
			AddMouse (ref retVal, 2.0f, false, MouseHole.MouseHoleLocation.NORTH,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         1);
		} else if (gameLevel == 3) {
			AddMouse (ref retVal, 0.5f, false, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			          2);
			
			AddMouse (ref retVal, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			          1);
			
			AddMouse (ref retVal, 1.0f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			          0);
			
			AddMouse (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.WEST,
			          MouseMove.MouseType.MOUSE_TYPE_FAST, 
			          2);
			
			AddMouse (ref retVal, 0.1f, false, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			          1);
			
			AddMouse (ref retVal, 4.0f, false, MouseHole.MouseHoleLocation.NORTH,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			          0);
			
			AddMouse (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.WEST,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			          2);

			AddMouse (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.WEST,
			          MouseMove.MouseType.MOUSE_TYPE_FAST, 
			          1);
			
			AddMouse (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.SOUTH,
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
