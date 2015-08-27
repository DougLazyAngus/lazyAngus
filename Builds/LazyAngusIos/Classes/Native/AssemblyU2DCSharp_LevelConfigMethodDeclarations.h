﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LevelConfig
struct LevelConfig_t588;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t576;
// LevelDescription
struct LevelDescription_t582;
// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t585;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// MouseSinkController/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseSinkController_MouseHoleLocation.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
// LevelDescription/WaveType
#include "AssemblyU2DCSharp_LevelDescription_WaveType.h"

// System.Void LevelConfig::.ctor()
extern "C" void LevelConfig__ctor_m3093 (LevelConfig_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelConfig LevelConfig::get_instance()
extern "C" LevelConfig_t588 * LevelConfig_get_instance_m3094 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::set_instance(LevelConfig)
extern "C" void LevelConfig_set_instance_m3095 (Object_t * __this /* static, unused */, LevelConfig_t588 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::Awake()
extern "C" void LevelConfig_Awake_m3096 (LevelConfig_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::Start()
extern "C" void LevelConfig_Start_m3097 (LevelConfig_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::LoadSprites()
extern "C" void LevelConfig_LoadSprites_m3098 (LevelConfig_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::GenerateLevelLockInfo()
extern "C" void LevelConfig_GenerateLevelLockInfo_m3099 (LevelConfig_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelConfig::GetLevelLockInfoForBoost(BoostConfig/BoostType)
extern "C" int32_t LevelConfig_GetLevelLockInfoForBoost_m3100 (LevelConfig_t588 * __this, int32_t ___bt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelConfig::GetLevelLock(BoostConfig/BoostType)
extern "C" int32_t LevelConfig_GetLevelLock_m3101 (LevelConfig_t588 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::AddExplicitMouseDesc(System.Collections.Generic.List`1<ExplicitMouseDesc>&,System.Single,System.Boolean,MouseSinkController/MouseHoleLocation,MouseConfig/MouseType,System.Int32,MouseConfig/MouseWiggleType)
extern "C" void LevelConfig_AddExplicitMouseDesc_m3102 (LevelConfig_t588 * __this, List_1_t576 ** ___retVal, float ___delayToNextMouse, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::GetCurrentLevelDescription()
extern "C" LevelDescription_t582 * LevelConfig_GetCurrentLevelDescription_m3103 (LevelConfig_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::GetLevelDescription(System.Int32)
extern "C" LevelDescription_t582 * LevelConfig_GetLevelDescription_m3104 (LevelConfig_t588 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::GeneratePresetLevels()
extern "C" void LevelConfig_GeneratePresetLevels_m3105 (LevelConfig_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::AddPreviousLevelClearedAchievements()
extern "C" void LevelConfig_AddPreviousLevelClearedAchievements_m3106 (LevelConfig_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::FillOutPresetGameLevelSkeletons()
extern "C" void LevelConfig_FillOutPresetGameLevelSkeletons_m3107 (LevelConfig_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::SetupInitialAccumulators(LevelDescription)
extern "C" void LevelConfig_SetupInitialAccumulators_m3108 (LevelConfig_t588 * __this, LevelDescription_t582 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::MakePresetGameLevelSkeleton(System.Int32)
extern "C" LevelDescription_t582 * LevelConfig_MakePresetGameLevelSkeleton_m3109 (LevelConfig_t588 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::GenerateRandomLevelDescription(System.Int32)
extern "C" LevelDescription_t582 * LevelConfig_GenerateRandomLevelDescription_m3110 (LevelConfig_t588 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::GenerateRandomWigglesForLevel(LevelDescription)
extern "C" void LevelConfig_GenerateRandomWigglesForLevel_m3111 (LevelConfig_t588 * __this, LevelDescription_t582 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateRandomMiceForLevel(LevelDescription)
extern "C" List_1_t576 * LevelConfig_GenerateRandomMiceForLevel_m3112 (LevelConfig_t588 * __this, LevelDescription_t582 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateWaveForLevel(LevelDescription/WaveType,QuasiRandomGenerator`1<System.Int32>,LevelDescription)
extern "C" List_1_t576 * LevelConfig_GenerateWaveForLevel_m3113 (LevelConfig_t588 * __this, int32_t ___wt, QuasiRandomGenerator_1_t585 * ___mouseTypeGenerator, LevelDescription_t582 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateDistributedWave(QuasiRandomGenerator`1<System.Int32>)
extern "C" List_1_t576 * LevelConfig_GenerateDistributedWave_m3114 (LevelConfig_t588 * __this, QuasiRandomGenerator_1_t585 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateParadeWave(QuasiRandomGenerator`1<System.Int32>)
extern "C" List_1_t576 * LevelConfig_GenerateParadeWave_m3115 (LevelConfig_t588 * __this, QuasiRandomGenerator_1_t585 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateSpoutWave(QuasiRandomGenerator`1<System.Int32>)
extern "C" List_1_t576 * LevelConfig_GenerateSpoutWave_m3116 (LevelConfig_t588 * __this, QuasiRandomGenerator_1_t585 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::MakeQuasiRandomGenerators()
extern "C" void LevelConfig_MakeQuasiRandomGenerators_m3117 (LevelConfig_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
