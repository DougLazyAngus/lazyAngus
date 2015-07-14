#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Collections.Generic.List`1<GP_Participant>
struct List_1_t162;
// System.Object
#include "mscorlib_System_Object.h"
// GP_TBM_MatchStatus
#include "AssemblyU2DCSharp_GP_TBM_MatchStatus.h"
// GP_TBM_MatchTurnStatus
#include "AssemblyU2DCSharp_GP_TBM_MatchTurnStatus.h"
// GP_TBM_Match
struct  GP_TBM_Match_t179  : public Object_t
{
	// System.String GP_TBM_Match::Id
	String_t* ___Id_0;
	// System.String GP_TBM_Match::RematchId
	String_t* ___RematchId_1;
	// System.String GP_TBM_Match::CreatorId
	String_t* ___CreatorId_2;
	// System.String GP_TBM_Match::LastUpdaterId
	String_t* ___LastUpdaterId_3;
	// System.String GP_TBM_Match::PendingParticipantId
	String_t* ___PendingParticipantId_4;
	// System.Int32 GP_TBM_Match::MatchNumber
	int32_t ___MatchNumber_5;
	// System.String GP_TBM_Match::Description
	String_t* ___Description_6;
	// System.Int32 GP_TBM_Match::AvailableAutoMatchSlots
	int32_t ___AvailableAutoMatchSlots_7;
	// System.Int64 GP_TBM_Match::CreationTimestamp
	int64_t ___CreationTimestamp_8;
	// System.Int64 GP_TBM_Match::LastUpdatedTimestamp
	int64_t ___LastUpdatedTimestamp_9;
	// GP_TBM_MatchStatus GP_TBM_Match::Status
	int32_t ___Status_10;
	// GP_TBM_MatchTurnStatus GP_TBM_Match::TurnStatus
	int32_t ___TurnStatus_11;
	// System.Boolean GP_TBM_Match::CanRematch
	bool ___CanRematch_12;
	// System.Int32 GP_TBM_Match::Variant
	int32_t ___Variant_13;
	// System.Int32 GP_TBM_Match::Version
	int32_t ___Version_14;
	// System.Byte[] GP_TBM_Match::Data
	ByteU5BU5D_t36* ___Data_15;
	// System.Byte[] GP_TBM_Match::PreviousMatchData
	ByteU5BU5D_t36* ___PreviousMatchData_16;
	// System.Collections.Generic.List`1<GP_Participant> GP_TBM_Match::Participants
	List_1_t162 * ___Participants_17;
};
