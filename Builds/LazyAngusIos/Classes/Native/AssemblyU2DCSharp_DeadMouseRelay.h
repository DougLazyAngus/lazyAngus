#pragma once
#include <stdint.h>
// DeadMouseRelay
struct DeadMouseRelay_t529;
// DeadMouseRelay/MultiKillEventHandler
struct MultiKillEventHandler_t526;
// DeadMouseRelay/MouseKillEventHandler
struct MouseKillEventHandler_t528;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DeadMouseRelay
struct  DeadMouseRelay_t529  : public MonoBehaviour_t13
{
	// DeadMouseRelay/MultiKillEventHandler DeadMouseRelay::MultiKill
	MultiKillEventHandler_t526 * ___MultiKill_3;
	// DeadMouseRelay/MouseKillEventHandler DeadMouseRelay::MouseKill
	MouseKillEventHandler_t528 * ___MouseKill_4;
};
struct DeadMouseRelay_t529_StaticFields{
	// DeadMouseRelay DeadMouseRelay::instance
	DeadMouseRelay_t529 * ___instance_2;
};
