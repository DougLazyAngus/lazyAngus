using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class MouseSpawnFromData : MonoBehaviour {
	public float initialSpawnDelta = 1f;
	public static MouseSpawnFromData instance;

	public delegate void MouseSpawnEventHandler();
	public event MouseSpawnEventHandler MouseSpawn;
	

	public float minRandomDelay = 0f;
	public float maxRandomDelay = 4f;

	public int miceSpawned {get; private set;}

	List<ExplicitMouseDesc> miceDesc;
	float nextSpawnTime;

	public GameObject mousePrototype;
	bool registeredForEvents = false;

	void Awake() {
		instance = this;
	}

	void Start () {
		RegisterForEvents ();
	}
	
	void OnDestroy() {
		UnregisterForEvents ();
	}
	
	void RegisterForEvents() {
		GamePhaseState.instance.GamePhaseChanged +=
			new GamePhaseState.GamePhaseChangedEventHandler (OnPhaseChanged);
		
		registeredForEvents = true;
	}
	
	void UnregisterForEvents() {
		if (registeredForEvents) {
			GamePhaseState.instance.GamePhaseChanged -=
				new GamePhaseState.GamePhaseChangedEventHandler (OnPhaseChanged);
		}
	}	


	void OnPhaseChanged() {
		if (GamePhaseState.instance.IsPlaying ()) {
			nextSpawnTime = Time.time + initialSpawnDelta;
		} else { 
			Clear ();
		}
	}

	// Update is called once per frame
	void Update () {
		if (GamePhaseState.instance.IsPlaying ()) {
			float timeNow = Time.time;
			MaybeProduceNextMouse (timeNow);
		}
	}

	void MaybeProduceNextMouse(float timeNow) {
		if (miceDesc == null || miceDesc.Count == 0) {
			return;
		}

		if (timeNow < nextSpawnTime) {
			return;
		}

		ExplicitMouseDesc emd = miceDesc[0];
		miceDesc.RemoveAt(0);

		ProduceMouse (emd);

		nextSpawnTime = timeNow + emd.delayToNextMouse;
	}	

	void ProduceMouse(ExplicitMouseDesc emd) {

		GameObject mouseObject;
		
		mouseObject = Instantiate (mousePrototype, 
		                           new Vector3 (0, 0, 0),
		                           Quaternion.identity) as GameObject;
		MouseMove mouseMove = mouseObject.GetComponent<MouseMove> ();
		
		mouseMove.SetupMouse(emd.mouseType, 
		                     emd.mouseHoleLocation,
		                     emd.isClockwise,
		                     emd.track);

		if (emd.wiggleType != MouseConfig.MouseWiggleType.NONE) {
			mouseMove.AddWiggle (emd.wiggleType, 
			                     emd.wiggleMagnitude, 
			                     emd.wiggleCycles,
			                     emd.wiggleClockwise);
		}

		miceSpawned += 1;
		if (MouseSpawn != null) {
			MouseSpawn ();
		}
	}

	public bool FinishedWithCurrentSet() {
		return (miceDesc.Count == 0);
	}

	public void Clear() {
		miceDesc = new List<ExplicitMouseDesc>();
		miceSpawned = 0;
	}

	public void AddMice(List<ExplicitMouseDesc> explicitMice) {
		miceDesc.AddRange (explicitMice);
	}

	/*
	public void ConfigureWithData(List<ExplicitMouseDesc> explicitMice, 
	                              int randomSeed, 
	                              int[] miceByType,
	                         	  float[] timeRanges) {
		this.randomSeed = randomSeed;

		if (explicitMice == null) {
			miceDesc = new List<ExplicitMouseDesc>();
		} else {
			miceDesc = explicitMice;
		}

		if (miceByType != null) {
			List<ExplicitMouseDesc> randomMiceDescs = GenerateRandomMiceDescs (miceByType, 
			                                                                   timeRanges);
			miceDesc = miceDesc.Concat(randomMiceDescs).ToList();
		}

	}


	List<ExplicitMouseDesc> GenerateRandomMiceDescs(int[] miceByType, 
	                                                float[] timeRanges) {
		Random.seed = randomSeed;

		List<int> listOfTypes = new List<int> ();
		for (int i = 0; i < miceByType.Length; i++) {
			int count = miceByType [i];
			for (int j = 0; j < count; j++) {
				listOfTypes.Add (i);
			}
		}
		Utilities.ShuffleList<int> (ref listOfTypes);

		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();

		for (int i = 0; i < listOfTypes.Count; i++) {
			ExplicitMouseDesc emd;
			emd.mouseType = (MouseMove.MouseType)listOfTypes [i];
			emd.isClockwise = (Random.Range (0, 2) != 0);

			emd.mouseHoleLocation = MouseHole.GetRandomHoleLocation();

			emd.track = Random.Range (0, (int)MouseMove.numTracks);
			emd.delayToNextMouse = timeRanges[Random.Range (0, timeRanges.Length)];
			retVal.Add (emd);
		}
		return retVal;
	}
	*/
}
