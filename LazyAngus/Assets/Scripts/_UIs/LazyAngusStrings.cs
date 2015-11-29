// ------------------------------------------------------------------------------
//  <autogenerated>
//      This code was generated by a tool.
//      Mono Runtime Version: 4.0.30319.1
// 
//      Changes to this file may cause incorrect behavior and will be lost if 
//      the code is regenerated.
//  </autogenerated>
// ------------------------------------------------------------------------------
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq; 
using System;

public class LazyAngusStrings: MonoBehaviour
{
	public static LazyAngusStrings inst;

	public TextAsset englishStrings;

	public TextAsset frenchStrings;
	public TextAsset italianStrings;
	public TextAsset germanStrings;
	public TextAsset spanishStrings;

	public TextAsset japaneseStrings;
	public TextAsset chineseStrings;

	Dictionary<string, string> mainStringMap;
	Dictionary<string, string> defaultStringMap;

	Dictionary<string, string> mapInProgress;

	void Awake() {
		inst = this;

		SystemLanguage language = Application.systemLanguage;

		// FIXME(dbanks)
		language = SystemLanguage.German;

		mainStringMap = makeMapForLanguage(language);
		defaultStringMap = makeMapForLanguage(SystemLanguage.English);
		int foo = 5;
		foo = foo * foo;
	}

	Dictionary<string, string> makeMapForLanguage(SystemLanguage language) {
		TextAsset textAsset = fileForLanguage (language);
		mapInProgress = new Dictionary<string, string> ();
		readTextAsset (textAsset);
		return mapInProgress;
	}

	TextAsset fileForLanguage(SystemLanguage language) {
		switch (language) {
		case SystemLanguage.French:
			return frenchStrings;
		case SystemLanguage.Italian:
			return italianStrings;
		case SystemLanguage.German:
			return germanStrings;
		case SystemLanguage.Spanish:
			return spanishStrings;

		case SystemLanguage.Chinese:
		case SystemLanguage.ChineseSimplified:
		case SystemLanguage.ChineseTraditional:
			return chineseStrings;

		case SystemLanguage.Japanese:
			return japaneseStrings;

		default:
			return englishStrings;
		}
	}

	void readTextAsset(TextAsset textAsset) {
		CSVReader.LoadFromTextAsset (textAsset, AddLineToMapInProgress);
	}

	void AddLineToMapInProgress(int line_index, List<string> line) {
		if (line_index == 0) {
			// First line is header...
			return;
		}

		if (line.Count != 3) {
			return;
		}
		if (line [0].Length == 0) {
			return;
		}

		if (mapInProgress.ContainsKey(line[0])) {
			Debug.Log ("Duplicate key: \"" + line[0] + "\"");
			return;
		}

		string value = line [1];

		// Clean up newlines and quotes.
		value = value.Replace ("\\n", "\n");
		value = value.Replace ("\\\"", "\"");

		mapInProgress.Add (line[0], value);
	}


	public string Str(string key) {
		if (mainStringMap.ContainsKey (key)) {
			return mainStringMap [key];
		}
		if (defaultStringMap.ContainsKey (key)) {
			return defaultStringMap [key];
		} 
		return "UNKNOWN STRING";
	}

