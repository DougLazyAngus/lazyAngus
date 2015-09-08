#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProtectedConfiguration
struct ProtectedConfiguration_t3362;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t3364;
// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t3365;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t3363;
// System.String
struct String_t;

// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfiguration::get_Providers()
extern "C" ProtectedConfigurationProviderCollection_t3364 * ProtectedConfiguration_get_Providers_m11994 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationSection System.Configuration.ProtectedConfiguration::get_Section()
extern "C" ProtectedConfigurationSection_t3365 * ProtectedConfiguration_get_Section_m11995 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfiguration::GetProvider(System.String,System.Boolean)
extern "C" ProtectedConfigurationProvider_t3363 * ProtectedConfiguration_GetProvider_m11996 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
