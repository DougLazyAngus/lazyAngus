#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LevelConfig
struct LevelConfig_t594;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t582;
// LevelDescription
struct LevelDescription_t588;
// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t591;
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
extern "C" void LevelConfig__ctor_m3127 (LevelConfig_t594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelConfig LevelConfig::get_instance()
extern "C" LevelConfig_t594 * LevelConfig_get_instance_m3128 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::set_instance(LevelConfig)
extern "C" void LevelConfig_set_instance_m3129 (Object_t * __this /* static, unused */, LevelConfig_t594 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::Awake()
extern "C" void LevelConfig_Awake_m3130 (LevelConfig_t594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::Start()
extern "C" void LevelConfig_Start_m3131 (LevelConfig_t594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::LoadSprites()
extern "C" void LevelConfig_LoadSprites_m3132 (LevelConfig_t594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::GenerateLevelLockInfo()
extern "C" void LevelConfig_GenerateLevelLockInfo_m3133 (LevelConfig_t594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelConfig::GetLevelLockInfoForBoost(BoostConfig/BoostType)
extern "C" int32_t LevelConfig_GetLevelLockInfoForBoost_m3134 (LevelConfig_t594 * __this, int32_t ___bt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelConfig::GetLevelLock(BoostConfig/BoostType)
extern "C" int32_t LevelConfig_GetLevelLock_m3135 (LevelConfig_t594 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::AddExplicitMouseDesc(System.Collections.Generic.List`1<ExplicitMouseDesc>&,System.Single,System.Boolean,MouseSinkController/MouseHoleLocation,MouseConfig/MouseType,System.Int32,MouseConfig/MouseWiggleType)
extern "C" void LevelConfig_AddExplicitMouseDesc_m3136 (LevelConfig_t594 * __this, List_1_t582 ** ___retVal, float ___delayToNextMouse, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::GetCurrentLevelDescription()
extern "C" LevelDescription_t588 * LevelConfig_GetCurrentLevelDescription_m3137 (LevelConfig_t594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::GetLevelDescription(System.Int32)
extern "C" LevelDescription_t588 * LevelConfig_GetLevelDescription_m3138 (LevelConfig_t594 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::GeneratePresetLevels()
extern "C" void LevelConfig_GeneratePresetLevels_m3139 (LevelConfig_t594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::AddPreviousLevelClearedAchievements()
extern "C" void LevelConfig_AddPreviousLevelClearedAchievements_m3140 (LevelConfig_t594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::FillOutPresetGameLevelSkeletons()
extern "C" void LevelConfig_FillOutPresetGameLevelSkeletons_m3141 (LevelConfig_t594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::SetupInitialAccumulators(LevelDescription)
extern "C" void LevelConfig_SetupInitialAccumulators_m3142 (LevelConfig_t594 * __this, LevelDescription_t588 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::MakePresetGameLevelSkeleton(System.Int32)
extern "C" LevelDescription_t588 * LevelConfig_MakePresetGameLevelSkeleton_m3143 (LevelConfig_t594 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::GenerateRandomLevelDescription(System.Int32)
extern "C" LevelDescription_t588 * LevelConfig_GenerateRandomLevelDescription_m3144 (LevelConfig_t594 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::GenerateRandomWigglesForLevel(LevelDescription)
extern "C" void LevelConfig_GenerateRandomWigglesForLevel_m3145 (LevelConfig_t594 * __this, LevelDescription_t588 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateRandomMiceForLevel(LevelDescription)
extern "C" List_1_t582 * LevelConfig_GenerateRandomMiceForLevel_m3146 (LevelConfig_t594 * __this, LevelDescription_t588 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateWaveForLevel(LevelDescription/WaveType,QuasiRandomGenerator`1<System.Int32>,LevelDescription)
extern "C" List_1_t582 * LevelConfig_GenerateWaveForLevel_m3147 (LevelConfig_t594 * __this, int32_t ___wt, QuasiRandomGenerator_1_t591 * ___mouseTypeGenerator, LevelDescription_t588 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateDistributedWave(QuasiRandomGenerator`1<System.Int32>)
extern "C" List_1_t582 * LevelConfig_GenerateDistributedWave_m3148 (LevelConfig_t594 * __this, QuasiRandomGenerator_1_t591 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateParadeWave(QuasiRandomGenerator`1<System.Int32>)
extern "C" List_1_t582 * LevelConfig_GenerateParadeWave_m3149 (LevelConfig_t594 * __this, QuasiRandomGenerator_1_t591 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateSpoutWave(QuasiRandomGenerator`1<System.Int32>)
extern "C" List_1_t582 * LevelConfig_GenerateSpoutWave_m3150 (LevelConfig_t594 * __this, QuasiRandomGenerator_1_t591 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::MakeQuasiRandomGenerators()
extern "C" void LevelConfig_MakeQuasiRandomGenerators_m3151 (LevelConfig_t594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelConfig::LevelForRealAngusUnlocks(System.Int32)
extern "C" int32_t LevelConfig_LevelForRealAngusUnlocks_m3152 (LevelConfig_t594 * __this, int32_t ___numUnlocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
