#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LevelConfig
struct LevelConfig_t447;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t437;
// LevelDescription
struct LevelDescription_t439;
// LevelConfig/WaveType[]
struct WaveTypeU5BU5D_t446;
// MouseConfig/MouseType[]
struct MouseTypeU5BU5D_t522;
// System.Collections.Generic.List`1<LevelConfig/WaveType>
struct List_1_t523;
// QuasiRandomGenerator`1<MouseConfig/MouseType>
struct QuasiRandomGenerator_1_t524;
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// LevelConfig/WaveType
#include "AssemblyU2DCSharp_LevelConfig_WaveType.h"

// System.Void LevelConfig::.ctor()
extern "C" void LevelConfig__ctor_m2016 (LevelConfig_t447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelConfig LevelConfig::get_instance()
extern "C" LevelConfig_t447 * LevelConfig_get_instance_m2017 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::set_instance(LevelConfig)
extern "C" void LevelConfig_set_instance_m2018 (Object_t * __this /* static, unused */, LevelConfig_t447 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::Awake()
extern "C" void LevelConfig_Awake_m2019 (LevelConfig_t447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::Start()
extern "C" void LevelConfig_Start_m2020 (LevelConfig_t447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::AddExplicitMouseDesc(System.Collections.Generic.List`1<ExplicitMouseDesc>&,System.Single,System.Boolean,MouseHole/MouseHoleLocation,MouseConfig/MouseType,System.Int32)
extern "C" void LevelConfig_AddExplicitMouseDesc_m2021 (LevelConfig_t447 * __this, List_1_t437 ** ___retVal, float ___pause, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::GetCurrentLevelDescription()
extern "C" LevelDescription_t439 * LevelConfig_GetCurrentLevelDescription_m2022 (LevelConfig_t447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::GetLevelDescription(System.Int32)
extern "C" LevelDescription_t439 * LevelConfig_GetLevelDescription_m2023 (LevelConfig_t447 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::MakeLevelDescription(System.Int32)
extern "C" LevelDescription_t439 * LevelConfig_MakeLevelDescription_m2024 (LevelConfig_t447 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateMiceForLevel(System.Int32,System.Boolean)
extern "C" List_1_t437 * LevelConfig_GenerateMiceForLevel_m2025 (LevelConfig_t447 * __this, int32_t ___gameLevel, bool ___allowSuperSpeedy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelConfig/WaveType[] LevelConfig::GetWaveDistributionForLevel(System.Int32)
extern "C" WaveTypeU5BU5D_t446* LevelConfig_GetWaveDistributionForLevel_m2026 (LevelConfig_t447 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MouseConfig/MouseType[] LevelConfig::GetMouseDistributionForLevel(System.Int32,System.Boolean)
extern "C" MouseTypeU5BU5D_t522* LevelConfig_GetMouseDistributionForLevel_m2027 (LevelConfig_t447 * __this, int32_t ___gameLevel, bool ___allowSuperSpeedy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<LevelConfig/WaveType> LevelConfig::GetWaveTypesForLevel(System.Int32)
extern "C" List_1_t523 * LevelConfig_GetWaveTypesForLevel_m2028 (LevelConfig_t447 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateWaveForLevel(LevelConfig/WaveType,QuasiRandomGenerator`1<MouseConfig/MouseType>,System.Int32)
extern "C" List_1_t437 * LevelConfig_GenerateWaveForLevel_m2029 (LevelConfig_t447 * __this, int32_t ___wt, QuasiRandomGenerator_1_t524 * ___mouseTypeGenerator, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateDistributedWave(QuasiRandomGenerator`1<MouseConfig/MouseType>)
extern "C" List_1_t437 * LevelConfig_GenerateDistributedWave_m2030 (LevelConfig_t447 * __this, QuasiRandomGenerator_1_t524 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateParadeWave(QuasiRandomGenerator`1<MouseConfig/MouseType>)
extern "C" List_1_t437 * LevelConfig_GenerateParadeWave_m2031 (LevelConfig_t447 * __this, QuasiRandomGenerator_1_t524 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateSpoutWave(QuasiRandomGenerator`1<MouseConfig/MouseType>)
extern "C" List_1_t437 * LevelConfig_GenerateSpoutWave_m2032 (LevelConfig_t447 * __this, QuasiRandomGenerator_1_t524 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GetHandcraftedMiceForLevel(System.Int32)
extern "C" List_1_t437 * LevelConfig_GetHandcraftedMiceForLevel_m2033 (LevelConfig_t447 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::MakeQuasiRandomGenerators()
extern "C" void LevelConfig_MakeQuasiRandomGenerators_m2034 (LevelConfig_t447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
