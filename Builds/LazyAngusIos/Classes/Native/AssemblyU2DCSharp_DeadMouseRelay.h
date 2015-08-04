#pragma once
#include <stdint.h>
// DeadMouseRelay
struct DeadMouseRelay_t488;
// DeadMouseRelay/MultiKillEventHandler
struct MultiKillEventHandler_t485;
// DeadMouseRelay/MouseKillEventHandler
struct MouseKillEventHandler_t487;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DeadMouseRelay
struct  DeadMouseRelay_t488  : public MonoBehaviour_t13
{
	// DeadMouseRelay/MultiKillEventHandler DeadMouseRelay::MultiKill
	MultiKillEventHandler_t485 * ___MultiKill_3;
	// DeadMouseRelay/MouseKillEventHandler DeadMouseRelay::MouseKill
	MouseKillEventHandler_t487 * ___MouseKill_4;
};
struct DeadMouseRelay_t488_StaticFields{
	// DeadMouseRelay DeadMouseRelay::instance
	DeadMouseRelay_t488 * ___instance_2;
};
