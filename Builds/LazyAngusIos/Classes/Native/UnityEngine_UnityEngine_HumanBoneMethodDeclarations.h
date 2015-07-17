#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t1158;
struct HumanBone_t1158_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m6601 (HumanBone_t1158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m6602 (HumanBone_t1158 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m6603 (HumanBone_t1158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m6604 (HumanBone_t1158 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t1158_marshal(const HumanBone_t1158& unmarshaled, HumanBone_t1158_marshaled& marshaled);
void HumanBone_t1158_marshal_back(const HumanBone_t1158_marshaled& marshaled, HumanBone_t1158& unmarshaled);
void HumanBone_t1158_marshal_cleanup(HumanBone_t1158_marshaled& marshaled);
