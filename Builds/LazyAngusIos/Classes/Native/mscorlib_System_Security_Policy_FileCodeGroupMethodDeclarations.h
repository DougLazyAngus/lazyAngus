#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.FileCodeGroup
struct FileCodeGroup_t5330;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5325;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5231;
// System.Security.Policy.CodeGroup
struct CodeGroup_t5326;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5322;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Object
struct Object_t;
// System.Security.Permissions.FileIOPermissionAccess
#include "mscorlib_System_Security_Permissions_FileIOPermissionAccess.h"

// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Permissions.FileIOPermissionAccess)
extern "C" void FileCodeGroup__ctor_m23910 (FileCodeGroup_t5330 * __this, Object_t * ___membershipCondition, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void FileCodeGroup__ctor_m23911 (FileCodeGroup_t5330 * __this, SecurityElement_t4827 * ___e, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FileCodeGroup::Copy()
extern "C" CodeGroup_t5326 * FileCodeGroup_Copy_m23912 (FileCodeGroup_t5330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FileCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t5322 * FileCodeGroup_Resolve_m23913 (FileCodeGroup_t5330 * __this, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.FileCodeGroup::Equals(System.Object)
extern "C" bool FileCodeGroup_Equals_m23914 (FileCodeGroup_t5330 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.FileCodeGroup::GetHashCode()
extern "C" int32_t FileCodeGroup_GetHashCode_m23915 (FileCodeGroup_t5330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void FileCodeGroup_ParseXml_m23916 (FileCodeGroup_t5330 * __this, SecurityElement_t4827 * ___e, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void FileCodeGroup_CreateXml_m23917 (FileCodeGroup_t5330 * __this, SecurityElement_t4827 * ___element, PolicyLevel_t5231 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
