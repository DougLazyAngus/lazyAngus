#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<RealAngusItemDesc>
struct List_1_t644;
// RealAngusData
struct RealAngusData_t645;
// RealAngusData/RealAngusDataChangedEventHandler
struct RealAngusDataChangedEventHandler_t643;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RealAngusData
struct  RealAngusData_t645  : public MonoBehaviour_t13
{
	// System.Collections.Generic.List`1<RealAngusItemDesc> RealAngusData::realAngusItemDescs
	List_1_t644 * ___realAngusItemDescs_2;
	// System.Collections.Generic.List`1<RealAngusItemDesc> RealAngusData::semiRandomItemDescs
	List_1_t644 * ___semiRandomItemDescs_4;
	// RealAngusData/RealAngusDataChangedEventHandler RealAngusData::RealAngusDataChanged
	RealAngusDataChangedEventHandler_t643 * ___RealAngusDataChanged_5;
};
struct RealAngusData_t645_StaticFields{
	// RealAngusData RealAngusData::instance
	RealAngusData_t645 * ___instance_3;
};
