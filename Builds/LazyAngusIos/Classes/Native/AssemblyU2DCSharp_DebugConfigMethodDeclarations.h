#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DebugConfig
struct DebugConfig_t658;

// System.Void DebugConfig::.ctor()
extern "C" void DebugConfig__ctor_m3589 (DebugConfig_t658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DebugConfig DebugConfig::get_instance()
extern "C" DebugConfig_t658 * DebugConfig_get_instance_m3590 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugConfig::set_instance(DebugConfig)
extern "C" void DebugConfig_set_instance_m3591 (Object_t * __this /* static, unused */, DebugConfig_t658 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugConfig::Awake()
extern "C" void DebugConfig_Awake_m3592 (DebugConfig_t658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugConfig::Start()
extern "C" void DebugConfig_Start_m3593 (DebugConfig_t658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DebugConfig::IsDebugFlagSet(System.Int32)
extern "C" bool DebugConfig_IsDebugFlagSet_m3594 (DebugConfig_t658 * __this, int32_t ___debugFlag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DebugConfig::SetDebugFlags(System.Int32)
extern "C" void DebugConfig_SetDebugFlags_m3595 (DebugConfig_t658 * __this, int32_t ___debugFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DebugConfig::GetDebugFlags()
extern "C" int32_t DebugConfig_GetDebugFlags_m3596 (DebugConfig_t658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
