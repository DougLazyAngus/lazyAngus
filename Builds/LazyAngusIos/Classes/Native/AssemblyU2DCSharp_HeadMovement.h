#pragma once
#include <stdint.h>
// ConeOfViewRenderer
struct ConeOfViewRenderer_t483;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// HeadMovement/MovementPhase
#include "AssemblyU2DCSharp_HeadMovement_MovementPhase.h"
// HeadMovement
struct  HeadMovement_t527  : public MonoBehaviour_t13
{
	// System.Single HeadMovement::moveToSpeedDeg
	float ___moveToSpeedDeg_2;
	// System.Single HeadMovement::moveHomeSpeedDeg
	float ___moveHomeSpeedDeg_3;
	// System.Single HeadMovement::maxTurnDeg
	float ___maxTurnDeg_4;
	// ConeOfViewRenderer HeadMovement::coneOfView
	ConeOfViewRenderer_t483 * ___coneOfView_5;
	// System.Single HeadMovement::holdTime
	float ___holdTime_6;
	// System.Single HeadMovement::targetDeg
	float ___targetDeg_7;
	// System.Single HeadMovement::currentDeg
	float ___currentDeg_8;
	// HeadMovement/MovementPhase HeadMovement::phase
	int32_t ___phase_9;
	// System.Single HeadMovement::phaseStartTime
	float ___phaseStartTime_10;
};
