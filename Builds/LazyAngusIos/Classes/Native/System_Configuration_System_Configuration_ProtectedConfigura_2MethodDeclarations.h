#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t3362;
// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t3364;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3311;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t3361;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t3360;
// System.Configuration.ProviderSettings
struct ProviderSettings_t3363;

// System.Void System.Configuration.ProtectedConfigurationSection::.cctor()
extern "C" void ProtectedConfigurationSection__cctor_m12000 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProviderSettingsCollection System.Configuration.ProtectedConfigurationSection::get_Providers()
extern "C" ProviderSettingsCollection_t3364 * ProtectedConfigurationSection_get_Providers_m12001 (ProtectedConfigurationSection_t3362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3311 * ProtectedConfigurationSection_get_Properties_m12002 (ProtectedConfigurationSection_t3362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::GetAllProviders()
extern "C" ProtectedConfigurationProviderCollection_t3361 * ProtectedConfigurationSection_GetAllProviders_m12003 (ProtectedConfigurationSection_t3362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationSection::InstantiateProvider(System.Configuration.ProviderSettings)
extern "C" ProtectedConfigurationProvider_t3360 * ProtectedConfigurationSection_InstantiateProvider_m12004 (ProtectedConfigurationSection_t3362 * __this, ProviderSettings_t3363 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
