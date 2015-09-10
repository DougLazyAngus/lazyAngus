#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.Configuration
struct Configuration_t3307;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t3312;
// System.String
struct String_t;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t3314;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t3313;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t3351;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3348;
// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t3363;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t3316;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3347;
// System.Configuration.SectionInfo
struct SectionInfo_t3375;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3315;
// System.Xml.XmlReader
struct XmlReader_t3379;

// System.Void System.Configuration.Configuration::.ctor(System.Configuration.Configuration,System.String)
extern "C" void Configuration__ctor_m11739 (Configuration_t3307 * __this, Configuration_t3307 * ___parent, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::.ctor(System.Configuration.InternalConfigurationSystem,System.String)
extern "C" void Configuration__ctor_m11740 (Configuration_t3307 * __this, InternalConfigurationSystem_t3363 * ___system, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::FindLocationConfiguration(System.String,System.Configuration.Configuration)
extern "C" Configuration_t3307 * Configuration_FindLocationConfiguration_m11741 (Configuration_t3307 * __this, String_t* ___relativePath, Configuration_t3307 * ___defaultConfiguration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Init(System.Configuration.Internal.IConfigSystem,System.String,System.Configuration.Configuration)
extern "C" void Configuration_Init_m11742 (Configuration_t3307 * __this, Object_t * ___system, String_t* ___configPath, Configuration_t3307 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::get_Parent()
extern "C" Configuration_t3307 * Configuration_get_Parent_m11743 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::set_Parent(System.Configuration.Configuration)
extern "C" void Configuration_set_Parent_m11744 (Configuration_t3307 * __this, Configuration_t3307 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::GetParentWithFile()
extern "C" Configuration_t3307 * Configuration_GetParentWithFile_m11745 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.Configuration::get_ConfigHost()
extern "C" Object_t * Configuration_get_ConfigHost_m11746 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_LocationConfigPath()
extern "C" String_t* Configuration_get_LocationConfigPath_m11747 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_ConfigPath()
extern "C" String_t* Configuration_get_ConfigPath_m11748 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_FilePath()
extern "C" String_t* Configuration_get_FilePath_m11749 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::get_HasFile()
extern "C" bool Configuration_get_HasFile_m11750 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::get_Locations()
extern "C" ConfigurationLocationCollection_t3314 * Configuration_get_Locations_m11751 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::get_RootSectionGroup()
extern "C" ConfigurationSectionGroup_t3313 * Configuration_get_RootSectionGroup_m11752 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.Configuration::get_SectionGroups()
extern "C" ConfigurationSectionGroupCollection_t3351 * Configuration_get_SectionGroups_m11753 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.Configuration::get_Sections()
extern "C" ConfigurationSectionCollection_t3348 * Configuration_get_Sections_m11754 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSection(System.String)
extern "C" ConfigurationSection_t3347 * Configuration_GetSection_m11755 (Configuration_t3307 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSectionInstance(System.Configuration.SectionInfo,System.Boolean)
extern "C" ConfigurationSection_t3347 * Configuration_GetSectionInstance_m11756 (Configuration_t3307 * __this, SectionInfo_t3375 * ___config, bool ___createDefaultInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroupInstance(System.Configuration.SectionGroupInfo)
extern "C" ConfigurationSectionGroup_t3313 * Configuration_GetSectionGroupInstance_m11757 (Configuration_t3307 * __this, SectionGroupInfo_t3315 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SetSectionXml(System.Configuration.SectionInfo,System.String)
extern "C" void Configuration_SetSectionXml_m11758 (Configuration_t3307 * __this, SectionInfo_t3375 * ___config, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::GetSectionXml(System.Configuration.SectionInfo)
extern "C" String_t* Configuration_GetSectionXml_m11759 (Configuration_t3307 * __this, SectionInfo_t3375 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::Load()
extern "C" bool Configuration_Load_m11760 (Configuration_t3307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadConfigFile(System.Xml.XmlReader,System.String)
extern "C" void Configuration_ReadConfigFile_m11761 (Configuration_t3307 * __this, XmlReader_t3379 * ___reader, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadData(System.Xml.XmlReader,System.Boolean)
extern "C" void Configuration_ReadData_m11762 (Configuration_t3307 * __this, XmlReader_t3379 * ___reader, bool ___allowOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ThrowException(System.String,System.Xml.XmlReader)
extern "C" void Configuration_ThrowException_m11763 (Configuration_t3307 * __this, String_t* ___text, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
