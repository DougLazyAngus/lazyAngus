﻿using UnityEngine;

using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class LevelDescription
{	
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
	public TipConfig tipConfig;
	public float tipPause;

	public EnumAccumulator<MouseHole.MouseHoleLocation> mouseHolesAccumulator;
	public EnumAccumulator<BoostConfig.BoostType> boostsAccumulator;
	public EnumAccumulator<MouseConfig.MouseWiggleType> wigglesAccumulator;
	public EnumAccumulator<MouseConfig.MouseType> mouseTypesAccumulator;
	public EnumAccumulator<WaveType> waveTypesAccumulator;

	public int gameLevel;

	public string previousLevelClearedAchievementID;
		
	public LevelDescription ()
	{
		specialText = "";
		explicitMouseDescs = new List<ExplicitMouseDesc> ();
		sprite = null;

		previousLevelClearedAchievementID = null;

		mouseHolesAccumulator = new EnumAccumulator<MouseHole.MouseHoleLocation> (
			(int)MouseHole.MouseHoleLocation.NUM_TYPES);
		boostsAccumulator = new EnumAccumulator<BoostConfig.BoostType> (
			(int)BoostConfig.BoostType.NUM_TYPES);
		wigglesAccumulator = new EnumAccumulator<MouseConfig.MouseWiggleType> (
			(int)MouseConfig.MouseWiggleType.NUM_TYPES);
		mouseTypesAccumulator = new EnumAccumulator<MouseConfig.MouseType> (
			(int)MouseConfig.MouseType.NUM_TYPES);
		waveTypesAccumulator = new EnumAccumulator<WaveType> (
			(int)WaveType.NUM_TYPES);
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
	private int[] boostLevelLocks;

	//We make a static variable to our MusicManager instance
	public static LevelConfig instance { get; private set; }

	const string mouseHoleIntroSpritePath = "Textures/MouseHole/cheese";
	const string angusIntroSpritePath = "Textures/Misc/smile-kitty";
	
	Sprite mouseHoleIntroSprite;
	Sprite angusIntroSprite;
	
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
		mouseHoleIntroSprite = Resources.Load<UnityEngine.Sprite> (mouseHoleIntroSpritePath);
		angusIntroSprite = Resources.Load<UnityEngine.Sprite> (angusIntroSpritePath);
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
			if (ld.boostsAccumulator.newCount [btIndex] > 0) {
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
				                       MouseHole.MouseHoleLocation location, 
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
				ld.boostsAccumulator.DeriveFrom (previousLd.boostsAccumulator);
				ld.mouseHolesAccumulator.DeriveFrom (previousLd.mouseHolesAccumulator);
				ld.wigglesAccumulator.DeriveFrom (previousLd.wigglesAccumulator);
				ld.mouseTypesAccumulator.DeriveFrom (previousLd.mouseTypesAccumulator);
				ld.waveTypesAccumulator.DeriveFrom (previousLd.waveTypesAccumulator);
			}

			if (ld.explicitMouseDescs.Count == 0) {
				ld.explicitMouseDescs = GenerateRandomMiceForLevel (ld);
				GenerateRandomWigglesForLevel (ld);
			}

			if (ld.sprite == null) {
				ld.sprite = angusIntroSprite;
			}
		}
	}

	void SetupInitialAccumulators (LevelDescription ld)
	{
		// N capacity per hole.
		ld.mouseHolesAccumulator.AddDerived ((int)MouseHole.MouseHoleLocation.NORTH, 
		                                     TweakableParams.GetInitialMicePerHole());
		ld.mouseHolesAccumulator.AddDerived ((int)MouseHole.MouseHoleLocation.SOUTH, 
		                                     TweakableParams.GetInitialMicePerHole());
		ld.mouseHolesAccumulator.AddDerived ((int)MouseHole.MouseHoleLocation.EAST, 
		                                     TweakableParams.GetInitialMicePerHole());
		ld.mouseHolesAccumulator.AddDerived ((int)MouseHole.MouseHoleLocation.WEST, 
		                                     TweakableParams.GetInitialMicePerHole());

		// only slow mice. 
		ld.mouseTypesAccumulator.AddDerived ((int)MouseConfig.MouseType.SLOW);

		// Only non-wiggles.
		ld.wigglesAccumulator.AddDerived ((int)MouseConfig.MouseWiggleType.NONE);

		// Basic distribution of wave types.
		ld.waveTypesAccumulator.AddDerived ((int)LevelDescription.WaveType.DISTRIBUTED, 3);
		ld.waveTypesAccumulator.AddDerived ((int)LevelDescription.WaveType.PARADE, 1);
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

			SetupInitialAccumulators (ld);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f,
				                      true, MouseHole.MouseHoleLocation.NORTH,
				                      MouseConfig.MouseType.SLOW, 
				                      2);
				
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, 
				                      true, MouseHole.MouseHoleLocation.SOUTH,
				                      MouseConfig.MouseType.SLOW, 
				                      1);	
			return ld;
		}

		if (--glCounter == 0) {
			ld.specialText = "Get ready for faster mice!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
				MouseConfig.MouseType.MEDIUM);
			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.MEDIUM);
			
			// Eight mice, two medium.
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.1f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.1f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);	
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "There's more room in one of the mouse holes!";
			ld.sprite = mouseHoleIntroSprite;

			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.NORTH);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.3f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      0);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Cat food helps Angus move faster!";
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
				BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS);
			
			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_FAST_PAWS);
			
			ld.tipConfig = new TipConfig ("multikill", 
			                              "Earn money for cat food by killing two mice at once!");
			ld.tipPause = 2.0f;
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "There's more room in one of the mouse holes!";
			ld.sprite = mouseHoleIntroSprite;
			
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.SOUTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.5f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Here comes the fastest mouse yet!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
				MouseConfig.MouseType.FAST);
			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.MEDIUM);
			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.FAST);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.FAST, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "This cat food helps Angus see better!";
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
					BoostConfig.BoostType.BOOST_TYPE_GOOD_EYES);

			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_GOOD_EYES);

			// Eight mice, two medium.
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      2);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Some mouse holes are getting bigger!";
			ld.sprite = mouseHoleIntroSprite;

			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.EAST);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.FAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 4.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      2);	
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Some mice have learned to dodge!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseWiggle (
				MouseConfig.MouseWiggleType.BACK_FORTH);
			ld.wigglesAccumulator.AddNew ((int)MouseConfig.MouseWiggleType.BACK_FORTH);
			
			// Eight mice, two medium.
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.5f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      0, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.5f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.FAST, 
			                      1, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.FAST, 
			                      2);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);

			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Try new Giant Paws cat food!";
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
				BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS);

			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_BIG_PAWS);

			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Some mouse holes are getting bigger!";
			ld.sprite = mouseHoleIntroSprite;
			
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.WEST);
			
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Watch out for the super speedster mouse!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
				MouseConfig.MouseType.SUPERFAST);

			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.MEDIUM);
			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.FAST);
			ld.mouseTypesAccumulator.AddNew ((int)MouseConfig.MouseType.SUPERFAST);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);		

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);
			

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.BACK_FORTH);	

			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Farty cat food... Yum!";
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
				BoostConfig.BoostType.BOOST_TYPE_FART);
			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_FART);
			
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "One mouse hole is growing!";
			ld.sprite = mouseHoleIntroSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.WEST);

			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.DISTRIBUTED, 1);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.PARADE, 1);

			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Mice are weaving side to side!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseWiggle (
					MouseConfig.MouseWiggleType.SIDE_SIDE);

			ld.wigglesAccumulator.AddNew ((int)MouseConfig.MouseWiggleType.SIDE_SIDE);
				
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 3.0f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.FAST, 
			                      1, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.FAST, 
			                      2, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);				
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      0);
			
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      0, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SLOW, 
			                      2, 
			                      MouseConfig.MouseWiggleType.SIDE_SIDE);	
		
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Here comes trouble....";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseType (
				MouseConfig.MouseType.SUPERFAST);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.2f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      1);		

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.4f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      2);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.1f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.2f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.3f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      1);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.1f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      1);	

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      2);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.2f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Introducing... Poison Paws cat food!";
			ld.sprite = BoostConfig.instance.GetIntroImageForType (
					BoostConfig.BoostType.BOOST_TYPE_POISON_PAWS);
			ld.boostsAccumulator.AddNew ((int)BoostConfig.BoostType.BOOST_TYPE_POISON_PAWS);

			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.DISTRIBUTED);

			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Another mouse hole expands!";
			ld.sprite = mouseHoleIntroSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.EAST);

			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.SPOUT);

			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "Uh-oh! Some mice dodge AND weave!";
			ld.sprite = MouseConfig.instance.GetIntroSpriteForMouseWiggle (
					MouseConfig.MouseWiggleType.ROUND);
			ld.wigglesAccumulator.AddNew ((int)MouseConfig.MouseWiggleType.ROUND);

			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.3f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      2,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 2.0f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      2,
			                      MouseConfig.MouseWiggleType.ROUND);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 0.1f, false, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      0,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.1f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.SLOW, 
			                      1);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.4f, true, MouseHole.MouseHoleLocation.EAST,
			                      MouseConfig.MouseType.SLOW, 
			                      2,
			                      MouseConfig.MouseWiggleType.ROUND);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.0f, true, MouseHole.MouseHoleLocation.SOUTH,
			                      MouseConfig.MouseType.SLOW, 
			                      0,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.1f, true, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      1);		
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.2f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.SUPERFAST, 
			                      1,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, false, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      2,
			                      MouseConfig.MouseWiggleType.ROUND);
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.2f, false, MouseHole.MouseHoleLocation.WEST,
			                      MouseConfig.MouseType.MEDIUM, 
			                      0);	
			
			AddExplicitMouseDesc (ref ld.explicitMouseDescs, 1.5f, true, MouseHole.MouseHoleLocation.NORTH,
			                      MouseConfig.MouseType.FAST, 
			                      0,
			                      MouseConfig.MouseWiggleType.ROUND);
			return ld;
		}

		if (--glCounter == 0) {
			return ld;
		}

		if (--glCounter == 0) {
			ld.specialText = "One hole is a little more roomy!";
			ld.sprite = mouseHoleIntroSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.SOUTH);
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.SPOUT);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.DISTRIBUTED);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.PARADE);

			return ld;
		}
		
		if (--glCounter == 0) {
			return ld;
		}

		if (--glCounter == 0) {
			ld.specialText = "One hole is a little more roomy!";
			ld.sprite = mouseHoleIntroSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.NORTH);
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.PARADE);

			return ld;
		}
		
		if (--glCounter == 0) {
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "One hole is a little more roomy!";
			ld.sprite = mouseHoleIntroSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.NORTH);
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.SPOUT);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.DISTRIBUTED);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.PARADE);
			return ld;
		}
		
		if (--glCounter == 0) {
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "One hole is a little more roomy!";
			ld.sprite = mouseHoleIntroSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.WEST);
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.SPOUT);
			return ld;
		}
		
		if (--glCounter == 0) {
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "One hole is a little more roomy!";
			ld.sprite = mouseHoleIntroSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.SOUTH);
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.SPOUT);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.DISTRIBUTED);
			ld.waveTypesAccumulator.AddNew ((int)LevelDescription.WaveType.PARADE);
			return ld;
		}
		
		if (--glCounter == 0) {
			return ld;
		}
		
		if (--glCounter == 0) {
			ld.specialText = "One hole is a little more roomy!";
			ld.sprite = mouseHoleIntroSprite;
			ld.mouseHolesAccumulator.AddNew ((int)MouseHole.MouseHoleLocation.EAST);
			return ld;
		}
	
		return null;
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
			ld.boostsAccumulator.DeriveFrom (previousLd.boostsAccumulator);
			ld.wigglesAccumulator.DeriveFrom (previousLd.wigglesAccumulator);
			ld.mouseHolesAccumulator.DeriveFrom (previousLd.mouseHolesAccumulator);
			ld.mouseTypesAccumulator.DeriveFrom (previousLd.mouseTypesAccumulator);
			ld.waveTypesAccumulator.DeriveFrom (previousLd.waveTypesAccumulator);
		}


		ld.explicitMouseDescs = GenerateRandomMiceForLevel (ld);
		ld.sprite = angusIntroSprite;

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
			MouseHole.MouseHoleLocation location = mouseHoleGenerator.GetNextValue ();
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

		mouseHoleGenerator.RefreshValues ();
		int count = Random.Range (minParadeMice, maxParadeMice + 1);

		for (int i = 0; i < count; i++) {
			float pause = paradePause;
			MouseConfig.MouseType mType = 
				(MouseConfig.MouseType)mouseTypeGenerator.GetNextValue ();
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
			QuasiRandomGenerator<int> mouseTypeGenerator)
	{
		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();
		int count = Random.Range (minSpoutMice, 
		                          maxSpoutMice + 1);
		
		MouseHole.MouseHoleLocation location = mouseHoleGenerator.GetNextValue ();
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
		List<MouseHole.MouseHoleLocation> holeDist = new List<MouseHole.MouseHoleLocation> ();
		holeDist.Add (MouseHole.MouseHoleLocation.NORTH);
		holeDist.Add (MouseHole.MouseHoleLocation.EAST);
		holeDist.Add (MouseHole.MouseHoleLocation.SOUTH);
		holeDist.Add (MouseHole.MouseHoleLocation.WEST);

		mouseHoleGenerator = new QuasiRandomGenerator<MouseHole.MouseHoleLocation> (holeDist);
		mouseHoleGenerator.refreshTrigger = 1;
		
		List<int> trackDist = new List<int> ();
		for (int i = 0; i < TweakableParams.numTracks; i++) {
			trackDist.Add (i);
		}
		trackGenerator = new QuasiRandomGenerator<int> (trackDist);
		
		distributedPauseGenerator = new QuasiRandomGenerator<float> (distributedPauseDist);
	}

}
