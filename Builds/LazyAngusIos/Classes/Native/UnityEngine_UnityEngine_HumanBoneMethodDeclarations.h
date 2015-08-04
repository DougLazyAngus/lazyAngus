#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t2736;
struct HumanBone_t2736_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m9304 (HumanBone_t2736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m9305 (HumanBone_t2736 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m9306 (HumanBone_t2736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m9307 (HumanBone_t2736 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t2736_marshal(const HumanBone_t2736& unmarshaled, HumanBone_t2736_marshaled& marshaled);
void HumanBone_t2736_marshal_back(const HumanBone_t2736_marshaled& marshaled, HumanBone_t2736& unmarshaled);
void HumanBone_t2736_marshal_cleanup(HumanBone_t2736_marshaled& marshaled);
