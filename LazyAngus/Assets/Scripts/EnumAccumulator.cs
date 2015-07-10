// ------------------------------------------------------------------------------
//  <autogenerated>
//      This code was generated by a tool.
//      Mono Runtime Version: 4.0.30319.1
// 
//      Changes to this file may cause incorrect behavior and will be lost if 
//      the code is regenerated.
//  </autogenerated>
// ------------------------------------------------------------------------------
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class EnumAccumulator<T>
{
	public int [] newCount;
	public int [] derivedCount;

	public EnumAccumulator(int numValues) {
		newCount = new int[numValues];
		derivedCount = new int[numValues];

		InitToZero (newCount);
		InitToZero (derivedCount);
	}

	void InitToZero(int [] array) {
		for (int i = 0; i < array.Length; i++) {
			array [i] = 0;
		}
	}

	public void AddNew(int indexT, int value) {
		newCount [(int)indexT] += value;
	}
	
	public void AddNew(int indexT) {
		AddNew (indexT, 1);
	}
	
	public void AddDerived(int indexT, int value) {
		derivedCount [(int)indexT] += value;
	}
	
	public void AddDerived(int indexT) {
		AddDerived (indexT, 1);
	}

	public void DeriveFrom(EnumAccumulator<T> enumAccumulator) {
		for (int i = 0; i < derivedCount.Length; i++) {
			derivedCount [i] = enumAccumulator.derivedCount [i] + newCount [i];
		}
	}

	public List<int> GetDistribution() {
		List<int> retVal = new List<int> ();

		for (int i = 0; i < derivedCount.Length; i++) {
			for (int j = 0; j < derivedCount[i]; j++) {
				retVal.Add (i);
			}
		}
		return retVal;
	}
}

