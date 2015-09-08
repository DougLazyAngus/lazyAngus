#pragma once
#include <stdint.h>
// GamePhaseState/GamePhaseType[]
struct GamePhaseTypeU5BU5D_t629;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// PhaseDelayedEventScheduler/DelayedEventHandler
struct DelayedEventHandler_t627;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PhaseDelayedEventScheduler
struct  PhaseDelayedEventScheduler_t571  : public MonoBehaviour_t13
{
	// GamePhaseState/GamePhaseType[] PhaseDelayedEventScheduler::acceptablePhases
	GamePhaseTypeU5BU5D_t629* ___acceptablePhases_2;
	// System.Single PhaseDelayedEventScheduler::timeToWait
	float ___timeToWait_3;
	// System.Collections.IEnumerator PhaseDelayedEventScheduler::scheduledEvent
	Object_t * ___scheduledEvent_4;
	// PhaseDelayedEventScheduler/DelayedEventHandler PhaseDelayedEventScheduler::delayedEvetHandler
	DelayedEventHandler_t627 * ___delayedEvetHandler_5;
};
