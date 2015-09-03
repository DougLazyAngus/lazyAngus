#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t3361;
// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t3363;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t3360;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t3359;
// System.Configuration.ProviderSettings
struct ProviderSettings_t3362;

// System.Void System.Configuration.ProtectedConfigurationSection::.cctor()
extern "C" void ProtectedConfigurationSection__cctor_m11987 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProviderSettingsCollection System.Configuration.ProtectedConfigurationSection::get_Providers()
extern "C" ProviderSettingsCollection_t3363 * ProtectedConfigurationSection_get_Providers_m11988 (ProtectedConfigurationSection_t3361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3310 * ProtectedConfigurationSection_get_Properties_m11989 (ProtectedConfigurationSection_t3361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::GetAllProviders()
extern "C" ProtectedConfigurationProviderCollection_t3360 * ProtectedConfigurationSection_GetAllProviders_m11990 (ProtectedConfigurationSection_t3361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationSection::InstantiateProvider(System.Configuration.ProviderSettings)
extern "C" ProtectedConfigurationProvider_t3359 * ProtectedConfigurationSection_InstantiateProvider_m11991 (ProtectedConfigurationSection_t3361 * __this, ProviderSettings_t3362 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
