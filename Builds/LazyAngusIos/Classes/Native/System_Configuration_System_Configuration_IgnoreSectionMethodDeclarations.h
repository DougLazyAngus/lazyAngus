#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.IgnoreSection
struct IgnoreSection_t3361;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3321;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3325;
// System.String
struct String_t;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.IgnoreSection::.ctor()
extern "C" void IgnoreSection__ctor_m11999 (IgnoreSection_t3361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::.cctor()
extern "C" void IgnoreSection__cctor_m12000 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.IgnoreSection::IsModified()
extern "C" bool IgnoreSection_IsModified_m12001 (IgnoreSection_t3361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void IgnoreSection_DeserializeSection_m12002 (IgnoreSection_t3361 * __this, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::Reset(System.Configuration.ConfigurationElement)
extern "C" void IgnoreSection_Reset_m12003 (IgnoreSection_t3361 * __this, ConfigurationElement_t3325 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::ResetModified()
extern "C" void IgnoreSection_ResetModified_m12004 (IgnoreSection_t3361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.IgnoreSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* IgnoreSection_SerializeSection_m12005 (IgnoreSection_t3361 * __this, ConfigurationElement_t3325 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.IgnoreSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3321 * IgnoreSection_get_Properties_m12006 (IgnoreSection_t3361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
