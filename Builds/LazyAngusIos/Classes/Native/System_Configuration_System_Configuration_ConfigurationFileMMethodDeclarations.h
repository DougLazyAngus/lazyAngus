﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationFileMap
struct ConfigurationFileMap_t3320;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Configuration.ConfigurationFileMap::.ctor()
extern "C" void ConfigurationFileMap__ctor_m11803 (ConfigurationFileMap_t3320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationFileMap::.ctor(System.String)
extern "C" void ConfigurationFileMap__ctor_m11804 (ConfigurationFileMap_t3320 * __this, String_t* ___machineConfigFilename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationFileMap::get_MachineConfigFilename()
extern "C" String_t* ConfigurationFileMap_get_MachineConfigFilename_m11805 (ConfigurationFileMap_t3320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationFileMap::set_MachineConfigFilename(System.String)
extern "C" void ConfigurationFileMap_set_MachineConfigFilename_m11806 (ConfigurationFileMap_t3320 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationFileMap::Clone()
extern "C" Object_t * ConfigurationFileMap_Clone_m11807 (ConfigurationFileMap_t3320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;