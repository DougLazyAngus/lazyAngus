#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t3313;
// System.Configuration.Configuration
struct Configuration_t3307;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t3351;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3348;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3315;

// System.Void System.Configuration.ConfigurationSectionGroup::.ctor()
extern "C" void ConfigurationSectionGroup__ctor_m11960 (ConfigurationSectionGroup_t3313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::get_Config()
extern "C" Configuration_t3307 * ConfigurationSectionGroup_get_Config_m11961 (ConfigurationSectionGroup_t3313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::Initialize(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C" void ConfigurationSectionGroup_Initialize_m11962 (ConfigurationSectionGroup_t3313 * __this, Configuration_t3307 * ___config, SectionGroupInfo_t3315 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::get_SectionGroups()
extern "C" ConfigurationSectionGroupCollection_t3351 * ConfigurationSectionGroup_get_SectionGroups_m11963 (ConfigurationSectionGroup_t3313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::get_Sections()
extern "C" ConfigurationSectionCollection_t3348 * ConfigurationSectionGroup_get_Sections_m11964 (ConfigurationSectionGroup_t3313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
