#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.SectionInfo
struct SectionInfo_t3375;
// System.Object
struct Object_t;
// System.Configuration.Configuration
struct Configuration_t3307;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Configuration.ConfigInfo
struct ConfigInfo_t3311;

// System.Void System.Configuration.SectionInfo::.ctor()
extern "C" void SectionInfo__ctor_m12076 (SectionInfo_t3375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.SectionInfo::CreateInstance()
extern "C" Object_t * SectionInfo_CreateInstance_m12077 (SectionInfo_t3375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C" void SectionInfo_ReadConfig_m12078 (SectionInfo_t3375 * __this, Configuration_t3307 * ___cfg, String_t* ___streamName, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C" void SectionInfo_ReadData_m12079 (SectionInfo_t3375 * __this, Configuration_t3307 * ___config, XmlReader_t3379 * ___reader, bool ___overrideAllowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::Merge(System.Configuration.ConfigInfo)
extern "C" void SectionInfo_Merge_m12080 (SectionInfo_t3375 * __this, ConfigInfo_t3311 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
