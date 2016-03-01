using UnityEngine;
using System.Collections;
using System.Collections.Generic;

using Soomla;
using Soomla.Store;

public class SoomlaStoreAssets: IStoreAssets {

	public static string BASIC_UPGRADE_ID = "soomla_basic_upgrade_id";

	public SoomlaStoreAssets ()
	{
	}


	
	public int GetVersion() {
		return 0;
	}
	
	// NOTE: Even if you have no use in one of these functions, you still need to
	// implement them all and just return an empty array.
	
	public VirtualCurrency[] GetCurrencies() {
		return new VirtualCurrency[]{};
	}
	
	public VirtualGood[] GetGoods() {
		return new VirtualGood[] {BASIC_UPGRADE};
	}
	
	public VirtualCurrencyPack[] GetCurrencyPacks() {
		return new VirtualCurrencyPack[] {};
	}
	
	public VirtualCategory[] GetCategories() {
		return new VirtualCategory[]{GENERAL_CATEGORY};
	}
	

	/** Virtual Goods **/

	// NOTE: Create non-consumable items using LifeTimeVG with PurchaseType of
	// PurchaseWithMarket.
	public static VirtualGood BASIC_UPGRADE = new LifetimeVG(
		"Lazy Upgrade",                             // Name
		"The Lazy Upgrade makes the game ad-free, and allows you to customize Angus' fur!",                       // Description
		BASIC_UPGRADE_ID,                          // Item ID
		new PurchaseWithMarket(               // Purchase type (with real money $)
			BASIC_UPGRADE_ID,                      // Product ID
			1.99                                   // Price (in real money $)
		));
	
	/** Virtual Categories **/
	
	public static VirtualCategory GENERAL_CATEGORY = new VirtualCategory(
		"General", new List<string>(new string[] {BASIC_UPGRADE.ItemId})
		);
	
}

