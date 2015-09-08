#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct KeyContainerPermissionAccessEntryCollection_t5300;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Security.Permissions.KeyContainerPermissionAccessEntry
struct KeyContainerPermissionAccessEntry_t5302;
// System.Security.Permissions.KeyContainerPermissionAccessEntry[]
struct KeyContainerPermissionAccessEntryU5BU5D_t5430;
// System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator
struct KeyContainerPermissionAccessEntryEnumerator_t5303;

// System.Void System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::.ctor()
extern "C" void KeyContainerPermissionAccessEntryCollection__ctor_m23701 (KeyContainerPermissionAccessEntryCollection_t5300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyContainerPermissionAccessEntryCollection_System_Collections_ICollection_CopyTo_m23702 (KeyContainerPermissionAccessEntryCollection_t5300 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyContainerPermissionAccessEntryCollection_System_Collections_IEnumerable_GetEnumerator_m23703 (KeyContainerPermissionAccessEntryCollection_t5300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::get_Count()
extern "C" int32_t KeyContainerPermissionAccessEntryCollection_get_Count_m23704 (KeyContainerPermissionAccessEntryCollection_t5300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::get_IsSynchronized()
extern "C" bool KeyContainerPermissionAccessEntryCollection_get_IsSynchronized_m23705 (KeyContainerPermissionAccessEntryCollection_t5300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::get_SyncRoot()
extern "C" Object_t * KeyContainerPermissionAccessEntryCollection_get_SyncRoot_m23706 (KeyContainerPermissionAccessEntryCollection_t5300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::Add(System.Security.Permissions.KeyContainerPermissionAccessEntry)
extern "C" int32_t KeyContainerPermissionAccessEntryCollection_Add_m23707 (KeyContainerPermissionAccessEntryCollection_t5300 * __this, KeyContainerPermissionAccessEntry_t5302 * ___accessEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::CopyTo(System.Security.Permissions.KeyContainerPermissionAccessEntry[],System.Int32)
extern "C" void KeyContainerPermissionAccessEntryCollection_CopyTo_m23708 (KeyContainerPermissionAccessEntryCollection_t5300 * __this, KeyContainerPermissionAccessEntryU5BU5D_t5430* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::GetEnumerator()
extern "C" KeyContainerPermissionAccessEntryEnumerator_t5303 * KeyContainerPermissionAccessEntryCollection_GetEnumerator_m23709 (KeyContainerPermissionAccessEntryCollection_t5300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::IndexOf(System.Security.Permissions.KeyContainerPermissionAccessEntry)
extern "C" int32_t KeyContainerPermissionAccessEntryCollection_IndexOf_m23710 (KeyContainerPermissionAccessEntryCollection_t5300 * __this, KeyContainerPermissionAccessEntry_t5302 * ___accessEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
