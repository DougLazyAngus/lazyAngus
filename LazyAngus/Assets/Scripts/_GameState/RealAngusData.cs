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
		if (RealAngusDataChanged != null) {
			RealAngusDataChanged ();
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public List<RealAngusItemDesc> GetRealAngusItemDescs() {
		return realAngusItemDescs;
	}

	public int CountUnlockedItemDescs() {
		int total = 0;
		for (int i = 0; i < realAngusItemDescs.Count; i++) {
			if (realAngusItemDescs[i].unlocked) {
				total += 1;
			}
		}
		return total;
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

		raid = new RealAngusItemDesc ("01_sleepy_face", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_01,
		                              "intro");
		realAngusItemDescs.Add (raid);
		
		raid = new RealAngusItemDesc ("02_with_curry_napping", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_02,
		                              "curry_taming");
		realAngusItemDescs.Add (raid);
		
		raid = new RealAngusItemDesc ("03_kitten_hug", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_03,
		                              "kitten_hug");
		realAngusItemDescs.Add (raid);
		
		raid = new RealAngusItemDesc ("04_belly", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_04,
		                              "belly");
		realAngusItemDescs.Add (raid);


		raid = new RealAngusItemDesc ("05_fridge", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_05,
		                              "glutton");
		realAngusItemDescs.Add (raid);

		raid = new RealAngusItemDesc ("06_dignity", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_06,
		                              "dignity");
		realAngusItemDescs.Add (raid);
		
		raid = new RealAngusItemDesc ("07_grooming", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_07,
		                              "07_grooming");
		realAngusItemDescs.Add (raid);
		
		raid = new RealAngusItemDesc ("08_hedgehog", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_08,
		                              "08_hedgehog");
		realAngusItemDescs.Add (raid);

		
		raid = new RealAngusItemDesc ("09_puddle", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_09,
		                              "09_puddle");
		realAngusItemDescs.Add (raid);
		
		raid = new RealAngusItemDesc ("10_tower", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_10,
		                              "10_tower");
		realAngusItemDescs.Add (raid);
		
		raid = new RealAngusItemDesc ("11_cuddly", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_11,
		                              "11_cuddly");
		realAngusItemDescs.Add (raid);
		

		raid = new RealAngusItemDesc ("12_red_bed", 
		                              LazyAngusStrings.REAL_ANGUS_FACT_12,
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
