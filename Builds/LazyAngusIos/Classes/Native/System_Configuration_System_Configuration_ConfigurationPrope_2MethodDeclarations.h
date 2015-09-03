#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3329;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void System.Configuration.ConfigurationPropertyCollection::.ctor()
extern "C" void ConfigurationPropertyCollection__ctor_m11857 (ConfigurationPropertyCollection_t3310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationPropertyCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ConfigurationPropertyCollection_System_Collections_ICollection_CopyTo_m11858 (ConfigurationPropertyCollection_t3310 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationPropertyCollection::get_Count()
extern "C" int32_t ConfigurationPropertyCollection_get_Count_m11859 (ConfigurationPropertyCollection_t3310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationPropertyCollection::get_IsSynchronized()
extern "C" bool ConfigurationPropertyCollection_get_IsSynchronized_m11860 (ConfigurationPropertyCollection_t3310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationPropertyCollection::get_SyncRoot()
extern "C" Object_t * ConfigurationPropertyCollection_get_SyncRoot_m11861 (ConfigurationPropertyCollection_t3310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationPropertyCollection::Add(System.Configuration.ConfigurationProperty)
extern "C" void ConfigurationPropertyCollection_Add_m11862 (ConfigurationPropertyCollection_t3310 * __this, ConfigurationProperty_t3329 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator()
extern "C" Object_t * ConfigurationPropertyCollection_GetEnumerator_m11863 (ConfigurationPropertyCollection_t3310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
