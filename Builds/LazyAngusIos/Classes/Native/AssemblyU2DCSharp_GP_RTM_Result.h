#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// GP_GamesStatusCodes
#include "AssemblyU2DCSharp_GP_GamesStatusCodes.h"
// GP_RTM_Result
struct  GP_RTM_Result_t188  : public Object_t
{
	// GP_GamesStatusCodes GP_RTM_Result::_status
	int32_t ____status_0;
	// System.String GP_RTM_Result::_roomId
	String_t* ____roomId_1;
};
