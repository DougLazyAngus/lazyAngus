#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.OidCollection
struct OidCollection_t4045;
// System.Security.Cryptography.Oid
struct Oid_t4027;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void System.Security.Cryptography.OidCollection::.ctor()
extern "C" void OidCollection__ctor_m14243 (OidCollection_t4045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void OidCollection_System_Collections_ICollection_CopyTo_m14244 (OidCollection_t4045 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * OidCollection_System_Collections_IEnumerable_GetEnumerator_m14245 (OidCollection_t4045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.OidCollection::get_Count()
extern "C" int32_t OidCollection_get_Count_m14246 (OidCollection_t4045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidCollection::get_IsSynchronized()
extern "C" bool OidCollection_get_IsSynchronized_m14247 (OidCollection_t4045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
extern "C" Oid_t4027 * OidCollection_get_Item_m14248 (OidCollection_t4045 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.String)
extern "C" Oid_t4027 * OidCollection_get_Item_m14249 (OidCollection_t4045 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
extern "C" Object_t * OidCollection_get_SyncRoot_m14250 (OidCollection_t4045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
extern "C" int32_t OidCollection_Add_m14251 (OidCollection_t4045 * __this, Oid_t4027 * ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidCollection::set_ReadOnly(System.Boolean)
extern "C" void OidCollection_set_ReadOnly_m14252 (OidCollection_t4045 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
