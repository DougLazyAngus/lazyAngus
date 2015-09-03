#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.IgnoreSection
struct IgnoreSection_t3350;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Xml.XmlReader
struct XmlReader_t3368;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;
// System.String
struct String_t;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.IgnoreSection::.ctor()
extern "C" void IgnoreSection__ctor_m11929 (IgnoreSection_t3350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::.cctor()
extern "C" void IgnoreSection__cctor_m11930 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.IgnoreSection::IsModified()
extern "C" bool IgnoreSection_IsModified_m11931 (IgnoreSection_t3350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void IgnoreSection_DeserializeSection_m11932 (IgnoreSection_t3350 * __this, XmlReader_t3368 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::Reset(System.Configuration.ConfigurationElement)
extern "C" void IgnoreSection_Reset_m11933 (IgnoreSection_t3350 * __this, ConfigurationElement_t3314 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::ResetModified()
extern "C" void IgnoreSection_ResetModified_m11934 (IgnoreSection_t3350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.IgnoreSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* IgnoreSection_SerializeSection_m11935 (IgnoreSection_t3350 * __this, ConfigurationElement_t3314 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.IgnoreSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3310 * IgnoreSection_get_Properties_m11936 (IgnoreSection_t3350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
