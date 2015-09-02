#pragma once
#include <stdint.h>
// ConeOfViewRenderer
struct ConeOfViewRenderer_t523;
// ConeOfViewController
struct ConeOfViewController_t524;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ConeOfViewController
struct  ConeOfViewController_t524  : public MonoBehaviour_t13
{
	// ConeOfViewRenderer ConeOfViewController::leftCone
	ConeOfViewRenderer_t523 * ___leftCone_2;
	// ConeOfViewRenderer ConeOfViewController::rightCone
	ConeOfViewRenderer_t523 * ___rightCone_3;
	// System.Boolean ConeOfViewController::registeredForEvents
	bool ___registeredForEvents_4;
	// System.Single ConeOfViewController::<actualAngleRange>k__BackingField
	float ___U3CactualAngleRangeU3Ek__BackingField_6;
};
struct ConeOfViewController_t524_StaticFields{
	// ConeOfViewController ConeOfViewController::instance
	ConeOfViewController_t524 * ___instance_5;
};
