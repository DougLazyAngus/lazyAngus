#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.DefaultSection
struct DefaultSection_t3349;
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

// System.Void System.Configuration.DefaultSection::.ctor()
extern "C" void DefaultSection__ctor_m11920 (DefaultSection_t3349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::.cctor()
extern "C" void DefaultSection__cctor_m11921 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void DefaultSection_DeserializeSection_m11922 (DefaultSection_t3349 * __this, XmlReader_t3372 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DefaultSection::IsModified()
extern "C" bool DefaultSection_IsModified_m11923 (DefaultSection_t3349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::Reset(System.Configuration.ConfigurationElement)
extern "C" void DefaultSection_Reset_m11924 (DefaultSection_t3349 * __this, ConfigurationElement_t3318 * ___parentSection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::ResetModified()
extern "C" void DefaultSection_ResetModified_m11925 (DefaultSection_t3349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.DefaultSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* DefaultSection_SerializeSection_m11926 (DefaultSection_t3349 * __this, ConfigurationElement_t3318 * ___parentSection, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.DefaultSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3314 * DefaultSection_get_Properties_m11927 (DefaultSection_t3349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
