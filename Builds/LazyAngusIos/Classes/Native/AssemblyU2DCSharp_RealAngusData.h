#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<RealAngusItemDesc>
struct List_1_t643;
// RealAngusData
struct RealAngusData_t644;
// RealAngusData/RealAngusDataChangedEventHandler
struct RealAngusDataChangedEventHandler_t642;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RealAngusData
struct  RealAngusData_t644  : public MonoBehaviour_t13
{
	// System.Collections.Generic.List`1<RealAngusItemDesc> RealAngusData::realAngusItemDescs
	List_1_t643 * ___realAngusItemDescs_2;
	// System.Collections.Generic.List`1<RealAngusItemDesc> RealAngusData::semiRandomItemDescs
	List_1_t643 * ___semiRandomItemDescs_4;
	// RealAngusData/RealAngusDataChangedEventHandler RealAngusData::RealAngusDataChanged
	RealAngusDataChangedEventHandler_t642 * ___RealAngusDataChanged_5;
};
struct RealAngusData_t644_StaticFields{
	// RealAngusData RealAngusData::instance
	RealAngusData_t644 * ___instance_3;
};
