#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t4287;
// System.Object
#include "mscorlib_System_Object.h"
// System.Diagnostics.SourceLevels
#include "System_System_Diagnostics_SourceLevels.h"
// System.Diagnostics.TraceSourceInfo
struct  TraceSourceInfo_t4291  : public Object_t
{
	// System.String System.Diagnostics.TraceSourceInfo::name
	String_t* ___name_0;
	// System.Diagnostics.SourceLevels System.Diagnostics.TraceSourceInfo::levels
	int32_t ___levels_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::listeners
	TraceListenerCollection_t4287 * ___listeners_2;
};
