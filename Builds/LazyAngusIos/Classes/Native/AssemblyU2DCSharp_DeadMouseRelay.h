#pragma once
#include <stdint.h>
// DeadMouseRelay
struct DeadMouseRelay_t519;
// DeadMouseRelay/MultiKillEventHandler
struct MultiKillEventHandler_t516;
// DeadMouseRelay/MouseKillEventHandler
struct MouseKillEventHandler_t518;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DeadMouseRelay
struct  DeadMouseRelay_t519  : public MonoBehaviour_t13
{
	// DeadMouseRelay/MultiKillEventHandler DeadMouseRelay::MultiKill
	MultiKillEventHandler_t516 * ___MultiKill_3;
	// DeadMouseRelay/MouseKillEventHandler DeadMouseRelay::MouseKill
	MouseKillEventHandler_t518 * ___MouseKill_4;
};
struct DeadMouseRelay_t519_StaticFields{
	// DeadMouseRelay DeadMouseRelay::instance
	DeadMouseRelay_t519 * ___instance_2;
};
