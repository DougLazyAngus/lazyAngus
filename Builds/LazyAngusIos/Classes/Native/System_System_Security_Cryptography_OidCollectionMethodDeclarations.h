#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.OidCollection
struct OidCollection_t1590;
// System.Security.Cryptography.Oid
struct Oid_t1567;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void System.Security.Cryptography.OidCollection::.ctor()
extern "C" void OidCollection__ctor_m7998 (OidCollection_t1590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void OidCollection_System_Collections_ICollection_CopyTo_m7999 (OidCollection_t1590 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * OidCollection_System_Collections_IEnumerable_GetEnumerator_m8000 (OidCollection_t1590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.OidCollection::get_Count()
extern "C" int32_t OidCollection_get_Count_m8001 (OidCollection_t1590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidCollection::get_IsSynchronized()
extern "C" bool OidCollection_get_IsSynchronized_m8002 (OidCollection_t1590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
extern "C" Oid_t1567 * OidCollection_get_Item_m8003 (OidCollection_t1590 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.String)
extern "C" Oid_t1567 * OidCollection_get_Item_m8004 (OidCollection_t1590 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
extern "C" Object_t * OidCollection_get_SyncRoot_m8005 (OidCollection_t1590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
extern "C" int32_t OidCollection_Add_m8006 (OidCollection_t1590 * __this, Oid_t1567 * ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidCollection::set_ReadOnly(System.Boolean)
extern "C" void OidCollection_set_ReadOnly_m8007 (OidCollection_t1590 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
