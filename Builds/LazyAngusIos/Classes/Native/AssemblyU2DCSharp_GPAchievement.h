#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// GPAchievementType
#include "AssemblyU2DCSharp_GPAchievementType.h"
// GPAchievementState
#include "AssemblyU2DCSharp_GPAchievementState.h"
// GPAchievement
struct  GPAchievement_t178  : public Object_t
{
	// System.String GPAchievement::_id
	String_t* ____id_0;
	// System.String GPAchievement::_name
	String_t* ____name_1;
	// System.String GPAchievement::_description
	String_t* ____description_2;
	// System.Int32 GPAchievement::_currentSteps
	int32_t ____currentSteps_3;
	// System.Int32 GPAchievement::_totalSteps
	int32_t ____totalSteps_4;
	// GPAchievementType GPAchievement::_type
	int32_t ____type_5;
	// GPAchievementState GPAchievement::_state
	int32_t ____state_6;
};
