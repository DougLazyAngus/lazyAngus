using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class LevelConfig {

	public static List<ExplicitMouseDesc> GetExplicitConfigForLevel (int gameLevel) {
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc>();

		ExplicitMouseDesc emd;
		if (gameLevel == 1) {
			emd.delayToNextMouse = 4.0f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.NORTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 0;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 3.0f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.SOUTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 1;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 1.0f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.WEST;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 2;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 0.1f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.SOUTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 0;
			retVal.Add (emd);

			emd.delayToNextMouse = 0.1f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.NORTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 1;
			retVal.Add (emd);
		} else if (gameLevel == 2) {
			emd.delayToNextMouse = 1.0f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.WEST;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 2;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 3.0f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.SOUTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_MEDIUM;
			emd.track = 0;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 3.0f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.NORTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 1;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 1.0f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.NORTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 0;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 0.1f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.SOUTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_MEDIUM;
			emd.track = 1;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 0.1f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.WEST;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_MEDIUM;
			emd.track = 2;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 2.0f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.EAST;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 0;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 1.0f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.NORTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_MEDIUM;
			emd.track = 2;
			retVal.Add (emd);
		} else if (gameLevel == 3) {
			emd.delayToNextMouse = 1.0f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.SOUTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 2;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 2.0f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.SOUTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_FAST;
			emd.track = 0;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 0.1f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.NORTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 1;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 0.1f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.NORTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_MEDIUM;
			emd.track = 0;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 4.0f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.WEST;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_FAST;
			emd.track = 1;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 1.0f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.EAST;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_FAST;
			emd.track = 2;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 2.0f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.NORTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 2;
			retVal.Add (emd);
			
			emd.delayToNextMouse = 0.5f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.NORTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_MEDIUM;
			emd.track = 1;
			retVal.Add (emd);	
			
			emd.delayToNextMouse = 0.5f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.SOUTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_FAST;
			emd.track = 0;
			retVal.Add (emd);	
			
			emd.delayToNextMouse = 2.0f;
			emd.isClockwise = true;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.WEST;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_MEDIUM;
			emd.track = 1;
			retVal.Add (emd);	
			
			emd.delayToNextMouse = 3.0f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.WEST;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_FAST;
			emd.track = 2;
			retVal.Add (emd);	
			
			emd.delayToNextMouse = 0.1f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.SOUTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_FAST;
			emd.track = 0;
			retVal.Add (emd);	
			
			emd.delayToNextMouse = 1.0f;
			emd.isClockwise = false;
			emd.mouseHoleLocation = MouseHole.MouseHoleLocation.NORTH;
			emd.mouseType = MouseMove.MouseType.MOUSE_TYPE_SLOW;
			emd.track = 1;
			retVal.Add (emd);	
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
