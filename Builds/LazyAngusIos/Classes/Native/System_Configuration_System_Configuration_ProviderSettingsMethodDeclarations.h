#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProviderSettings
struct ProviderSettings_t3373;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3321;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3310;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3325;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.ProviderSettings::.ctor()
extern "C" void ProviderSettings__ctor_m12062 (ProviderSettings_t3373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::.cctor()
extern "C" void ProviderSettings__cctor_m12063 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C" bool ProviderSettings_OnDeserializeUnrecognizedAttribute_m12064 (ProviderSettings_t3373 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::IsModified()
extern "C" bool ProviderSettings_IsModified_m12065 (ProviderSettings_t3373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Reset(System.Configuration.ConfigurationElement)
extern "C" void ProviderSettings_Reset_m12066 (ProviderSettings_t3373 * __this, ConfigurationElement_t3325 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C" void ProviderSettings_Unmerge_m12067 (ProviderSettings_t3373 * __this, ConfigurationElement_t3325 * ___source, ConfigurationElement_t3325 * ___parent, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Name()
extern "C" String_t* ProviderSettings_get_Name_m12068 (ProviderSettings_t3373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Type()
extern "C" String_t* ProviderSettings_get_Type_m12069 (ProviderSettings_t3373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::get_Properties()
extern "C" ConfigurationPropertyCollection_t3321 * ProviderSettings_get_Properties_m12070 (ProviderSettings_t3373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Configuration.ProviderSettings::get_Parameters()
extern "C" NameValueCollection_t3310 * ProviderSettings_get_Parameters_m12071 (ProviderSettings_t3373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
