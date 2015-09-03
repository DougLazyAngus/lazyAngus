#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GPAchievement
struct GPAchievement_t220;
// System.String
struct String_t;
// GPAchievementType
#include "AssemblyU2DCSharp_GPAchievementType.h"
// GPAchievementState
#include "AssemblyU2DCSharp_GPAchievementState.h"

// System.Void GPAchievement::.ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" void GPAchievement__ctor_m1303 (GPAchievement_t220 * __this, String_t* ___aId, String_t* ___aName, String_t* ___aDescr, String_t* ___aCurentSteps, String_t* ___aTotalSteps, String_t* ___aState, String_t* ___aType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPAchievement::get_id()
extern "C" String_t* GPAchievement_get_id_m1304 (GPAchievement_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPAchievement::get_name()
extern "C" String_t* GPAchievement_get_name_m1305 (GPAchievement_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GPAchievement::get_description()
extern "C" String_t* GPAchievement_get_description_m1306 (GPAchievement_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GPAchievement::get_currentSteps()
extern "C" int32_t GPAchievement_get_currentSteps_m1307 (GPAchievement_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GPAchievement::get_totalSteps()
extern "C" int32_t GPAchievement_get_totalSteps_m1308 (GPAchievement_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPAchievementType GPAchievement::get_type()
extern "C" int32_t GPAchievement_get_type_m1309 (GPAchievement_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPAchievementState GPAchievement::get_state()
extern "C" int32_t GPAchievement_get_state_m1310 (GPAchievement_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
