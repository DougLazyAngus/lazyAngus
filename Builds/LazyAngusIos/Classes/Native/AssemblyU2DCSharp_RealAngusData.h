#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<RealAngusItemDesc>
struct List_1_t647;
// RealAngusData
struct RealAngusData_t648;
// RealAngusData/RealAngusDataChangedEventHandler
struct RealAngusDataChangedEventHandler_t646;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RealAngusData
struct  RealAngusData_t648  : public MonoBehaviour_t13
{
	// System.Collections.Generic.List`1<RealAngusItemDesc> RealAngusData::realAngusItemDescs
	List_1_t647 * ___realAngusItemDescs_2;
	// System.Collections.Generic.List`1<RealAngusItemDesc> RealAngusData::semiRandomItemDescs
	List_1_t647 * ___semiRandomItemDescs_4;
	// RealAngusData/RealAngusDataChangedEventHandler RealAngusData::RealAngusDataChanged
	RealAngusDataChangedEventHandler_t646 * ___RealAngusDataChanged_5;
};
struct RealAngusData_t648_StaticFields{
	// RealAngusData RealAngusData::instance
	RealAngusData_t648 * ___instance_3;
};
