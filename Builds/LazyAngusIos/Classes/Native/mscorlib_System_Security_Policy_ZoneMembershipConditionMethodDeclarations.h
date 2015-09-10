#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.ZoneMembershipCondition
struct ZoneMembershipCondition_t5357;
// System.Security.Policy.Evidence
struct Evidence_t4843;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5336;
// System.Object
struct Object_t;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5242;
// System.String
struct String_t;
// System.Security.SecurityZone
#include "mscorlib_System_Security_SecurityZone.h"

// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor()
extern "C" void ZoneMembershipCondition__ctor_m24106 (ZoneMembershipCondition_t5357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor(System.Security.SecurityZone)
extern "C" void ZoneMembershipCondition__ctor_m24107 (ZoneMembershipCondition_t5357 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::get_SecurityZone()
extern "C" int32_t ZoneMembershipCondition_get_SecurityZone_m24108 (ZoneMembershipCondition_t5357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::set_SecurityZone(System.Security.SecurityZone)
extern "C" void ZoneMembershipCondition_set_SecurityZone_m24109 (ZoneMembershipCondition_t5357 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C" bool ZoneMembershipCondition_Check_m24110 (ZoneMembershipCondition_t5357 * __this, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.ZoneMembershipCondition::Copy()
extern "C" Object_t * ZoneMembershipCondition_Copy_m24111 (ZoneMembershipCondition_t5357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Equals(System.Object)
extern "C" bool ZoneMembershipCondition_Equals_m24112 (ZoneMembershipCondition_t5357 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C" void ZoneMembershipCondition_FromXml_m24113 (ZoneMembershipCondition_t5357 * __this, SecurityElement_t4838 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void ZoneMembershipCondition_FromXml_m24114 (ZoneMembershipCondition_t5357 * __this, SecurityElement_t4838 * ___e, PolicyLevel_t5242 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.ZoneMembershipCondition::GetHashCode()
extern "C" int32_t ZoneMembershipCondition_GetHashCode_m24115 (ZoneMembershipCondition_t5357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.ZoneMembershipCondition::ToString()
extern "C" String_t* ZoneMembershipCondition_ToString_m24116 (ZoneMembershipCondition_t5357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml()
extern "C" SecurityElement_t4838 * ZoneMembershipCondition_ToXml_m24117 (ZoneMembershipCondition_t5357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t4838 * ZoneMembershipCondition_ToXml_m24118 (ZoneMembershipCondition_t5357 * __this, PolicyLevel_t5242 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
