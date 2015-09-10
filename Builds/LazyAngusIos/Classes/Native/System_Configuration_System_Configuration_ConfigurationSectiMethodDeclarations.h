#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3347;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t3346;
// System.Configuration.SectionInformation
struct SectionInformation_t3345;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3325;
// System.Type
struct Type_t;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.String
struct String_t;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.ConfigurationSection::.ctor()
extern "C" void ConfigurationSection__ctor_m11934 (ConfigurationSection_t3347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::get_SectionHandler()
extern "C" Object_t * ConfigurationSection_get_SectionHandler_m11935 (ConfigurationSection_t3347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::set_SectionHandler(System.Configuration.IConfigurationSectionHandler)
extern "C" void ConfigurationSection_set_SectionHandler_m11936 (ConfigurationSection_t3347 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::get_SectionInformation()
extern "C" SectionInformation_t3345 * ConfigurationSection_get_SectionInformation_m11937 (ConfigurationSection_t3347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationSection::get_ConfigContext()
extern "C" Object_t * ConfigurationSection_get_ConfigContext_m11938 (ConfigurationSection_t3347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::set_ConfigContext(System.Object)
extern "C" void ConfigurationSection_set_ConfigContext_m11939 (ConfigurationSection_t3347 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationSection::GetRuntimeObject()
extern "C" Object_t * ConfigurationSection_GetRuntimeObject_m11940 (ConfigurationSection_t3347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationSection::IsModified()
extern "C" bool ConfigurationSection_IsModified_m11941 (ConfigurationSection_t3347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::ResetModified()
extern "C" void ConfigurationSection_ResetModified_m11942 (ConfigurationSection_t3347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationSection::CreateElement(System.Type)
extern "C" ConfigurationElement_t3325 * ConfigurationSection_CreateElement_m11943 (ConfigurationSection_t3347 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DoDeserializeSection(System.Xml.XmlReader)
extern "C" void ConfigurationSection_DoDeserializeSection_m11944 (ConfigurationSection_t3347 * __this, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void ConfigurationSection_DeserializeSection_m11945 (ConfigurationSection_t3347 * __this, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DeserializeConfigSource(System.String)
extern "C" void ConfigurationSection_DeserializeConfigSource_m11946 (ConfigurationSection_t3347 * __this, String_t* ___basePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* ConfigurationSection_SerializeSection_m11947 (ConfigurationSection_t3347 * __this, ConfigurationElement_t3325 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
