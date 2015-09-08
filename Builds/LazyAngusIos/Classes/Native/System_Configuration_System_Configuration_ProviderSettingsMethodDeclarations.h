#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProviderSettings
struct ProviderSettings_t3363;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3311;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3300;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3315;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.ProviderSettings::.ctor()
extern "C" void ProviderSettings__ctor_m12005 (ProviderSettings_t3363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::.cctor()
extern "C" void ProviderSettings__cctor_m12006 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C" bool ProviderSettings_OnDeserializeUnrecognizedAttribute_m12007 (ProviderSettings_t3363 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::IsModified()
extern "C" bool ProviderSettings_IsModified_m12008 (ProviderSettings_t3363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Reset(System.Configuration.ConfigurationElement)
extern "C" void ProviderSettings_Reset_m12009 (ProviderSettings_t3363 * __this, ConfigurationElement_t3315 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C" void ProviderSettings_Unmerge_m12010 (ProviderSettings_t3363 * __this, ConfigurationElement_t3315 * ___source, ConfigurationElement_t3315 * ___parent, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Name()
extern "C" String_t* ProviderSettings_get_Name_m12011 (ProviderSettings_t3363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Type()
extern "C" String_t* ProviderSettings_get_Type_m12012 (ProviderSettings_t3363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::get_Properties()
extern "C" ConfigurationPropertyCollection_t3311 * ProviderSettings_get_Properties_m12013 (ProviderSettings_t3363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Configuration.ProviderSettings::get_Parameters()
extern "C" NameValueCollection_t3300 * ProviderSettings_get_Parameters_m12014 (ProviderSettings_t3363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
