#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5322;
// System.Security.PermissionSet
struct PermissionSet_t4833;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5231;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyStatementAttribute
#include "mscorlib_System_Security_Policy_PolicyStatementAttribute.h"

// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet)
extern "C" void PolicyStatement__ctor_m23965 (PolicyStatement_t5322 * __this, PermissionSet_t4833 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet,System.Security.Policy.PolicyStatementAttribute)
extern "C" void PolicyStatement__ctor_m23966 (PolicyStatement_t5322 * __this, PermissionSet_t4833 * ___permSet, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.PolicyStatement::get_PermissionSet()
extern "C" PermissionSet_t4833 * PolicyStatement_get_PermissionSet_m23967 (PolicyStatement_t5322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::set_PermissionSet(System.Security.PermissionSet)
extern "C" void PolicyStatement_set_PermissionSet_m23968 (PolicyStatement_t5322 * __this, PermissionSet_t4833 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::get_Attributes()
extern "C" int32_t PolicyStatement_get_Attributes_m23969 (PolicyStatement_t5322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Copy()
extern "C" PolicyStatement_t5322 * PolicyStatement_Copy_m23970 (PolicyStatement_t5322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement)
extern "C" void PolicyStatement_FromXml_m23971 (PolicyStatement_t5322 * __this, SecurityElement_t4827 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void PolicyStatement_FromXml_m23972 (PolicyStatement_t5322 * __this, SecurityElement_t4827 * ___et, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml()
extern "C" SecurityElement_t4827 * PolicyStatement_ToXml_m23973 (PolicyStatement_t5322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t4827 * PolicyStatement_ToXml_m23974 (PolicyStatement_t5322 * __this, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyStatement::Equals(System.Object)
extern "C" bool PolicyStatement_Equals_m23975 (PolicyStatement_t5322 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.PolicyStatement::GetHashCode()
extern "C" int32_t PolicyStatement_GetHashCode_m23976 (PolicyStatement_t5322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Empty()
extern "C" PolicyStatement_t5322 * PolicyStatement_Empty_m23977 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
