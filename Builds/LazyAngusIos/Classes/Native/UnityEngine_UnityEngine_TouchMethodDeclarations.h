#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t560;
struct Touch_t560_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m4642 (Touch_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t68  Touch_get_position_m3077 (Touch_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t68  Touch_get_deltaPosition_m2621 (Touch_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m2620 (Touch_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t560_marshal(const Touch_t560& unmarshaled, Touch_t560_marshaled& marshaled);
void Touch_t560_marshal_back(const Touch_t560_marshaled& marshaled, Touch_t560& unmarshaled);
void Touch_t560_marshal_cleanup(Touch_t560_marshaled& marshaled);
