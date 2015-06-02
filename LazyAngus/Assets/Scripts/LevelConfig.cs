using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class LevelConfig {

	private static void AddMouse(ref List<ExplicitMouseDesc> retVal, 
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

	public static List<ExplicitMouseDesc> GetExplicitConfigForLevel (int gameLevel) {
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
			         MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			         2);
			
			AddMouse (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			         0);
			
			AddMouse (ref retVal, 0.1f, true, MouseHole.MouseHoleLocation.WEST,
			         MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         1);
			
			AddMouse (ref retVal, 0.1f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			         2);
			
			AddMouse (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			         MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			         0);
			
			AddMouse (ref retVal, 2.0f, false, MouseHole.MouseHoleLocation.NORTH,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			         1);
		} else if (gameLevel == 3) {
			AddMouse (ref retVal, 0.5f, false, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			          2);
			
			AddMouse (ref retVal, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			          1);
			
			AddMouse (ref retVal, 1.0f, false, MouseHole.MouseHoleLocation.EAST,
			          MouseMove.MouseType.MOUSE_TYPE_FAST, 
			          0);
			
			AddMouse (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.WEST,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			          2);
			
			AddMouse (ref retVal, 0.1f, false, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_FAST, 
			          1);
			
			AddMouse (ref retVal, 4.0f, false, MouseHole.MouseHoleLocation.NORTH,
			          MouseMove.MouseType.MOUSE_TYPE_FAST, 
			          0);
			
			AddMouse (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.WEST,
			          MouseMove.MouseType.MOUSE_TYPE_MEDIUM, 
			          2);

			AddMouse (ref retVal, 2.0f, true, MouseHole.MouseHoleLocation.WEST,
			          MouseMove.MouseType.MOUSE_TYPE_SLOW, 
			          1);
			
			AddMouse (ref retVal, 3.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			          MouseMove.MouseType.MOUSE_TYPE_FAST, 
			          0);
		}
		return retVal;
	}

	public static int[] GetMiceByTypeForLevel (int gameLevel) {
		if (gameLevel < 4) {
			int[] retVal = {};
			return retVal;
		} else {
			int[] retVal = {gameLevel, gameLevel, gameLevel};
			return retVal;
		}
	}
}
