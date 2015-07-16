#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<GP_Participant>
struct List_1_t162;
// System.Object
#include "mscorlib_System_Object.h"
// GP_RTM_RoomStatus
#include "AssemblyU2DCSharp_GP_RTM_RoomStatus.h"
// GP_RTM_Room
struct  GP_RTM_Room_t163  : public Object_t
{
	// System.String GP_RTM_Room::id
	String_t* ___id_0;
	// System.String GP_RTM_Room::creatorId
	String_t* ___creatorId_1;
	// GP_RTM_RoomStatus GP_RTM_Room::status
	int32_t ___status_2;
	// System.Int64 GP_RTM_Room::creationTimestamp
	int64_t ___creationTimestamp_3;
	// System.Collections.Generic.List`1<GP_Participant> GP_RTM_Room::participants
	List_1_t162 * ___participants_4;
};
