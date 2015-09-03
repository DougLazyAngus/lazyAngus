#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t5342;
// System.String
struct String_t;
// System.Version
struct Version_t1401;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t5313;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5325;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5231;

// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C" void StrongNameMembershipCondition__ctor_m24001 (StrongNameMembershipCondition_t5342 * __this, StrongNamePublicKeyBlob_t5313 * ___blob, String_t* ___name, Version_t1401 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.SecurityElement)
extern "C" void StrongNameMembershipCondition__ctor_m24002 (StrongNameMembershipCondition_t5342 * __this, SecurityElement_t4827 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor()
extern "C" void StrongNameMembershipCondition__ctor_m24003 (StrongNameMembershipCondition_t5342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::get_Name()
extern "C" String_t* StrongNameMembershipCondition_get_Name_m24004 (StrongNameMembershipCondition_t5342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongNameMembershipCondition::get_Version()
extern "C" Version_t1401 * StrongNameMembershipCondition_get_Version_m24005 (StrongNameMembershipCondition_t5342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::get_PublicKey()
extern "C" StrongNamePublicKeyBlob_t5313 * StrongNameMembershipCondition_get_PublicKey_m24006 (StrongNameMembershipCondition_t5342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C" bool StrongNameMembershipCondition_Check_m24007 (StrongNameMembershipCondition_t5342 * __this, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.StrongNameMembershipCondition::Copy()
extern "C" Object_t * StrongNameMembershipCondition_Copy_m24008 (StrongNameMembershipCondition_t5342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Equals(System.Object)
extern "C" bool StrongNameMembershipCondition_Equals_m24009 (StrongNameMembershipCondition_t5342 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongNameMembershipCondition::GetHashCode()
extern "C" int32_t StrongNameMembershipCondition_GetHashCode_m24010 (StrongNameMembershipCondition_t5342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C" void StrongNameMembershipCondition_FromXml_m24011 (StrongNameMembershipCondition_t5342 * __this, SecurityElement_t4827 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void StrongNameMembershipCondition_FromXml_m24012 (StrongNameMembershipCondition_t5342 * __this, SecurityElement_t4827 * ___e, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::ToString()
extern "C" String_t* StrongNameMembershipCondition_ToString_m24013 (StrongNameMembershipCondition_t5342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml()
extern "C" SecurityElement_t4827 * StrongNameMembershipCondition_ToXml_m24014 (StrongNameMembershipCondition_t5342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t4827 * StrongNameMembershipCondition_ToXml_m24015 (StrongNameMembershipCondition_t5342 * __this, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
