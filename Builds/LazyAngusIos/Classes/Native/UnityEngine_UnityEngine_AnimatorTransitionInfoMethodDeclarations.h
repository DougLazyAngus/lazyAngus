#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t1156;
struct AnimatorTransitionInfo_t1156_marshaled;
// System.String
struct String_t;

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m6596 (AnimatorTransitionInfo_t1156 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m6597 (AnimatorTransitionInfo_t1156 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m6598 (AnimatorTransitionInfo_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m6599 (AnimatorTransitionInfo_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m6600 (AnimatorTransitionInfo_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m6601 (AnimatorTransitionInfo_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m6602 (AnimatorTransitionInfo_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m6603 (AnimatorTransitionInfo_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m6604 (AnimatorTransitionInfo_t1156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimatorTransitionInfo_t1156_marshal(const AnimatorTransitionInfo_t1156& unmarshaled, AnimatorTransitionInfo_t1156_marshaled& marshaled);
void AnimatorTransitionInfo_t1156_marshal_back(const AnimatorTransitionInfo_t1156_marshaled& marshaled, AnimatorTransitionInfo_t1156& unmarshaled);
void AnimatorTransitionInfo_t1156_marshal_cleanup(AnimatorTransitionInfo_t1156_marshaled& marshaled);
