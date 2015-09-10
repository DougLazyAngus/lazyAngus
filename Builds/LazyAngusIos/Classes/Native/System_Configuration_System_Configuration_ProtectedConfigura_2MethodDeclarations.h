#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t3372;
// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t3374;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3321;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t3371;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t3370;
// System.Configuration.ProviderSettings
struct ProviderSettings_t3373;

// System.Void System.Configuration.ProtectedConfigurationSection::.cctor()
extern "C" void ProtectedConfigurationSection__cctor_m12057 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProviderSettingsCollection System.Configuration.ProtectedConfigurationSection::get_Providers()
extern "C" ProviderSettingsCollection_t3374 * ProtectedConfigurationSection_get_Providers_m12058 (ProtectedConfigurationSection_t3372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3321 * ProtectedConfigurationSection_get_Properties_m12059 (ProtectedConfigurationSection_t3372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::GetAllProviders()
extern "C" ProtectedConfigurationProviderCollection_t3371 * ProtectedConfigurationSection_GetAllProviders_m12060 (ProtectedConfigurationSection_t3372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationSection::InstantiateProvider(System.Configuration.ProviderSettings)
extern "C" ProtectedConfigurationProvider_t3370 * ProtectedConfigurationSection_InstantiateProvider_m12061 (ProtectedConfigurationSection_t3372 * __this, ProviderSettings_t3373 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
