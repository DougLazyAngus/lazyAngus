using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class MouseSpawnFromData : MonoBehaviour {

	int randomSeed;
	float initialSpawnDelta;

	List<ExplicitMouseDesc> miceDesc;
	float nextSpawnTime;

	public GameObject mousePrototype;
	
	// Use this for initialization
	void Start () {
		nextSpawnTime = Time.time + initialSpawnDelta;
	}
	
	// Update is called once per frame
	void Update () {
		float timeNow = Time.time;
		MaybeProduceNextMouse (timeNow);
	}

	void MaybeProduceNextMouse(float timeNow) {
		if (miceDesc.Count == 0) {
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
	}

	public bool FinishedWithCurrentSet() {
		return (miceDesc.Count == 0);
	}

	public void ConfigureWithData(int randomSeed, 
		                           float initialSpawnDelta,
	                              int[] miceByType,
	                         	  float avgPause,
	                              List<ExplicitMouseDesc> explicitMice,
	                              float explicitMicePause) {
		this.randomSeed = randomSeed;
		this.initialSpawnDelta = initialSpawnDelta;

		if (explicitMice == null) {
			miceDesc = new List<ExplicitMouseDesc>();
		} else {
			miceDesc = explicitMice;
		}

		if (miceByType != null) {
			List<ExplicitMouseDesc> randomMiceDescs = GenerateRandomMiceDescs (miceByType, avgPause);
			miceDesc = miceDesc.Concat(randomMiceDescs).ToList();
		}

	}

	List<ExplicitMouseDesc> GenerateRandomMiceDescs(int[] miceByType, float avgPause) {
		Random.seed = randomSeed;

		List<int> listOfTypes = new List<int> ();
		for (int i = 0; i < miceByType.Length; i++) {
			int count = miceByType [i];
			for (int j = 0; j < count; j++) {
				listOfTypes.Add (i);
			}
		}
		Utilities.ShuffleList<int> (listOfTypes);

		List<ExplicitMouseDesc> retVal = new List<ExplicitMouseDesc> ();

		for (int i = 0; i < listOfTypes.Count; i++) {
			ExplicitMouseDesc emd;
			emd.mouseType = (MouseMove.MouseType)listOfTypes [i];
			emd.isClockwise = (Random.Range (0, 1) != 0);

			emd.mouseHoleLocation = RandomEnum(MouseHole.MouseHoleLocation);

			emd.track = Random.Range (0, (int)MouseMove.numTracks);
			emd.delayToNextMouse = Random.Range (0.5f * avgPause, 
			                                    1.5f * avgPause);
			retVal.Add (emd);
		}
		return retVal;
	}
}
