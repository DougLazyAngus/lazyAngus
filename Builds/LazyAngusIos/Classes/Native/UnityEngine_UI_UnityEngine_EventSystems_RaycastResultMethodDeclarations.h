#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t770;
// UnityEngine.GameObject
struct GameObject_t312;
// System.String
struct String_t;

// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
extern "C" GameObject_t312 * RaycastResult_get_gameObject_m4062 (RaycastResult_t770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::set_gameObject(UnityEngine.GameObject)
extern "C" void RaycastResult_set_gameObject_m4063 (RaycastResult_t770 * __this, GameObject_t312 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.RaycastResult::get_isValid()
extern "C" bool RaycastResult_get_isValid_m4064 (RaycastResult_t770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::Clear()
extern "C" void RaycastResult_Clear_m4065 (RaycastResult_t770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.RaycastResult::ToString()
extern "C" String_t* RaycastResult_ToString_m4066 (RaycastResult_t770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
