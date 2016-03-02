using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Soomla;
using Soomla.Store;

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
		Debug.Log ("DOUG BANKS 2001");
		SoomlaStore.Initialize (new SoomlaStoreAssets ());
		Debug.Log ("DOUG BANKS 2002");
		RegisterForEvents ();
	}

	void OnDestroy() {
		UnregisterForEvents ();		
	}

	void RegisterForEvents() {
		if (!registeredForEvents) {
			registeredForEvents = true;

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

			/*


			public static Action<VirtualGood, int, int> OnGoodBalanceChanged = delegate {};
			

			public static Action<PurchasableVirtualItem, string> OnItemPurchased = delegate {};
			
			public static Action<PurchasableVirtualItem> OnItemPurchaseStarted = delegate {};
			
			public static Action<PurchasableVirtualItem> OnMarketPurchaseCancelled = delegate {};
			
			public static Action<PurchasableVirtualItem, string, Dictionary<string, string>> OnMarketPurchase = delegate {};
			
			public static Action<PurchasableVirtualItem> OnMarketPurchaseStarted = delegate {};
			
			public static Action<PurchasableVirtualItem> OnMarketRefund = delegate {};
			
			public static Action<bool> OnRestoreTransactionsFinished = delegate {};
			
			public static Action OnRestoreTransactionsStarted = delegate {};
			
			public static Action OnMarketItemsRefreshStarted = delegate {};
			

			public static Action<int> OnUnexpectedStoreError = delegate {};
			
			public static Action OnSoomlaStoreInitialized = delegate {};
			StoreEvents.
*/
		}
	}

	void UnregisterForEvents() {
		if (registeredForEvents) {
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
		}
	}
	
	void onStoreInitialized() {
		if (Debug.isDebugBuild) { 
			Debug.Log ("DOUG BANKS: onStoreInitialized");
		}
	}

	void onBillingNotSupported() {
		if (Debug.isDebugBuild) {
			Debug.Log("DOUG BANKS: onBillingNotSupported");
		}
	}
	
	void onBillingSupported() {
		if (Debug.isDebugBuild) {
			Debug.Log("DOUG BANKS: onBillingSupported");
		}
	}
	
	void onGoodBalanceChanged(VirtualGood vg, int c1, int c2) {
		if (Debug.isDebugBuild) {
			Debug.Log("DOUG BANKS: onGoodBalanceChanged");
		}
	}
	
	void onItemPurchased(PurchasableVirtualItem i, string s) {
		if (Debug.isDebugBuild) {
			Debug.Log("DOUG BANKS: onItemPurchased");
		}
		if (StoreChanged != null) {
			StoreChanged ();
		}
	}
	
	void onItemPurchaseStarted(PurchasableVirtualItem i) {
		if (Debug.isDebugBuild) {
			Debug.Log("DOUG BANKS: onItemPurchaseStarted");
		}
	}
	
	void onMarketPurchaseCancelled(PurchasableVirtualItem i) {
		if (Debug.isDebugBuild) {
			Debug.Log ("DOUG BANKS: onMarketPurchaseCancelled");
		}
	}
	
	void onMarketPurchase(PurchasableVirtualItem i,
	                      string s, 
	                      Dictionary<string, string> d) {
		if (Debug.isDebugBuild) {
			Debug.Log("DOUG BANKS: onMarketPurchase");
		}
		if (StoreChanged != null) {
			StoreChanged ();
		}
	}
	
	void onMarketPurchaseStarted(PurchasableVirtualItem i) {
		if (Debug.isDebugBuild) {
			Debug.Log("DOUG BANKS: onMarketPurchaseStarted");
		}
	}

	void onRestoreTransactionsFinished(bool b) {
		if (Debug.isDebugBuild) {
			Debug.Log("DOUG BANKS: onRestoreTransactionsFinished");
		}
	}

	void onRestoreTransactionsStarted() {
		if (Debug.isDebugBuild) {
			Debug.Log("DOUG BANKS: onRestoreTransactionsStarted");
		}
	}

	void onUnexpectedStoreError(int i) {
		if (Debug.isDebugBuild) {
			Debug.Log("DOUG BANKS: OnUnexpectedStoreError: " + i);
		}
	}

	// Update is called once per frame
	void Update () {
	
	}
	
	public void BuyUpgrade() {
		Debug.Log ("DOUG BANKS 101");

		if (IsUpgradePurchased ()) {
			Debug.Log ("DOUG BANKS 102");
			return;
		}

		Debug.Log ("DOUG BANKS 103");
		GameObject upgradeDialogGameObject = Instantiate (upgradeDialogPrototype, 
		                                                 new Vector2 (0, yOffset),
		                                                 Quaternion.identity) as GameObject;
		Debug.Log ("DOUG BANKS 104");
		UpgradeDialog ud = upgradeDialogGameObject.GetComponent<UpgradeDialog> ();
		Debug.Log ("DOUG BANKS 105");
		ud.SetHandler (OnDialogResult);
		Debug.Log ("DOUG BANKS 106");

		DialogController.instance.ShowDialog (ud);
		Debug.Log ("DOUG BANKS 107");
	}

	void OnDialogResult(bool result) {
		Debug.Log ("DOUG BANKS 201");
		if (result) {
			Debug.Log ("DOUG BANKS 202");
			StoreInventory.BuyItem (SoomlaStoreAssets.BASIC_UPGRADE_ID);
		}
		Debug.Log ("DOUG BANKS 203");
	}

	public bool IsUpgradePurchased() {
		Debug.Log ("DOUG BANKS 301");
		try {
			int count = StoreInventory.GetItemBalance (SoomlaStoreAssets.BASIC_UPGRADE_ID);
			Debug.Log ("DOUG BANKS 302");
			return (count > 0);
		} catch (UnityException e) {
			Debug.Log ("DOUG BANKS 303");
			Debug.Log ("DOUG BANKS: " + e);
			return false;
		}
	}
}
