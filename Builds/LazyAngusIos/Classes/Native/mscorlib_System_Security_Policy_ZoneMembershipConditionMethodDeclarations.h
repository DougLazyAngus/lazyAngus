#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.ZoneMembershipCondition
struct ZoneMembershipCondition_t5347;
// System.Security.Policy.Evidence
struct Evidence_t4833;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5326;
// System.Object
struct Object_t;
// System.Security.SecurityElement
struct SecurityElement_t4828;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5232;
// System.String
struct String_t;
// System.Security.SecurityZone
#include "mscorlib_System_Security_SecurityZone.h"

// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor()
extern "C" void ZoneMembershipCondition__ctor_m24049 (ZoneMembershipCondition_t5347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor(System.Security.SecurityZone)
extern "C" void ZoneMembershipCondition__ctor_m24050 (ZoneMembershipCondition_t5347 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::get_SecurityZone()
extern "C" int32_t ZoneMembershipCondition_get_SecurityZone_m24051 (ZoneMembershipCondition_t5347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::set_SecurityZone(System.Security.SecurityZone)
extern "C" void ZoneMembershipCondition_set_SecurityZone_m24052 (ZoneMembershipCondition_t5347 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C" bool ZoneMembershipCondition_Check_m24053 (ZoneMembershipCondition_t5347 * __this, Evidence_t4833 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.ZoneMembershipCondition::Copy()
extern "C" Object_t * ZoneMembershipCondition_Copy_m24054 (ZoneMembershipCondition_t5347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Equals(System.Object)
extern "C" bool ZoneMembershipCondition_Equals_m24055 (ZoneMembershipCondition_t5347 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C" void ZoneMembershipCondition_FromXml_m24056 (ZoneMembershipCondition_t5347 * __this, SecurityElement_t4828 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void ZoneMembershipCondition_FromXml_m24057 (ZoneMembershipCondition_t5347 * __this, SecurityElement_t4828 * ___e, PolicyLevel_t5232 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.ZoneMembershipCondition::GetHashCode()
extern "C" int32_t ZoneMembershipCondition_GetHashCode_m24058 (ZoneMembershipCondition_t5347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.ZoneMembershipCondition::ToString()
extern "C" String_t* ZoneMembershipCondition_ToString_m24059 (ZoneMembershipCondition_t5347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml()
extern "C" SecurityElement_t4828 * ZoneMembershipCondition_ToXml_m24060 (ZoneMembershipCondition_t5347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t4828 * ZoneMembershipCondition_ToXml_m24061 (ZoneMembershipCondition_t5347 * __this, PolicyLevel_t5232 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
