#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t552;
struct Touch_t552_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m4604 (Touch_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t68  Touch_get_position_m3045 (Touch_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t68  Touch_get_deltaPosition_m2587 (Touch_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m2586 (Touch_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t552_marshal(const Touch_t552& unmarshaled, Touch_t552_marshaled& marshaled);
void Touch_t552_marshal_back(const Touch_t552_marshaled& marshaled, Touch_t552& unmarshaled);
void Touch_t552_marshal_cleanup(Touch_t552_marshaled& marshaled);
