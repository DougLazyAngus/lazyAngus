using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class LevelConfig : MonoBehaviour {
	public float minMousePause = 0.1f;
	public float maxMousePause = 4f;

	public int numSteps = 5;

	//We make a static variable to our MusicManager instance
	public static LevelConfig instance { get; private set; }

	void Awake() {
		instance = this;
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

	public List<ExplicitMouseDesc> GetExplicitConfigForLevel (int gameLevel) {
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

	public int[] GetMiceByTypeForLevel (int gameLevel) {
		if (gameLevel < 4) {
			int[] retVal = {};
			return retVal;
		} else {
			int[] retVal = {gameLevel+2, gameLevel, gameLevel-2};
			return retVal;
		}
	}

	public float[] GetTimeRanges(int gameLevel) {
		// Some notion of: as game level goes up, there are more likely to be small 
		// pauses between mice.
		// FIXME(dbanks)
		// For now, just do a step...
		float[] retVal = new float[numSteps];

		for (int i = 0; i < numSteps; i++) {
			retVal[i] = minMousePause + (i * maxMousePause - minMousePause)/(numSteps - 1);
		}	
		return retVal;
	}

}
