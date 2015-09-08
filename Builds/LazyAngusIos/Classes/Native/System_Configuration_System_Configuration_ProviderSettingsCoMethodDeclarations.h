#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t3367;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3314;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3318;
// System.Object
struct Object_t;

// System.Void System.Configuration.ProviderSettingsCollection::.cctor()
extern "C" void ProviderSettingsCollection__cctor_m12015 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ProviderSettingsCollection::CreateNewElement()
extern "C" ConfigurationElement_t3318 * ProviderSettingsCollection_CreateNewElement_m12016 (ProviderSettingsCollection_t3367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ProviderSettingsCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C" Object_t * ProviderSettingsCollection_GetElementKey_m12017 (ProviderSettingsCollection_t3367 * __this, ConfigurationElement_t3318 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettingsCollection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3314 * ProviderSettingsCollection_get_Properties_m12018 (ProviderSettingsCollection_t3367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
