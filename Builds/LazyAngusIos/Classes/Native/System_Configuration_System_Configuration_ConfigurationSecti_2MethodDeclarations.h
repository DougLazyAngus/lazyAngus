#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t3302;
// System.Configuration.Configuration
struct Configuration_t3296;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t3340;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3337;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3304;

// System.Void System.Configuration.ConfigurationSectionGroup::.ctor()
extern "C" void ConfigurationSectionGroup__ctor_m11890 (ConfigurationSectionGroup_t3302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::get_Config()
extern "C" Configuration_t3296 * ConfigurationSectionGroup_get_Config_m11891 (ConfigurationSectionGroup_t3302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::Initialize(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C" void ConfigurationSectionGroup_Initialize_m11892 (ConfigurationSectionGroup_t3302 * __this, Configuration_t3296 * ___config, SectionGroupInfo_t3304 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::get_SectionGroups()
extern "C" ConfigurationSectionGroupCollection_t3340 * ConfigurationSectionGroup_get_SectionGroups_m11893 (ConfigurationSectionGroup_t3302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::get_Sections()
extern "C" ConfigurationSectionCollection_t3337 * ConfigurationSectionGroup_get_Sections_m11894 (ConfigurationSectionGroup_t3302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
