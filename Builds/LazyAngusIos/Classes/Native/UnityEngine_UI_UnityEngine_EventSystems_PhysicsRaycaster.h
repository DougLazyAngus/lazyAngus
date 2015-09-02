#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t548;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t912;
// UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycaster.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.EventSystems.PhysicsRaycaster
struct  PhysicsRaycaster_t911  : public BaseRaycaster_t893
{
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_t548 * ___m_EventCamera_3;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t913  ___m_EventMask_4;
};
struct PhysicsRaycaster_t911_StaticFields{
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.PhysicsRaycaster::<>f__am$cache2
	Comparison_1_t912 * ___U3CU3Ef__amU24cache2_5;
};
