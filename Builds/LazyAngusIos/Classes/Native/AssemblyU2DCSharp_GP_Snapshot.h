#pragma once
#include <stdint.h>
// GP_SnapshotMeta
struct GP_SnapshotMeta_t257;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// GP_Snapshot
struct  GP_Snapshot_t242  : public Object_t
{
	// GP_SnapshotMeta GP_Snapshot::meta
	GP_SnapshotMeta_t257 * ___meta_0;
	// System.Byte[] GP_Snapshot::bytes
	ByteU5BU5D_t66* ___bytes_1;
	// System.String GP_Snapshot::stringData
	String_t* ___stringData_2;
};
