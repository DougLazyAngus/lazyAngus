#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionSet
struct PermissionSet_t4844;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t5242;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t5251;
// System.Array
struct Array_t;
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.PermissionSet::.ctor()
extern "C" void PermissionSet__ctor_m23228 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.Permissions.PermissionState)
extern "C" void PermissionSet__ctor_m23229 (PermissionSet_t4844 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.PermissionSet)
extern "C" void PermissionSet__ctor_m23230 (PermissionSet_t4844 * __this, PermissionSet_t4844 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
extern "C" void PermissionSet__ctor_m23231 (PermissionSet_t4844 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.cctor()
extern "C" void PermissionSet__cctor_m23232 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void PermissionSet_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m23233 (PermissionSet_t4844 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::AddPermission(System.Security.IPermission)
extern "C" Object_t * PermissionSet_AddPermission_m23234 (PermissionSet_t4844 * __this, Object_t * ___perm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Copy()
extern "C" PermissionSet_t4844 * PermissionSet_Copy_m23235 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::CopyTo(System.Array,System.Int32)
extern "C" void PermissionSet_CopyTo_m23236 (PermissionSet_t4844 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::Demand()
extern "C" void PermissionSet_Demand_m23237 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::FromXml(System.Security.SecurityElement)
extern "C" void PermissionSet_FromXml_m23238 (PermissionSet_t4844 * __this, SecurityElement_t4838 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.PermissionSet::GetEnumerator()
extern "C" Object_t * PermissionSet_GetEnumerator_m23239 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsSubsetOf(System.Security.PermissionSet)
extern "C" bool PermissionSet_IsSubsetOf_m23240 (PermissionSet_t4844 * __this, PermissionSet_t4844 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::GetPermission(System.Type)
extern "C" Object_t * PermissionSet_GetPermission_m23241 (PermissionSet_t4844 * __this, Type_t * ___permClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Intersect(System.Security.PermissionSet)
extern "C" PermissionSet_t4844 * PermissionSet_Intersect_m23242 (PermissionSet_t4844 * __this, PermissionSet_t4844 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::InternalIntersect(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C" void PermissionSet_InternalIntersect_m23243 (PermissionSet_t4844 * __this, PermissionSet_t4844 * ___intersect, PermissionSet_t4844 * ___a, PermissionSet_t4844 * ___b, bool ___unrestricted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsEmpty()
extern "C" bool PermissionSet_IsEmpty_m23244 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsUnrestricted()
extern "C" bool PermissionSet_IsUnrestricted_m23245 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::RemovePermission(System.Type)
extern "C" Object_t * PermissionSet_RemovePermission_m23246 (PermissionSet_t4844 * __this, Type_t * ___permClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.PermissionSet::ToString()
extern "C" String_t* PermissionSet_ToString_m23247 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.PermissionSet::ToXml()
extern "C" SecurityElement_t4838 * PermissionSet_ToXml_m23248 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Union(System.Security.PermissionSet)
extern "C" PermissionSet_t4844 * PermissionSet_Union_m23249 (PermissionSet_t4844 * __this, PermissionSet_t4844 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::get_Count()
extern "C" int32_t PermissionSet_get_Count_m23250 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::get_IsSynchronized()
extern "C" bool PermissionSet_get_IsSynchronized_m23251 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.PermissionSet::get_SyncRoot()
extern "C" Object_t * PermissionSet_get_SyncRoot_m23252 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
extern "C" void PermissionSet_set_DeclarativeSecurity_m23253 (PermissionSet_t4844 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::Equals(System.Object)
extern "C" bool PermissionSet_Equals_m23254 (PermissionSet_t4844 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::GetHashCode()
extern "C" int32_t PermissionSet_GetHashCode_m23255 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.PermissionSet::get_Resolver()
extern "C" PolicyLevel_t5242 * PermissionSet_get_Resolver_m23256 (PermissionSet_t4844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_Resolver(System.Security.Policy.PolicyLevel)
extern "C" void PermissionSet_set_Resolver_m23257 (PermissionSet_t4844 * __this, PolicyLevel_t5242 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::SetReadOnly(System.Boolean)
extern "C" void PermissionSet_SetReadOnly_m23258 (PermissionSet_t4844 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
extern "C" PermissionSet_t4844 * PermissionSet_CreateFromBinaryFormat_m23259 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::ReadEncodedInt(System.Byte[],System.Int32&)
extern "C" int32_t PermissionSet_ReadEncodedInt_m23260 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___data, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::ProcessAttribute(System.Byte[],System.Int32&)
extern "C" Object_t * PermissionSet_ProcessAttribute_m23261 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___data, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
