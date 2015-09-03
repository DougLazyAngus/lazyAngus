﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.SectionInformation
struct SectionInformation_t3334;
// System.String
struct String_t;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3336;
// System.Configuration.ConfigurationAllowDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow.h"
// System.Configuration.ConfigurationAllowExeDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow_0.h"

// System.Void System.Configuration.SectionInformation::.ctor()
extern "C" void SectionInformation__ctor_m12033 (SectionInformation_t3334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.SectionInformation::get_ConfigFilePath()
extern "C" String_t* SectionInformation_get_ConfigFilePath_m12034 (SectionInformation_t3334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_ConfigFilePath(System.String)
extern "C" void SectionInformation_set_ConfigFilePath_m12035 (SectionInformation_t3334 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_AllowDefinition(System.Configuration.ConfigurationAllowDefinition)
extern "C" void SectionInformation_set_AllowDefinition_m12036 (SectionInformation_t3334 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_AllowExeDefinition(System.Configuration.ConfigurationAllowExeDefinition)
extern "C" void SectionInformation_set_AllowExeDefinition_m12037 (SectionInformation_t3334 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_AllowLocation(System.Boolean)
extern "C" void SectionInformation_set_AllowLocation_m12038 (SectionInformation_t3334 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.SectionInformation::get_ConfigSource()
extern "C" String_t* SectionInformation_get_ConfigSource_m12039 (SectionInformation_t3334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_ConfigSource(System.String)
extern "C" void SectionInformation_set_ConfigSource_m12040 (SectionInformation_t3334 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_RequirePermission(System.Boolean)
extern "C" void SectionInformation_set_RequirePermission_m12041 (SectionInformation_t3334 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_RestartOnExternalChanges(System.Boolean)
extern "C" void SectionInformation_set_RestartOnExternalChanges_m12042 (SectionInformation_t3334 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.SectionInformation::GetParentSection()
extern "C" ConfigurationSection_t3336 * SectionInformation_GetParentSection_m12043 (SectionInformation_t3334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::SetParentSection(System.Configuration.ConfigurationSection)
extern "C" void SectionInformation_SetParentSection_m12044 (SectionInformation_t3334 * __this, ConfigurationSection_t3336 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::ProtectSection(System.String)
extern "C" void SectionInformation_ProtectSection_m12045 (SectionInformation_t3334 * __this, String_t* ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::SetRawXml(System.String)
extern "C" void SectionInformation_SetRawXml_m12046 (SectionInformation_t3334 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::SetName(System.String)
extern "C" void SectionInformation_SetName_m12047 (SectionInformation_t3334 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;