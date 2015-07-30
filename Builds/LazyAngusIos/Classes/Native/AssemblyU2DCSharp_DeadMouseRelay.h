#pragma once
#include <stdint.h>
// DeadMouseRelay
struct DeadMouseRelay_t490;
// DeadMouseRelay/MultiKillEventHandler
struct MultiKillEventHandler_t487;
// DeadMouseRelay/MouseKillEventHandler
struct MouseKillEventHandler_t489;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DeadMouseRelay
struct  DeadMouseRelay_t490  : public MonoBehaviour_t13
{
	// DeadMouseRelay/MultiKillEventHandler DeadMouseRelay::MultiKill
	MultiKillEventHandler_t487 * ___MultiKill_3;
	// DeadMouseRelay/MouseKillEventHandler DeadMouseRelay::MouseKill
	MouseKillEventHandler_t489 * ___MouseKill_4;
};
struct DeadMouseRelay_t490_StaticFields{
	// DeadMouseRelay DeadMouseRelay::instance
	DeadMouseRelay_t490 * ___instance_2;
};
