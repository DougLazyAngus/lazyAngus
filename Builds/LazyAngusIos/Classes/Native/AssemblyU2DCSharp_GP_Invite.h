#pragma once
#include <stdint.h>
// System.String
struct String_t;
// GP_Participant
struct GP_Participant_t184;
// System.Object
#include "mscorlib_System_Object.h"
// GP_InvitationType
#include "AssemblyU2DCSharp_GP_InvitationType.h"
// GP_Invite
struct  GP_Invite_t185  : public Object_t
{
	// System.String GP_Invite::Id
	String_t* ___Id_0;
	// System.Int64 GP_Invite::CreationTimestamp
	int64_t ___CreationTimestamp_1;
	// GP_InvitationType GP_Invite::InvitationType
	int32_t ___InvitationType_2;
	// System.Int32 GP_Invite::Variant
	int32_t ___Variant_3;
	// GP_Participant GP_Invite::Participant
	GP_Participant_t184 * ___Participant_4;
};
