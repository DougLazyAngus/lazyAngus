#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.Configuration
struct Configuration_t3297;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t3302;
// System.String
struct String_t;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t3304;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t3303;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t3341;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3338;
// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t3353;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t3306;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3337;
// System.Configuration.SectionInfo
struct SectionInfo_t3365;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3305;
// System.Xml.XmlReader
struct XmlReader_t3369;

// System.Void System.Configuration.Configuration::.ctor(System.Configuration.Configuration,System.String)
extern "C" void Configuration__ctor_m11682 (Configuration_t3297 * __this, Configuration_t3297 * ___parent, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::.ctor(System.Configuration.InternalConfigurationSystem,System.String)
extern "C" void Configuration__ctor_m11683 (Configuration_t3297 * __this, InternalConfigurationSystem_t3353 * ___system, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::FindLocationConfiguration(System.String,System.Configuration.Configuration)
extern "C" Configuration_t3297 * Configuration_FindLocationConfiguration_m11684 (Configuration_t3297 * __this, String_t* ___relativePath, Configuration_t3297 * ___defaultConfiguration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Init(System.Configuration.Internal.IConfigSystem,System.String,System.Configuration.Configuration)
extern "C" void Configuration_Init_m11685 (Configuration_t3297 * __this, Object_t * ___system, String_t* ___configPath, Configuration_t3297 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::get_Parent()
extern "C" Configuration_t3297 * Configuration_get_Parent_m11686 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::set_Parent(System.Configuration.Configuration)
extern "C" void Configuration_set_Parent_m11687 (Configuration_t3297 * __this, Configuration_t3297 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::GetParentWithFile()
extern "C" Configuration_t3297 * Configuration_GetParentWithFile_m11688 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.Configuration::get_ConfigHost()
extern "C" Object_t * Configuration_get_ConfigHost_m11689 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_LocationConfigPath()
extern "C" String_t* Configuration_get_LocationConfigPath_m11690 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_ConfigPath()
extern "C" String_t* Configuration_get_ConfigPath_m11691 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_FilePath()
extern "C" String_t* Configuration_get_FilePath_m11692 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::get_HasFile()
extern "C" bool Configuration_get_HasFile_m11693 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::get_Locations()
extern "C" ConfigurationLocationCollection_t3304 * Configuration_get_Locations_m11694 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::get_RootSectionGroup()
extern "C" ConfigurationSectionGroup_t3303 * Configuration_get_RootSectionGroup_m11695 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.Configuration::get_SectionGroups()
extern "C" ConfigurationSectionGroupCollection_t3341 * Configuration_get_SectionGroups_m11696 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.Configuration::get_Sections()
extern "C" ConfigurationSectionCollection_t3338 * Configuration_get_Sections_m11697 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSection(System.String)
extern "C" ConfigurationSection_t3337 * Configuration_GetSection_m11698 (Configuration_t3297 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSectionInstance(System.Configuration.SectionInfo,System.Boolean)
extern "C" ConfigurationSection_t3337 * Configuration_GetSectionInstance_m11699 (Configuration_t3297 * __this, SectionInfo_t3365 * ___config, bool ___createDefaultInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroupInstance(System.Configuration.SectionGroupInfo)
extern "C" ConfigurationSectionGroup_t3303 * Configuration_GetSectionGroupInstance_m11700 (Configuration_t3297 * __this, SectionGroupInfo_t3305 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SetSectionXml(System.Configuration.SectionInfo,System.String)
extern "C" void Configuration_SetSectionXml_m11701 (Configuration_t3297 * __this, SectionInfo_t3365 * ___config, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::GetSectionXml(System.Configuration.SectionInfo)
extern "C" String_t* Configuration_GetSectionXml_m11702 (Configuration_t3297 * __this, SectionInfo_t3365 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::Load()
extern "C" bool Configuration_Load_m11703 (Configuration_t3297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadConfigFile(System.Xml.XmlReader,System.String)
extern "C" void Configuration_ReadConfigFile_m11704 (Configuration_t3297 * __this, XmlReader_t3369 * ___reader, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadData(System.Xml.XmlReader,System.Boolean)
extern "C" void Configuration_ReadData_m11705 (Configuration_t3297 * __this, XmlReader_t3369 * ___reader, bool ___allowOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ThrowException(System.String,System.Xml.XmlReader)
extern "C" void Configuration_ThrowException_m11706 (Configuration_t3297 * __this, String_t* ___text, XmlReader_t3369 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
