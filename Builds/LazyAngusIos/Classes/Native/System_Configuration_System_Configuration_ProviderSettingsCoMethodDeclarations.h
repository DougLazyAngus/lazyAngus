#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t3363;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;
// System.Object
struct Object_t;

// System.Void System.Configuration.ProviderSettingsCollection::.cctor()
extern "C" void ProviderSettingsCollection__cctor_m12002 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ProviderSettingsCollection::CreateNewElement()
extern "C" ConfigurationElement_t3314 * ProviderSettingsCollection_CreateNewElement_m12003 (ProviderSettingsCollection_t3363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ProviderSettingsCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C" Object_t * ProviderSettingsCollection_GetElementKey_m12004 (ProviderSettingsCollection_t3363 * __this, ConfigurationElement_t3314 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettingsCollection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3310 * ProviderSettingsCollection_get_Properties_m12005 (ProviderSettingsCollection_t3363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
