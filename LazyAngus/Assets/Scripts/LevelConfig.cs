using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class LevelConfig {

	public static List<ExplicitMouseDesc> GetExplicitConfigForLevel (int gameLevel) {
		return new List<ExplicitMouseDesc>();
	}

	public static int[] GetMiceByTypeForLevel (int gameLevel) {
//		int[] level1Mice = {4, 0, 0};
		int[] level1Mice = {5, 5, 5};
		int[] level2Mice = {3, 3, 0};
		int[] level3Mice = {4, 4, 4};

		if (gameLevel == 1) {
			return level1Mice;
		}
		if (gameLevel == 2) {
			return level2Mice;
		}
		if (gameLevel == 3) {
			return level3Mice;
		}

		int[] retVal = {gameLevel + 3, gameLevel +3, gameLevel + 3};
		return retVal;
	}	
}
