#pragma once
#include <stdint.h>
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t4286;
// System.Object
#include "mscorlib_System_Object.h"
// System.Diagnostics.TraceImplSettings
struct  TraceImplSettings_t4283  : public Object_t
{
	// System.Boolean System.Diagnostics.TraceImplSettings::AutoFlush
	bool ___AutoFlush_0;
	// System.Int32 System.Diagnostics.TraceImplSettings::IndentLevel
	int32_t ___IndentLevel_1;
	// System.Int32 System.Diagnostics.TraceImplSettings::IndentSize
	int32_t ___IndentSize_2;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImplSettings::Listeners
	TraceListenerCollection_t4286 * ___Listeners_3;
};
