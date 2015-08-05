#pragma once
#include <stdint.h>
// DeadMouseRelay
struct DeadMouseRelay_t489;
// DeadMouseRelay/MultiKillEventHandler
struct MultiKillEventHandler_t486;
// DeadMouseRelay/MouseKillEventHandler
struct MouseKillEventHandler_t488;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DeadMouseRelay
struct  DeadMouseRelay_t489  : public MonoBehaviour_t13
{
	// DeadMouseRelay/MultiKillEventHandler DeadMouseRelay::MultiKill
	MultiKillEventHandler_t486 * ___MultiKill_3;
	// DeadMouseRelay/MouseKillEventHandler DeadMouseRelay::MouseKill
	MouseKillEventHandler_t488 * ___MouseKill_4;
};
struct DeadMouseRelay_t489_StaticFields{
	// DeadMouseRelay DeadMouseRelay::instance
	DeadMouseRelay_t489 * ___instance_2;
};
