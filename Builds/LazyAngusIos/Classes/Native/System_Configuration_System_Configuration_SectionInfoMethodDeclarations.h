#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.SectionInfo
struct SectionInfo_t3365;
// System.Object
struct Object_t;
// System.Configuration.Configuration
struct Configuration_t3297;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t3369;
// System.Configuration.ConfigInfo
struct ConfigInfo_t3301;

// System.Void System.Configuration.SectionInfo::.ctor()
extern "C" void SectionInfo__ctor_m12019 (SectionInfo_t3365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.SectionInfo::CreateInstance()
extern "C" Object_t * SectionInfo_CreateInstance_m12020 (SectionInfo_t3365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C" void SectionInfo_ReadConfig_m12021 (SectionInfo_t3365 * __this, Configuration_t3297 * ___cfg, String_t* ___streamName, XmlReader_t3369 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C" void SectionInfo_ReadData_m12022 (SectionInfo_t3365 * __this, Configuration_t3297 * ___config, XmlReader_t3369 * ___reader, bool ___overrideAllowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::Merge(System.Configuration.ConfigInfo)
extern "C" void SectionInfo_Merge_m12023 (SectionInfo_t3365 * __this, ConfigInfo_t3301 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
