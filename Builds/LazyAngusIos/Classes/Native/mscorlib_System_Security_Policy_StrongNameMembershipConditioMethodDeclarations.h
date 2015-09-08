#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t5346;
// System.String
struct String_t;
// System.Version
struct Version_t1405;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t5317;
// System.Security.SecurityElement
struct SecurityElement_t4831;
// System.Security.Policy.Evidence
struct Evidence_t4836;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5329;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5235;

// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C" void StrongNameMembershipCondition__ctor_m24014 (StrongNameMembershipCondition_t5346 * __this, StrongNamePublicKeyBlob_t5317 * ___blob, String_t* ___name, Version_t1405 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.SecurityElement)
extern "C" void StrongNameMembershipCondition__ctor_m24015 (StrongNameMembershipCondition_t5346 * __this, SecurityElement_t4831 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor()
extern "C" void StrongNameMembershipCondition__ctor_m24016 (StrongNameMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::get_Name()
extern "C" String_t* StrongNameMembershipCondition_get_Name_m24017 (StrongNameMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongNameMembershipCondition::get_Version()
extern "C" Version_t1405 * StrongNameMembershipCondition_get_Version_m24018 (StrongNameMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::get_PublicKey()
extern "C" StrongNamePublicKeyBlob_t5317 * StrongNameMembershipCondition_get_PublicKey_m24019 (StrongNameMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C" bool StrongNameMembershipCondition_Check_m24020 (StrongNameMembershipCondition_t5346 * __this, Evidence_t4836 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.StrongNameMembershipCondition::Copy()
extern "C" Object_t * StrongNameMembershipCondition_Copy_m24021 (StrongNameMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Equals(System.Object)
extern "C" bool StrongNameMembershipCondition_Equals_m24022 (StrongNameMembershipCondition_t5346 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongNameMembershipCondition::GetHashCode()
extern "C" int32_t StrongNameMembershipCondition_GetHashCode_m24023 (StrongNameMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C" void StrongNameMembershipCondition_FromXml_m24024 (StrongNameMembershipCondition_t5346 * __this, SecurityElement_t4831 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void StrongNameMembershipCondition_FromXml_m24025 (StrongNameMembershipCondition_t5346 * __this, SecurityElement_t4831 * ___e, PolicyLevel_t5235 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::ToString()
extern "C" String_t* StrongNameMembershipCondition_ToString_m24026 (StrongNameMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml()
extern "C" SecurityElement_t4831 * StrongNameMembershipCondition_ToXml_m24027 (StrongNameMembershipCondition_t5346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t4831 * StrongNameMembershipCondition_ToXml_m24028 (StrongNameMembershipCondition_t5346 * __this, PolicyLevel_t5235 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
