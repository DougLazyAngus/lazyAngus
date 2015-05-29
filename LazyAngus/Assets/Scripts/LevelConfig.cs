using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class LevelConfig {

	public static List<ExplicitMouseDesc> GetExplicitConfigForLevel (int gameLevel) {
		return new List<ExplicitMouseDesc>();
	}

	public static int[] GetMiceByTypeForLevel (int gameLevel) {
		// Levels 1, nothing.
		if (gameLevel == 1) {
			int[] empty = {};
			return empty;
		}

		int[] retVal = {2, 2, 2};
		return retVal;
	}	
}
