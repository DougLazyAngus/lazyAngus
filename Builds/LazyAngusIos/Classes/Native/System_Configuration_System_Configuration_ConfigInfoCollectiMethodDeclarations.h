#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t3376;
// System.Collections.ICollection
struct ICollection_t779;
// System.Configuration.ConfigInfo
struct ConfigInfo_t3311;
// System.String
struct String_t;

// System.Void System.Configuration.ConfigInfoCollection::.ctor()
extern "C" void ConfigInfoCollection__ctor_m12096 (ConfigInfoCollection_t3376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Configuration.ConfigInfoCollection::get_AllKeys()
extern "C" Object_t * ConfigInfoCollection_get_AllKeys_m12097 (ConfigInfoCollection_t3376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfo System.Configuration.ConfigInfoCollection::get_Item(System.String)
extern "C" ConfigInfo_t3311 * ConfigInfoCollection_get_Item_m12098 (ConfigInfoCollection_t3376 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::set_Item(System.String,System.Configuration.ConfigInfo)
extern "C" void ConfigInfoCollection_set_Item_m12099 (ConfigInfoCollection_t3376 * __this, String_t* ___name, ConfigInfo_t3311 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Add(System.String,System.Configuration.ConfigInfo)
extern "C" void ConfigInfoCollection_Add_m12100 (ConfigInfoCollection_t3376 * __this, String_t* ___name, ConfigInfo_t3311 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Clear()
extern "C" void ConfigInfoCollection_Clear_m12101 (ConfigInfoCollection_t3376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Remove(System.String)
extern "C" void ConfigInfoCollection_Remove_m12102 (ConfigInfoCollection_t3376 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
