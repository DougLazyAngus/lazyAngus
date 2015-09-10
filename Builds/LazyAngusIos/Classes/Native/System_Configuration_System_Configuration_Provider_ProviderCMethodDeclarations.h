#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.Provider.ProviderCollection
struct ProviderCollection_t3306;
// System.Object
struct Object_t;
// System.Configuration.Provider.ProviderBase
struct ProviderBase_t3305;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void System.Configuration.Provider.ProviderCollection::.ctor()
extern "C" void ProviderCollection__ctor_m11719 (ProviderCollection_t3306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Provider.ProviderCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ProviderCollection_System_Collections_ICollection_CopyTo_m11720 (ProviderCollection_t3306 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Provider.ProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C" void ProviderCollection_Add_m11721 (ProviderCollection_t3306 * __this, ProviderBase_t3305 * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.Provider.ProviderCollection::GetEnumerator()
extern "C" Object_t * ProviderCollection_GetEnumerator_m11722 (ProviderCollection_t3306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.Provider.ProviderCollection::get_Count()
extern "C" int32_t ProviderCollection_get_Count_m11723 (ProviderCollection_t3306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Provider.ProviderCollection::get_IsSynchronized()
extern "C" bool ProviderCollection_get_IsSynchronized_m11724 (ProviderCollection_t3306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.Provider.ProviderCollection::get_SyncRoot()
extern "C" Object_t * ProviderCollection_get_SyncRoot_m11725 (ProviderCollection_t3306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Provider.ProviderBase System.Configuration.Provider.ProviderCollection::get_Item(System.String)
extern "C" ProviderBase_t3305 * ProviderCollection_get_Item_m11726 (ProviderCollection_t3306 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
