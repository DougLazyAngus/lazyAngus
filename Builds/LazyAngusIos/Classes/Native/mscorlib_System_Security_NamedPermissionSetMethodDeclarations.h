#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.NamedPermissionSet
struct NamedPermissionSet_t5240;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t4844;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Object
struct Object_t;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.NamedPermissionSet::.ctor()
extern "C" void NamedPermissionSet__ctor_m23212 (NamedPermissionSet_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.String,System.Security.Permissions.PermissionState)
extern "C" void NamedPermissionSet__ctor_m23213 (NamedPermissionSet_t5240 * __this, String_t* ___name, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.Security.NamedPermissionSet)
extern "C" void NamedPermissionSet__ctor_m23214 (NamedPermissionSet_t5240 * __this, NamedPermissionSet_t5240 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.NamedPermissionSet::get_Name()
extern "C" String_t* NamedPermissionSet_get_Name_m23215 (NamedPermissionSet_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::set_Name(System.String)
extern "C" void NamedPermissionSet_set_Name_m23216 (NamedPermissionSet_t5240 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.NamedPermissionSet::Copy()
extern "C" PermissionSet_t4844 * NamedPermissionSet_Copy_m23217 (NamedPermissionSet_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::FromXml(System.Security.SecurityElement)
extern "C" void NamedPermissionSet_FromXml_m23218 (NamedPermissionSet_t5240 * __this, SecurityElement_t4838 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.NamedPermissionSet::ToXml()
extern "C" SecurityElement_t4838 * NamedPermissionSet_ToXml_m23219 (NamedPermissionSet_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.NamedPermissionSet::Equals(System.Object)
extern "C" bool NamedPermissionSet_Equals_m23220 (NamedPermissionSet_t5240 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.NamedPermissionSet::GetHashCode()
extern "C" int32_t NamedPermissionSet_GetHashCode_m23221 (NamedPermissionSet_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
