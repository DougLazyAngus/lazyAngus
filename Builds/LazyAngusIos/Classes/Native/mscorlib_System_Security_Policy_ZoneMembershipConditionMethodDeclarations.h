#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.ZoneMembershipCondition
struct ZoneMembershipCondition_t5346;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5325;
// System.Object
struct Object_t;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5231;
// System.String
struct String_t;
// System.Security.SecurityZone
#include "mscorlib_System_Security_SecurityZone.h"

// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor()
extern "C" void ZoneMembershipCondition__ctor_m24036 (ZoneMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor(System.Security.SecurityZone)
extern "C" void ZoneMembershipCondition__ctor_m24037 (ZoneMembershipCondition_t5346 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::get_SecurityZone()
extern "C" int32_t ZoneMembershipCondition_get_SecurityZone_m24038 (ZoneMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::set_SecurityZone(System.Security.SecurityZone)
extern "C" void ZoneMembershipCondition_set_SecurityZone_m24039 (ZoneMembershipCondition_t5346 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C" bool ZoneMembershipCondition_Check_m24040 (ZoneMembershipCondition_t5346 * __this, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.ZoneMembershipCondition::Copy()
extern "C" Object_t * ZoneMembershipCondition_Copy_m24041 (ZoneMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Equals(System.Object)
extern "C" bool ZoneMembershipCondition_Equals_m24042 (ZoneMembershipCondition_t5346 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C" void ZoneMembershipCondition_FromXml_m24043 (ZoneMembershipCondition_t5346 * __this, SecurityElement_t4827 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void ZoneMembershipCondition_FromXml_m24044 (ZoneMembershipCondition_t5346 * __this, SecurityElement_t4827 * ___e, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.ZoneMembershipCondition::GetHashCode()
extern "C" int32_t ZoneMembershipCondition_GetHashCode_m24045 (ZoneMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.ZoneMembershipCondition::ToString()
extern "C" String_t* ZoneMembershipCondition_ToString_m24046 (ZoneMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml()
extern "C" SecurityElement_t4827 * ZoneMembershipCondition_ToXml_m24047 (ZoneMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t4827 * ZoneMembershipCondition_ToXml_m24048 (ZoneMembershipCondition_t5346 * __this, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
