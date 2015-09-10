#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t5353;
// System.String
struct String_t;
// System.Version
struct Version_t1412;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t5324;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Security.Policy.Evidence
struct Evidence_t4843;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5336;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5242;

// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C" void StrongNameMembershipCondition__ctor_m24071 (StrongNameMembershipCondition_t5353 * __this, StrongNamePublicKeyBlob_t5324 * ___blob, String_t* ___name, Version_t1412 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.SecurityElement)
extern "C" void StrongNameMembershipCondition__ctor_m24072 (StrongNameMembershipCondition_t5353 * __this, SecurityElement_t4838 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor()
extern "C" void StrongNameMembershipCondition__ctor_m24073 (StrongNameMembershipCondition_t5353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::get_Name()
extern "C" String_t* StrongNameMembershipCondition_get_Name_m24074 (StrongNameMembershipCondition_t5353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongNameMembershipCondition::get_Version()
extern "C" Version_t1412 * StrongNameMembershipCondition_get_Version_m24075 (StrongNameMembershipCondition_t5353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::get_PublicKey()
extern "C" StrongNamePublicKeyBlob_t5324 * StrongNameMembershipCondition_get_PublicKey_m24076 (StrongNameMembershipCondition_t5353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C" bool StrongNameMembershipCondition_Check_m24077 (StrongNameMembershipCondition_t5353 * __this, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.StrongNameMembershipCondition::Copy()
extern "C" Object_t * StrongNameMembershipCondition_Copy_m24078 (StrongNameMembershipCondition_t5353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Equals(System.Object)
extern "C" bool StrongNameMembershipCondition_Equals_m24079 (StrongNameMembershipCondition_t5353 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongNameMembershipCondition::GetHashCode()
extern "C" int32_t StrongNameMembershipCondition_GetHashCode_m24080 (StrongNameMembershipCondition_t5353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C" void StrongNameMembershipCondition_FromXml_m24081 (StrongNameMembershipCondition_t5353 * __this, SecurityElement_t4838 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void StrongNameMembershipCondition_FromXml_m24082 (StrongNameMembershipCondition_t5353 * __this, SecurityElement_t4838 * ___e, PolicyLevel_t5242 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::ToString()
extern "C" String_t* StrongNameMembershipCondition_ToString_m24083 (StrongNameMembershipCondition_t5353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml()
extern "C" SecurityElement_t4838 * StrongNameMembershipCondition_ToXml_m24084 (StrongNameMembershipCondition_t5353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t4838 * StrongNameMembershipCondition_ToXml_m24085 (StrongNameMembershipCondition_t5353 * __this, PolicyLevel_t5242 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
