﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t3313;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Configuration.ConfigurationLockType
#include "System_Configuration_System_Configuration_ConfigurationLockT.h"

// System.Void System.Configuration.ConfigurationLockCollection::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationLockType)
extern "C" void ConfigurationLockCollection__ctor_m11816 (ConfigurationLockCollection_t3313 * __this, ConfigurationElement_t3314 * ___element, int32_t ___lockType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ConfigurationLockCollection_System_Collections_ICollection_CopyTo_m11817 (ConfigurationLockCollection_t3313 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::CheckName(System.String)
extern "C" void ConfigurationLockCollection_CheckName_m11818 (ConfigurationLockCollection_t3313 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::Add(System.String)
extern "C" void ConfigurationLockCollection_Add_m11819 (ConfigurationLockCollection_t3313 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::Clear()
extern "C" void ConfigurationLockCollection_Clear_m11820 (ConfigurationLockCollection_t3313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationLockCollection::GetEnumerator()
extern "C" Object_t * ConfigurationLockCollection_GetEnumerator_m11821 (ConfigurationLockCollection_t3313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::SetFromList(System.String)
extern "C" void ConfigurationLockCollection_SetFromList_m11822 (ConfigurationLockCollection_t3313 * __this, String_t* ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationLockCollection::get_Count()
extern "C" int32_t ConfigurationLockCollection_get_Count_m11823 (ConfigurationLockCollection_t3313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationLockCollection::get_IsSynchronized()
extern "C" bool ConfigurationLockCollection_get_IsSynchronized_m11824 (ConfigurationLockCollection_t3313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationLockCollection::get_SyncRoot()
extern "C" Object_t * ConfigurationLockCollection_get_SyncRoot_m11825 (ConfigurationLockCollection_t3313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;