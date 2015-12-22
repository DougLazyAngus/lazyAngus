using UnityEngine;
using System.Collections;
using System.Collections.Generic;
/*
using Soomla;
using Soomla.Store;
*/
public class StoreController : MonoBehaviour {
	bool registeredForEvents;
	public GameObject upgradeDialogPrototype;
	public float yOffset = -50f;

	public static StoreController instance;

	public delegate void StoreChangedHandler();
	public event StoreChangedHandler StoreChanged;

	void Awake() {
		instance = this;
	}

	// Use this for initialization
	void Start () {
// 		SoomlaStore.Initialize (new SoomlaStoreAssets ());
		RegisterForEvents ();
	}

	void OnDestroy() {
		UnregisterForEvents ();		
	}

	void RegisterForEvents() {
		if (!registeredForEvents) {
			registeredForEvents = true;

			/*
			StoreEvents.OnSoomlaStoreInitialized += onStoreInitialized;
			StoreEvents.OnBillingNotSupported += onBillingNotSupported;
			StoreEvents.OnBillingSupported += onBillingSupported;
			StoreEvents.OnGoodBalanceChanged += onGoodBalanceChanged;

			StoreEvents.OnItemPurchased += onItemPurchased;
			StoreEvents.OnItemPurchaseStarted += onItemPurchaseStarted;

			StoreEvents.OnMarketPurchaseCancelled += onMarketPurchaseCancelled;
			StoreEvents.OnMarketPurchase += onMarketPurchase;
			StoreEvents.OnMarketPurchaseStarted += onMarketPurchaseStarted;

			StoreEvents.OnRestoreTransactionsFinished += onRestoreTransactionsFinished;
			StoreEvents.OnRestoreTransactionsStarted += onRestoreTransactionsStarted;

			StoreEvents.OnUnexpectedStoreError += onUnexpectedStoreError;
*/
		}
	}

	void UnregisterForEvents() {
		if (registeredForEvents) {
			/*
			StoreEvents.OnSoomlaStoreInitialized -= onStoreInitialized;
			StoreEvents.OnBillingNotSupported -= onBillingNotSupported;
			StoreEvents.OnBillingSupported -= onBillingSupported;
			StoreEvents.OnGoodBalanceChanged -= onGoodBalanceChanged;
			
			StoreEvents.OnItemPurchased -= onItemPurchased;
			StoreEvents.OnItemPurchaseStarted -= onItemPurchaseStarted;
			
			StoreEvents.OnMarketPurchaseCancelled -= onMarketPurchaseCancelled;
			StoreEvents.OnMarketPurchase -= onMarketPurchase;
			StoreEvents.OnMarketPurchaseStarted -= onMarketPurchaseStarted;
			
			StoreEvents.OnRestoreTransactionsFinished -= onRestoreTransactionsFinished;
			StoreEvents.OnRestoreTransactionsStarted -= onRestoreTransactionsStarted;
			
			StoreEvents.OnUnexpectedStoreError -= onUnexpectedStoreError;
			*/
		}
	}
	
	void onStoreInitialized() {
		if (Debug.isDebugBuild) { 
			Debug.Log ("onStoreInitialized");
		}
	}

	void onBillingNotSupported() {
		if (Debug.isDebugBuild) {
			Debug.Log("onBillingNotSupported");
		}
	}
	
	void onBillingSupported() {
		if (Debug.isDebugBuild) {
			Debug.Log("onBillingSupported");
		}
	}

	/*
	void onGoodBalanceChanged(VirtualGood vg, int c1, int c2) {
		if (Debug.isDebugBuild) {
			Debug.Log("onGoodBalanceChanged");
		}
	}
	
	void onItemPurchased(PurchasableVirtualItem i, string s) {
		if (Debug.isDebugBuild) {
			Debug.Log("onItemPurchased");
		}
		if (StoreChanged != null) {
			StoreChanged ();
		}
	}
	
	void onItemPurchaseStarted(PurchasableVirtualItem i) {
		if (Debug.isDebugBuild) {
			Debug.Log("onItemPurchaseStarted");
		}
	}
	
	void onMarketPurchaseCancelled(PurchasableVirtualItem i) {
		if (Debug.isDebugBuild) {
			Debug.Log ("onMarketPurchaseCancelled");
		}
	}
	
	void onMarketPurchase(PurchasableVirtualItem i,
	                      string s, 
	                      Dictionary<string, string> d) {
		if (Debug.isDebugBuild) {
			Debug.Log("onMarketPurchase");
		}
		if (StoreChanged != null) {
			StoreChanged ();
		}
	}
	
	void onMarketPurchaseStarted(PurchasableVirtualItem i) {
		if (Debug.isDebugBuild) {
			Debug.Log("onMarketPurchaseStarted");
		}
	}

	void onRestoreTransactionsFinished(bool b) {
		if (Debug.isDebugBuild) {
			Debug.Log("onRestoreTransactionsFinished");
		}
	}

	void onRestoreTransactionsStarted() {
		if (Debug.isDebugBuild) {
			Debug.Log("onRestoreTransactionsStarted");
		}
	}

	void onUnexpectedStoreError(int i) {
		if (Debug.isDebugBuild) {
			Debug.Log("OnUnexpectedStoreError");
		}
	}
	*/

	// Update is called once per frame
	void Update () {
	
	}
	
	public void BuyUpgrade() {
		if (IsUpgradePurchased ()) {
			return;
		}

		GameObject upgradeDialogGameObject = Instantiate (upgradeDialogPrototype, 
		                                                 new Vector2 (0, yOffset),
		                                                 Quaternion.identity) as GameObject;
		UpgradeDialog ud = upgradeDialogGameObject.GetComponent<UpgradeDialog> ();
		ud.SetHandler (OnDialogResult);
		
		DialogController.instance.ShowDialog (ud);
	}

	void OnDialogResult(bool result) {
		if (result) {
// 			StoreInventory.BuyItem (SoomlaStoreAssets.BASIC_UPGRADE_ID);
		}
	}

	public bool IsUpgradePurchased() {
		/*
		int count = StoreInventory.GetItemBalance (SoomlaStoreAssets.BASIC_UPGRADE_ID);
		return (count > 0);
		*/
		return false;
	}
}
