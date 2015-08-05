#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animator
struct Animator_t622;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t1027;
// System.String
struct String_t;

// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C" void Animator_SetInteger_m4085 (Animator_t622 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m5879 (Animator_t622 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m5878 (Animator_t622 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t1027 * Animator_get_runtimeAnimatorController_m5877 (Animator_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m9315 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C" void Animator_SetIntegerString_m9316 (Animator_t622 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m9317 (Animator_t622 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m9318 (Animator_t622 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
