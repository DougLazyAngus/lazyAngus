#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t3374;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3321;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3325;
// System.Object
struct Object_t;

// System.Void System.Configuration.ProviderSettingsCollection::.cctor()
extern "C" void ProviderSettingsCollection__cctor_m12072 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ProviderSettingsCollection::CreateNewElement()
extern "C" ConfigurationElement_t3325 * ProviderSettingsCollection_CreateNewElement_m12073 (ProviderSettingsCollection_t3374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ProviderSettingsCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C" Object_t * ProviderSettingsCollection_GetElementKey_m12074 (ProviderSettingsCollection_t3374 * __this, ConfigurationElement_t3325 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettingsCollection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3321 * ProviderSettingsCollection_get_Properties_m12075 (ProviderSettingsCollection_t3374 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
