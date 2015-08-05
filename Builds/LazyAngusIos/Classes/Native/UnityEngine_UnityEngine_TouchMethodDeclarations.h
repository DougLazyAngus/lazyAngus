#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t657;
struct Touch_t657_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m5566 (Touch_t657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t110  Touch_get_position_m3982 (Touch_t657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t110  Touch_get_deltaPosition_m3464 (Touch_t657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m3463 (Touch_t657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t657_marshal(const Touch_t657& unmarshaled, Touch_t657_marshaled& marshaled);
void Touch_t657_marshal_back(const Touch_t657_marshaled& marshaled, Touch_t657& unmarshaled);
void Touch_t657_marshal_cleanup(Touch_t657_marshaled& marshaled);
