#pragma once
#include <stdint.h>
// ConeOfViewRenderer
struct ConeOfViewRenderer_t520;
// ConeOfViewController
struct ConeOfViewController_t521;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ConeOfViewController
struct  ConeOfViewController_t521  : public MonoBehaviour_t13
{
	// ConeOfViewRenderer ConeOfViewController::leftCone
	ConeOfViewRenderer_t520 * ___leftCone_2;
	// ConeOfViewRenderer ConeOfViewController::rightCone
	ConeOfViewRenderer_t520 * ___rightCone_3;
	// System.Boolean ConeOfViewController::registeredForEvents
	bool ___registeredForEvents_4;
	// System.Single ConeOfViewController::<actualAngleRange>k__BackingField
	float ___U3CactualAngleRangeU3Ek__BackingField_6;
};
struct ConeOfViewController_t521_StaticFields{
	// ConeOfViewController ConeOfViewController::instance
	ConeOfViewController_t521 * ___instance_5;
};
