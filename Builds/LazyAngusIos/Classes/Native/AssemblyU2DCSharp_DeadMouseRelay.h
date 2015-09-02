#pragma once
#include <stdint.h>
// DeadMouseRelay
struct DeadMouseRelay_t532;
// DeadMouseRelay/MultiKillEventHandler
struct MultiKillEventHandler_t529;
// DeadMouseRelay/MouseKillEventHandler
struct MouseKillEventHandler_t531;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DeadMouseRelay
struct  DeadMouseRelay_t532  : public MonoBehaviour_t13
{
	// DeadMouseRelay/MultiKillEventHandler DeadMouseRelay::MultiKill
	MultiKillEventHandler_t529 * ___MultiKill_3;
	// DeadMouseRelay/MouseKillEventHandler DeadMouseRelay::MouseKill
	MouseKillEventHandler_t531 * ___MouseKill_4;
};
struct DeadMouseRelay_t532_StaticFields{
	// DeadMouseRelay DeadMouseRelay::instance
	DeadMouseRelay_t532 * ___instance_2;
};
