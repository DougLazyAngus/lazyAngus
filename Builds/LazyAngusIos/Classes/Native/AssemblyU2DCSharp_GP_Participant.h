#pragma once
#include <stdint.h>
// System.String
struct String_t;
// GP_ParticipantResult
struct GP_ParticipantResult_t186;
// System.Object
#include "mscorlib_System_Object.h"
// GP_RTM_ParticipantStatus
#include "AssemblyU2DCSharp_GP_RTM_ParticipantStatus.h"
// GP_Participant
struct  GP_Participant_t184  : public Object_t
{
	// System.String GP_Participant::_id
	String_t* ____id_0;
	// System.String GP_Participant::_playerid
	String_t* ____playerid_1;
	// System.String GP_Participant::_HiResImageUrl
	String_t* ____HiResImageUrl_2;
	// System.String GP_Participant::_IconImageUrl
	String_t* ____IconImageUrl_3;
	// System.String GP_Participant::_DisplayName
	String_t* ____DisplayName_4;
	// GP_ParticipantResult GP_Participant::_result
	GP_ParticipantResult_t186 * ____result_5;
	// GP_RTM_ParticipantStatus GP_Participant::_status
	int32_t ____status_6;
};
