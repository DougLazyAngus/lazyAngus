#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionSet
struct PermissionSet_t4833;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5231;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t5240;
// System.Array
struct Array_t;
// System.Security.SecurityElement
struct SecurityElement_t4827;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.PermissionSet::.ctor()
extern "C" void PermissionSet__ctor_m23158 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.Permissions.PermissionState)
extern "C" void PermissionSet__ctor_m23159 (PermissionSet_t4833 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.PermissionSet)
extern "C" void PermissionSet__ctor_m23160 (PermissionSet_t4833 * __this, PermissionSet_t4833 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
extern "C" void PermissionSet__ctor_m23161 (PermissionSet_t4833 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.cctor()
extern "C" void PermissionSet__cctor_m23162 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void PermissionSet_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m23163 (PermissionSet_t4833 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::AddPermission(System.Security.IPermission)
extern "C" Object_t * PermissionSet_AddPermission_m23164 (PermissionSet_t4833 * __this, Object_t * ___perm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Copy()
extern "C" PermissionSet_t4833 * PermissionSet_Copy_m23165 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::CopyTo(System.Array,System.Int32)
extern "C" void PermissionSet_CopyTo_m23166 (PermissionSet_t4833 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::Demand()
extern "C" void PermissionSet_Demand_m23167 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::FromXml(System.Security.SecurityElement)
extern "C" void PermissionSet_FromXml_m23168 (PermissionSet_t4833 * __this, SecurityElement_t4827 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.PermissionSet::GetEnumerator()
extern "C" Object_t * PermissionSet_GetEnumerator_m23169 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsSubsetOf(System.Security.PermissionSet)
extern "C" bool PermissionSet_IsSubsetOf_m23170 (PermissionSet_t4833 * __this, PermissionSet_t4833 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::GetPermission(System.Type)
extern "C" Object_t * PermissionSet_GetPermission_m23171 (PermissionSet_t4833 * __this, Type_t * ___permClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Intersect(System.Security.PermissionSet)
extern "C" PermissionSet_t4833 * PermissionSet_Intersect_m23172 (PermissionSet_t4833 * __this, PermissionSet_t4833 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::InternalIntersect(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C" void PermissionSet_InternalIntersect_m23173 (PermissionSet_t4833 * __this, PermissionSet_t4833 * ___intersect, PermissionSet_t4833 * ___a, PermissionSet_t4833 * ___b, bool ___unrestricted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsEmpty()
extern "C" bool PermissionSet_IsEmpty_m23174 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsUnrestricted()
extern "C" bool PermissionSet_IsUnrestricted_m23175 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::RemovePermission(System.Type)
extern "C" Object_t * PermissionSet_RemovePermission_m23176 (PermissionSet_t4833 * __this, Type_t * ___permClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.PermissionSet::ToString()
extern "C" String_t* PermissionSet_ToString_m23177 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.PermissionSet::ToXml()
extern "C" SecurityElement_t4827 * PermissionSet_ToXml_m23178 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Union(System.Security.PermissionSet)
extern "C" PermissionSet_t4833 * PermissionSet_Union_m23179 (PermissionSet_t4833 * __this, PermissionSet_t4833 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::get_Count()
extern "C" int32_t PermissionSet_get_Count_m23180 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::get_IsSynchronized()
extern "C" bool PermissionSet_get_IsSynchronized_m23181 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.PermissionSet::get_SyncRoot()
extern "C" Object_t * PermissionSet_get_SyncRoot_m23182 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
extern "C" void PermissionSet_set_DeclarativeSecurity_m23183 (PermissionSet_t4833 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::Equals(System.Object)
extern "C" bool PermissionSet_Equals_m23184 (PermissionSet_t4833 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::GetHashCode()
extern "C" int32_t PermissionSet_GetHashCode_m23185 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.PermissionSet::get_Resolver()
extern "C" PolicyLevel_t5231 * PermissionSet_get_Resolver_m23186 (PermissionSet_t4833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_Resolver(System.Security.Policy.PolicyLevel)
extern "C" void PermissionSet_set_Resolver_m23187 (PermissionSet_t4833 * __this, PolicyLevel_t5231 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::SetReadOnly(System.Boolean)
extern "C" void PermissionSet_SetReadOnly_m23188 (PermissionSet_t4833 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
extern "C" PermissionSet_t4833 * PermissionSet_CreateFromBinaryFormat_m23189 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::ReadEncodedInt(System.Byte[],System.Int32&)
extern "C" int32_t PermissionSet_ReadEncodedInt_m23190 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___data, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::ProcessAttribute(System.Byte[],System.Int32&)
extern "C" Object_t * PermissionSet_ProcessAttribute_m23191 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___data, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
