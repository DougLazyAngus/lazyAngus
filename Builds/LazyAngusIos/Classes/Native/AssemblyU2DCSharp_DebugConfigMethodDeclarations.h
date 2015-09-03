#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DebugConfig
struct DebugConfig_t533;

// System.Void DebugConfig::.ctor()
extern "C" void DebugConfig__ctor_m2879 (DebugConfig_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DebugConfig DebugConfig::get_instance()
extern "C" DebugConfig_t533 * DebugConfig_get_instance_m2880 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugConfig::set_instance(DebugConfig)
extern "C" void DebugConfig_set_instance_m2881 (Object_t * __this /* static, unused */, DebugConfig_t533 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugConfig::Awake()
extern "C" void DebugConfig_Awake_m2882 (DebugConfig_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugConfig::Start()
extern "C" void DebugConfig_Start_m2883 (DebugConfig_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DebugConfig::IsDebugFlagSet(System.Int32)
extern "C" bool DebugConfig_IsDebugFlagSet_m2884 (DebugConfig_t533 * __this, int32_t ___debugFlag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugConfig::SetDebugFlags(System.Int32)
extern "C" void DebugConfig_SetDebugFlags_m2885 (DebugConfig_t533 * __this, int32_t ___debugFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
