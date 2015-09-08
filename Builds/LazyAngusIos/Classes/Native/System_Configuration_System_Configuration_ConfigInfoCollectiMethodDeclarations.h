#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t3369;
// System.Collections.ICollection
struct ICollection_t772;
// System.Configuration.ConfigInfo
struct ConfigInfo_t3304;
// System.String
struct String_t;

// System.Void System.Configuration.ConfigInfoCollection::.ctor()
extern "C" void ConfigInfoCollection__ctor_m12039 (ConfigInfoCollection_t3369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Configuration.ConfigInfoCollection::get_AllKeys()
extern "C" Object_t * ConfigInfoCollection_get_AllKeys_m12040 (ConfigInfoCollection_t3369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfo System.Configuration.ConfigInfoCollection::get_Item(System.String)
extern "C" ConfigInfo_t3304 * ConfigInfoCollection_get_Item_m12041 (ConfigInfoCollection_t3369 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::set_Item(System.String,System.Configuration.ConfigInfo)
extern "C" void ConfigInfoCollection_set_Item_m12042 (ConfigInfoCollection_t3369 * __this, String_t* ___name, ConfigInfo_t3304 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Add(System.String,System.Configuration.ConfigInfo)
extern "C" void ConfigInfoCollection_Add_m12043 (ConfigInfoCollection_t3369 * __this, String_t* ___name, ConfigInfo_t3304 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Clear()
extern "C" void ConfigInfoCollection_Clear_m12044 (ConfigInfoCollection_t3369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Remove(System.String)
extern "C" void ConfigInfoCollection_Remove_m12045 (ConfigInfoCollection_t3369 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
