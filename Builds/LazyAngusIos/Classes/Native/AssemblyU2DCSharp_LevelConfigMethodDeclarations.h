#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LevelConfig
struct LevelConfig_t496;
// System.Collections.Generic.List`1<ExplicitMouseDesc>
struct List_1_t483;
// LevelDescription
struct LevelDescription_t489;
// QuasiRandomGenerator`1<System.Int32>
struct QuasiRandomGenerator_1_t492;
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseConfig/MouseWiggleType
#include "AssemblyU2DCSharp_MouseConfig_MouseWiggleType.h"
// LevelDescription/WaveType
#include "AssemblyU2DCSharp_LevelDescription_WaveType.h"

// System.Void LevelConfig::.ctor()
extern "C" void LevelConfig__ctor_m2559 (LevelConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelConfig LevelConfig::get_instance()
extern "C" LevelConfig_t496 * LevelConfig_get_instance_m2560 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::set_instance(LevelConfig)
extern "C" void LevelConfig_set_instance_m2561 (Object_t * __this /* static, unused */, LevelConfig_t496 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::Awake()
extern "C" void LevelConfig_Awake_m2562 (LevelConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::Start()
extern "C" void LevelConfig_Start_m2563 (LevelConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::GenerateLevelLockInfo()
extern "C" void LevelConfig_GenerateLevelLockInfo_m2564 (LevelConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelConfig::GetLevelLockInfoForBoost(BoostConfig/BoostType)
extern "C" int32_t LevelConfig_GetLevelLockInfoForBoost_m2565 (LevelConfig_t496 * __this, int32_t ___bt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelConfig::GetLevelLock(BoostConfig/BoostType)
extern "C" int32_t LevelConfig_GetLevelLock_m2566 (LevelConfig_t496 * __this, int32_t ___bType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::AddExplicitMouseDesc(System.Collections.Generic.List`1<ExplicitMouseDesc>&,System.Single,System.Boolean,MouseHole/MouseHoleLocation,MouseConfig/MouseType,System.Int32,MouseConfig/MouseWiggleType)
extern "C" void LevelConfig_AddExplicitMouseDesc_m2567 (LevelConfig_t496 * __this, List_1_t483 ** ___retVal, float ___pause, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::GetCurrentLevelDescription()
extern "C" LevelDescription_t489 * LevelConfig_GetCurrentLevelDescription_m2568 (LevelConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::GetLevelDescription(System.Int32)
extern "C" LevelDescription_t489 * LevelConfig_GetLevelDescription_m2569 (LevelConfig_t496 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::GeneratePresetLevels()
extern "C" void LevelConfig_GeneratePresetLevels_m2570 (LevelConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::AddPreviousLevelClearedAchievements()
extern "C" void LevelConfig_AddPreviousLevelClearedAchievements_m2571 (LevelConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::FillOutPresetGameLevelSkeletons()
extern "C" void LevelConfig_FillOutPresetGameLevelSkeletons_m2572 (LevelConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::SetupInitialAccumulators(LevelDescription)
extern "C" void LevelConfig_SetupInitialAccumulators_m2573 (LevelConfig_t496 * __this, LevelDescription_t489 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::MakePresetGameLevelSkeleton(System.Int32)
extern "C" LevelDescription_t489 * LevelConfig_MakePresetGameLevelSkeleton_m2574 (LevelConfig_t496 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LevelDescription LevelConfig::GenerateRandomLevelDescription(System.Int32)
extern "C" LevelDescription_t489 * LevelConfig_GenerateRandomLevelDescription_m2575 (LevelConfig_t496 * __this, int32_t ___gameLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::GenerateRandomWigglesForLevel(LevelDescription)
extern "C" void LevelConfig_GenerateRandomWigglesForLevel_m2576 (LevelConfig_t496 * __this, LevelDescription_t489 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateRandomMiceForLevel(LevelDescription)
extern "C" List_1_t483 * LevelConfig_GenerateRandomMiceForLevel_m2577 (LevelConfig_t496 * __this, LevelDescription_t489 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateWaveForLevel(LevelDescription/WaveType,QuasiRandomGenerator`1<System.Int32>,LevelDescription)
extern "C" List_1_t483 * LevelConfig_GenerateWaveForLevel_m2578 (LevelConfig_t496 * __this, int32_t ___wt, QuasiRandomGenerator_1_t492 * ___mouseTypeGenerator, LevelDescription_t489 * ___ld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateDistributedWave(QuasiRandomGenerator`1<System.Int32>)
extern "C" List_1_t483 * LevelConfig_GenerateDistributedWave_m2579 (LevelConfig_t496 * __this, QuasiRandomGenerator_1_t492 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateParadeWave(QuasiRandomGenerator`1<System.Int32>)
extern "C" List_1_t483 * LevelConfig_GenerateParadeWave_m2580 (LevelConfig_t496 * __this, QuasiRandomGenerator_1_t492 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ExplicitMouseDesc> LevelConfig::GenerateSpoutWave(QuasiRandomGenerator`1<System.Int32>)
extern "C" List_1_t483 * LevelConfig_GenerateSpoutWave_m2581 (LevelConfig_t496 * __this, QuasiRandomGenerator_1_t492 * ___mouseTypeGenerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelConfig::MakeQuasiRandomGenerators()
extern "C" void LevelConfig_MakeQuasiRandomGenerators_m2582 (LevelConfig_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