	/*
	public const string BOOST_FAIL_LEVEL = "I can't eat that cat food until Wave {0}!";
	public const string BOOST_FAIL_ACTIVE = "I can only eat one cat food at a time!";
	public const string BOOST_FAIL_COST = "Not enough money!\n\nSwipe two mice at once to earn more!";

	public const string INTRO_BOOST_FAST = "Cat food helps Angus move faster!";
	public const string INTRO_BOOST_SEE = "This cat food helps Angus see better!";
	public const string INTRO_BOOST_GIANT = "Try new Giant Paws cat food!";
	public const string INTRO_BOOST_FART = "This cat food makes me toot!";

	public const string TIP_EXPLAIN_BOOSTS = "Buy me cat food when you need some extra help!";
	public const string TIP_BOOST_FAST = "I feel frisky!\n\n" + 
		"Let's catch some mice while it lasts!";
	public const string TIP_BOOST_SEE = "Better eyesight means less turning!";
	public const string TIP_BOOST_GIANT = "No mouse shall escape my mighty paws!";
	public const string TIP_BOOST_FART = "The mice slow down when things get a little stinky...";

	public const string TUTORIAL_CATCH_MOUSE = "Yikes!\n\nI'd better catch that mouse!";
	public const string TUTORIAL_LEAD_MOUSE = "I'll swipe where you tap, but I'm pretty lazy.\n\n" + 
		"Plan ahead!!";
	public const string TUTORIAL_DRAG_TURN = "Drag my backside to turn me faster!";
	public const string TUTORIAL_TRAPS = "A trap will stop an escaping mouse, but then the trap is gone!!";
	public const string TUTORIAL_GAME_OVER = "OH NO!!\n\n" + 
		"A mouse got away, I'm in trouble now!";
	public const string TUTORIAL_BOOST_OVER = "The catfood is all gone!\n\n" + 
		"Buy me more, but watch the prices!";


	public const string REAL_ANGUS_FACT_01 = "I got Angus in 2011 as a kitten. " + 
 		"He was already named \"Angus\" and the name stuck: he was absolutely an Angus.";
	public const string REAL_ANGUS_FACT_02 = 
		"I had just gotten a female kitten, Curry, and she was a bit wild. " + 
		"The vet suggested a boy cat would help her calm down.";
	public const string REAL_ANGUS_FACT_03 = 
		"Angus and Curry became great friends. " + 
		"He would pounce on her occasionally. She usually deserved it.";
	public const string REAL_ANGUS_FACT_04 = 
			"He was the only cat I ever met who liked to have his belly rubbed. His massive, fuzzy white belly...";

	public const string REAL_ANGUS_FACT_05 = 
		"He was a glutton. " + 
		"If I didn't hold him down at feeding time he'd stick his face and paws into the bag of catfood.";
	public const string REAL_ANGUS_FACT_06 = 
		"You know how some cats carry themselves with an air of dignity and mystery? " + 
			"Angus... not so much...";
	public const string REAL_ANGUS_FACT_07 = 
		"He loved to groom. Start with himself, move on to Curry, then my head.  Kind of sweet until the biting part.";
	public const string REAL_ANGUS_FACT_08 = 
		"He was crazy for this little stuffed hedgehog.  He'd bat it around until it got stuck under furniture.  Then this would happen...";

	public const string REAL_ANGUS_FACT_09 = 
		"He was always a big boy but over time he got just enormous. When he laid down he made a puddle of cat.";
	public const string REAL_ANGUS_FACT_10 = 
		"The new kitty condo was a huge success. That red ball thingy lasted about two seconds.";
	public const string REAL_ANGUS_FACT_11 = 
		"Angus was just as sweet and touchable as he looks, and then some. He was like a pot of warm pudding wrapped in a furry blanket.";
	public const string REAL_ANGUS_FACT_12 = 
		"He died in August 2014. Broke my heart. We miss you, Angus...";

	public const string RATE_ME = "Like Lazy Angus?\nGive us a 5-star review!";
	public const string RATE_ME_OK = "OK!";
	public const string RATE_ME_LATER = "Later...";
	public const string RATE_ME_NO_THANKS = "No thanks...";

	public const string UPGRADE = "Buy the Lazy Upgrade!\n\nHide ads and change my fur!";
	public const string UPGRADE_YES = "How much?";
	public const string UPGRADE_NO = "No thanks...";

	public const string WAVE_COUNT = "Wave {0}";
	public const string MOUSE_COUNT = "{0} mice";

	public const string SCORE = "Score";
	public const string BEST = "Best";
	public const string BEST_EVER = "Best Ever!!";

	public const string CREDIT_DOUG = "Concept, Design, Engineering";
	public const string CREDIT_ALEX = "Art Direction";
	public const string CREDIT_DANIEL = "Additional Art";
	public const string CREDIT_JOE = "Sound and Music";
	public const string CREDIT_PLAY_TEST = "Play Test";


*/

}

