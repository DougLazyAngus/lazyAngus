#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationLocation
struct ConfigurationLocation_t3332;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t3307;

// System.Void System.Configuration.ConfigurationLocation::.ctor(System.String,System.String,System.Configuration.Configuration,System.Boolean)
extern "C" void ConfigurationLocation__ctor_m11878 (ConfigurationLocation_t3332 * __this, String_t* ___path, String_t* ___xmlContent, Configuration_t3307 * ___parent, bool ___allowOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::.cctor()
extern "C" void ConfigurationLocation__cctor_m11879 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationLocation::get_Path()
extern "C" String_t* ConfigurationLocation_get_Path_m11880 (ConfigurationLocation_t3332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationLocation::OpenConfiguration()
extern "C" Configuration_t3307 * ConfigurationLocation_OpenConfiguration_m11881 (ConfigurationLocation_t3332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::SetParentConfiguration(System.Configuration.Configuration)
extern "C" void ConfigurationLocation_SetParentConfiguration_m11882 (ConfigurationLocation_t3332 * __this, Configuration_t3307 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
