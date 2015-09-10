#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.FileCodeGroup
struct FileCodeGroup_t5341;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t5336;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5242;
// System.Security.Policy.CodeGroup
struct CodeGroup_t5337;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t5333;
// System.Security.Policy.Evidence
struct Evidence_t4843;
// System.Object
struct Object_t;
// System.Security.Permissions.FileIOPermissionAccess
#include "mscorlib_System_Security_Permissions_FileIOPermissionAccess.h"

// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Permissions.FileIOPermissionAccess)
extern "C" void FileCodeGroup__ctor_m23980 (FileCodeGroup_t5341 * __this, Object_t * ___membershipCondition, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void FileCodeGroup__ctor_m23981 (FileCodeGroup_t5341 * __this, SecurityElement_t4838 * ___e, PolicyLevel_t5242 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FileCodeGroup::Copy()
extern "C" CodeGroup_t5337 * FileCodeGroup_Copy_m23982 (FileCodeGroup_t5341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FileCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t5333 * FileCodeGroup_Resolve_m23983 (FileCodeGroup_t5341 * __this, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.FileCodeGroup::Equals(System.Object)
extern "C" bool FileCodeGroup_Equals_m23984 (FileCodeGroup_t5341 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.FileCodeGroup::GetHashCode()
extern "C" int32_t FileCodeGroup_GetHashCode_m23985 (FileCodeGroup_t5341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void FileCodeGroup_ParseXml_m23986 (FileCodeGroup_t5341 * __this, SecurityElement_t4838 * ___e, PolicyLevel_t5242 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void FileCodeGroup_CreateXml_m23987 (FileCodeGroup_t5341 * __this, SecurityElement_t4838 * ___element, PolicyLevel_t5242 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
