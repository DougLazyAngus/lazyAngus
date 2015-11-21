using UnityEngine;
using UnityEngine.UI;

using System.Collections;
using System.Collections.Generic;

public class InfoGamePhaseUI : GamePhaseUI {
	public Text dougCreditText;
	public Text alexCreditText;
	public Text danielCreditText;
	public Text joeCreditText;
	public Text playTextCreditText;

	void Awake() {
	}

	void Start () {
		dougCreditText.text = LazyAngusStrings.CREDIT_DOUG;
		alexCreditText.text = LazyAngusStrings.CREDIT_ALEX;
		danielCreditText.text = LazyAngusStrings.CREDIT_DANIEL;
		joeCreditText.text = LazyAngusStrings.CREDIT_JOE;
		playTextCreditText.text = LazyAngusStrings.CREDIT_PLAY_TEST;
	}

}