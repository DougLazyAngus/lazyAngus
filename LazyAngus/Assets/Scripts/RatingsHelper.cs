using UnityEngine;
using System.Collections;

public class RatingsHelper : MonoBehaviour {
	
	public static RatingsHelper instance;

	void Awake() {
		instance = this;
	}

	public void ShowRatings() {
	}
}
