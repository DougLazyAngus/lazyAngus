#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t3371;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t3370;
// System.String
struct String_t;
// System.Configuration.Provider.ProviderBase
struct ProviderBase_t3305;

// System.Void System.Configuration.ProtectedConfigurationProviderCollection::.ctor()
extern "C" void ProtectedConfigurationProviderCollection__ctor_m12054 (ProtectedConfigurationProviderCollection_t3371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationProviderCollection::get_Item(System.String)
extern "C" ProtectedConfigurationProvider_t3370 * ProtectedConfigurationProviderCollection_get_Item_m12055 (ProtectedConfigurationProviderCollection_t3371 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProtectedConfigurationProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C" void ProtectedConfigurationProviderCollection_Add_m12056 (ProtectedConfigurationProviderCollection_t3371 * __this, ProviderBase_t3305 * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
