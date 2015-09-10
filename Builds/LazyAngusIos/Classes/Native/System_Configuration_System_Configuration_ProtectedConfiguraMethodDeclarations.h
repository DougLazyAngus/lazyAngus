#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProtectedConfiguration
struct ProtectedConfiguration_t3369;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t3371;
// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t3372;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t3370;
// System.String
struct String_t;

// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfiguration::get_Providers()
extern "C" ProtectedConfigurationProviderCollection_t3371 * ProtectedConfiguration_get_Providers_m12051 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationSection System.Configuration.ProtectedConfiguration::get_Section()
extern "C" ProtectedConfigurationSection_t3372 * ProtectedConfiguration_get_Section_m12052 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfiguration::GetProvider(System.String,System.Boolean)
extern "C" ProtectedConfigurationProvider_t3370 * ProtectedConfiguration_GetProvider_m12053 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
