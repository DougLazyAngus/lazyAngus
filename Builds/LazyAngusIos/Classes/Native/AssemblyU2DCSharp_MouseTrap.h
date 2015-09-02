#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t352;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MouseTrap
struct  MouseTrap_t609  : public MonoBehaviour_t13
{
	// UnityEngine.GameObject MouseTrap::mouseTrapEffectPrototype
	GameObject_t352 * ___mouseTrapEffectPrototype_2;
	// System.Boolean MouseTrap::sliding
	bool ___sliding_3;
	// System.Single MouseTrap::startSlideTime
	float ___startSlideTime_4;
	// System.Single MouseTrap::originalRotation
	float ___originalRotation_5;
	// UnityEngine.Vector3 MouseTrap::originalPosition
	Vector3_t538  ___originalPosition_6;
	// System.Single MouseTrap::targetRotation
	float ___targetRotation_7;
	// UnityEngine.Vector3 MouseTrap::targetPosition
	Vector3_t538  ___targetPosition_8;
	// System.Single MouseTrap::timeToSlide
	float ___timeToSlide_9;
};
