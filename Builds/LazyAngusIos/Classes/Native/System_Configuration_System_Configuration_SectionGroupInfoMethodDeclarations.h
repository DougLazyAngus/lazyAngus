#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3304;
// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t3365;
// System.Configuration.ConfigInfo
struct ConfigInfo_t3300;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t3296;
// System.Xml.XmlReader
struct XmlReader_t3368;

// System.Void System.Configuration.SectionGroupInfo::.ctor()
extern "C" void SectionGroupInfo__ctor_m12011 (SectionGroupInfo_t3304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::.cctor()
extern "C" void SectionGroupInfo__cctor_m12012 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::AddChild(System.Configuration.ConfigInfo)
extern "C" void SectionGroupInfo_AddChild_m12013 (SectionGroupInfo_t3304 * __this, ConfigInfo_t3300 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::Clear()
extern "C" void SectionGroupInfo_Clear_m12014 (SectionGroupInfo_t3304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.SectionGroupInfo::HasChild(System.String)
extern "C" bool SectionGroupInfo_HasChild_m12015 (SectionGroupInfo_t3304 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::RemoveChild(System.String)
extern "C" void SectionGroupInfo_RemoveChild_m12016 (SectionGroupInfo_t3304 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Sections()
extern "C" ConfigInfoCollection_t3365 * SectionGroupInfo_get_Sections_m12017 (SectionGroupInfo_t3304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Groups()
extern "C" ConfigInfoCollection_t3365 * SectionGroupInfo_get_Groups_m12018 (SectionGroupInfo_t3304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C" void SectionGroupInfo_ReadConfig_m12019 (SectionGroupInfo_t3304 * __this, Configuration_t3296 * ___cfg, String_t* ___streamName, XmlReader_t3368 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadRemoveSection(System.Xml.XmlReader)
extern "C" void SectionGroupInfo_ReadRemoveSection_m12020 (SectionGroupInfo_t3304 * __this, XmlReader_t3368 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadRootData(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean)
extern "C" void SectionGroupInfo_ReadRootData_m12021 (SectionGroupInfo_t3304 * __this, XmlReader_t3368 * ___reader, Configuration_t3296 * ___config, bool ___overrideAllowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C" void SectionGroupInfo_ReadData_m12022 (SectionGroupInfo_t3304 * __this, Configuration_t3296 * ___config, XmlReader_t3368 * ___reader, bool ___overrideAllowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::ReadContent(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean,System.Boolean)
extern "C" void SectionGroupInfo_ReadContent_m12023 (SectionGroupInfo_t3304 * __this, XmlReader_t3368 * ___reader, Configuration_t3296 * ___config, bool ___overrideAllowed, bool ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfo System.Configuration.SectionGroupInfo::GetConfigInfo(System.Xml.XmlReader,System.Configuration.SectionGroupInfo)
extern "C" ConfigInfo_t3300 * SectionGroupInfo_GetConfigInfo_m12024 (SectionGroupInfo_t3304 * __this, XmlReader_t3368 * ___reader, SectionGroupInfo_t3304 * ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionGroupInfo::Merge(System.Configuration.ConfigInfo)
extern "C" void SectionGroupInfo_Merge_m12025 (SectionGroupInfo_t3304 * __this, ConfigInfo_t3300 * ___newData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
