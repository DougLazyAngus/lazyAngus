#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t658;
struct Touch_t658_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m5569 (Touch_t658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t110  Touch_get_position_m3984 (Touch_t658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t110  Touch_get_deltaPosition_m3465 (Touch_t658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m3464 (Touch_t658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t658_marshal(const Touch_t658& unmarshaled, Touch_t658_marshaled& marshaled);
void Touch_t658_marshal_back(const Touch_t658_marshaled& marshaled, Touch_t658& unmarshaled);
void Touch_t658_marshal_cleanup(Touch_t658_marshaled& marshaled);
