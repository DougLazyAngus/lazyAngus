using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class RealAngusData : MonoBehaviour {
	public delegate void RealAngusDataChangedEventHandler();
	public event RealAngusDataChangedEventHandler RealAngusDataChanged;
	List<RealAngusItemDesc> realAngusItemDescs;

	public static RealAngusData instance;
	List<RealAngusItemDesc> semiRandomItemDescs;

	void Awake() {
		instance = this;
	}

	// Use this for initialization
	void Start () {
		MakeRealAngusItemDescs ();
		MakeSemiRandomOrdering ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void MakeSemiRandomOrdering() {
		int suggestedSeed = (int)(Utilities.SecondsSinceEpoch ()) % 100000;
		int randomSeed = PersistentStorage.instance.GetIntValue("realAngus.randomSeed", 
		                                                        suggestedSeed);
		if (randomSeed == suggestedSeed) {
			PersistentStorage.instance.SetIntValue ("realAngus.randomSeed", randomSeed);
		}

		semiRandomItemDescs = new List<RealAngusItemDesc> ();

		for (int i = 1; i < realAngusItemDescs.Count-1; i++) {
			semiRandomItemDescs.Add (realAngusItemDescs[i]);

			Random.seed = randomSeed;
			Utilities.ShuffleList(ref semiRandomItemDescs);
		}
		semiRandomItemDescs.Add (realAngusItemDescs[realAngusItemDescs.Count-1]);
		semiRandomItemDescs.Insert (0, realAngusItemDescs[0]);

	}

	void MakeRealAngusItemDescs() {
		realAngusItemDescs = new List<RealAngusItemDesc> ();

		RealAngusItemDesc raid;

		raid = new RealAngusItemDesc ("sleepy_face", 
		                              "I got Angus in 2011 as a kitten.  He was already named \"Angus\" and the name stuck: he was absolutely an Angus.",
		                              "intro");
		realAngusItemDescs.Add (raid);
		
		raid = new RealAngusItemDesc ("with_curry_napping", 
		                              "I had just gotten a female kitten, Curry, and she was a bit wild. The vet suggested a boy cat would help her calm down.",
		                              "curry_taming");
		realAngusItemDescs.Add (raid);
		
		raid = new RealAngusItemDesc ("kitten_hug", 
		                              "Angus and Curry became great friends.  He would pounce on her occasionally, but honestly she deserved it.",
		                              "kitten_hug");
		realAngusItemDescs.Add (raid);
		
		raid = new RealAngusItemDesc ("belly", 
		                              "He was the only cat I ever met who liked to have his belly rubbed. His massive, fuzzy white belly...", 
		                              "belly");
		realAngusItemDescs.Add (raid);
		
		raid = new RealAngusItemDesc ("fridge", 
		                              "I would feed him by dipping a coffee cup into a giant bag of food and then pouring that into his dish.  He was such a glutton that he'd stick his nose and paws into the cup as I was trying to pour. I'd have to hold him down.", 
		                              "glutton");
		realAngusItemDescs.Add (raid);

		raid = new RealAngusItemDesc ("red_bed", 
		                              "He died on October 24 of 2014, just 3 years old. A sad time for me and his many fans and admirers. Sleep well, buddy. I miss you.",
		                              "final_shot");
		realAngusItemDescs.Add (raid);
	}

	public void UnlockNItems(int n) {
		bool newItemsUnlocked = false;

		for (int i = 0; i < n; i++) {
			if (!semiRandomItemDescs[i].unlocked) {
				newItemsUnlocked = true;
			}
			semiRandomItemDescs[i].Unlock();
		}

		if (newItemsUnlocked && RealAngusDataChanged != null) {
			RealAngusDataChanged();
		}
	}


}
