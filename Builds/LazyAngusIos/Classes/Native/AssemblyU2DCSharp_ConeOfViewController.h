#pragma once
#include <stdint.h>
// ConeOfViewRenderer
struct ConeOfViewRenderer_t514;
// ConeOfViewController
struct ConeOfViewController_t609;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ConeOfViewController
struct  ConeOfViewController_t609  : public MonoBehaviour_t13
{
	// ConeOfViewRenderer ConeOfViewController::leftCone
	ConeOfViewRenderer_t514 * ___leftCone_2;
	// ConeOfViewRenderer ConeOfViewController::rightCone
	ConeOfViewRenderer_t514 * ___rightCone_3;
	// System.Single ConeOfViewController::innerGapHalfAngle
	float ___innerGapHalfAngle_4;
	// System.Boolean ConeOfViewController::registeredForEvents
	bool ___registeredForEvents_5;
	// System.Single ConeOfViewController::<actualAngleRange>k__BackingField
	float ___U3CactualAngleRangeU3Ek__BackingField_7;
};
struct ConeOfViewController_t609_StaticFields{
	// ConeOfViewController ConeOfViewController::instance
	ConeOfViewController_t609 * ___instance_6;
};
