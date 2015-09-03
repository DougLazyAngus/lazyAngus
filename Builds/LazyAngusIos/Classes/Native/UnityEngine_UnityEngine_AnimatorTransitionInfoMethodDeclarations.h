#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t2800;
struct AnimatorTransitionInfo_t2800_marshaled;
// System.String
struct String_t;

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m9708 (AnimatorTransitionInfo_t2800 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m9709 (AnimatorTransitionInfo_t2800 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m9710 (AnimatorTransitionInfo_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m9711 (AnimatorTransitionInfo_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m9712 (AnimatorTransitionInfo_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m9713 (AnimatorTransitionInfo_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m9714 (AnimatorTransitionInfo_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m9715 (AnimatorTransitionInfo_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m9716 (AnimatorTransitionInfo_t2800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimatorTransitionInfo_t2800_marshal(const AnimatorTransitionInfo_t2800& unmarshaled, AnimatorTransitionInfo_t2800_marshaled& marshaled);
void AnimatorTransitionInfo_t2800_marshal_back(const AnimatorTransitionInfo_t2800_marshaled& marshaled, AnimatorTransitionInfo_t2800& unmarshaled);
void AnimatorTransitionInfo_t2800_marshal_cleanup(AnimatorTransitionInfo_t2800_marshaled& marshaled);
