#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// GP_SnapshotMeta
struct  GP_SnapshotMeta_t257  : public Object_t
{
	// System.String GP_SnapshotMeta::Title
	String_t* ___Title_0;
	// System.String GP_SnapshotMeta::Description
	String_t* ___Description_1;
	// System.String GP_SnapshotMeta::CoverImageUrl
	String_t* ___CoverImageUrl_2;
	// System.Int64 GP_SnapshotMeta::LastModifiedTimestamp
	int64_t ___LastModifiedTimestamp_3;
	// System.Int64 GP_SnapshotMeta::TotalPlayedTime
	int64_t ___TotalPlayedTime_4;
};
