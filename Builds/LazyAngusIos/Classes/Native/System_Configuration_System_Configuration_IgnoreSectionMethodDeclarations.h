#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.IgnoreSection
struct IgnoreSection_t3354;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3314;
// System.Xml.XmlReader
struct XmlReader_t3372;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3318;
// System.String
struct String_t;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.IgnoreSection::.ctor()
extern "C" void IgnoreSection__ctor_m11942 (IgnoreSection_t3354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::.cctor()
extern "C" void IgnoreSection__cctor_m11943 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.IgnoreSection::IsModified()
extern "C" bool IgnoreSection_IsModified_m11944 (IgnoreSection_t3354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void IgnoreSection_DeserializeSection_m11945 (IgnoreSection_t3354 * __this, XmlReader_t3372 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::Reset(System.Configuration.ConfigurationElement)
extern "C" void IgnoreSection_Reset_m11946 (IgnoreSection_t3354 * __this, ConfigurationElement_t3318 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::ResetModified()
extern "C" void IgnoreSection_ResetModified_m11947 (IgnoreSection_t3354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.IgnoreSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* IgnoreSection_SerializeSection_m11948 (IgnoreSection_t3354 * __this, ConfigurationElement_t3318 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.IgnoreSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3314 * IgnoreSection_get_Properties_m11949 (IgnoreSection_t3354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
