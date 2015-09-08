#pragma once
#include <stdint.h>
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t4218;
// System.String
struct String_t;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Diagnostics.TraceOptions
#include "System_System_Diagnostics_TraceOptions.h"
// System.Diagnostics.TraceListener
struct  TraceListener_t4281  : public MarshalByRefObject_t4289
{
	// System.Int32 System.Diagnostics.TraceListener::indentLevel
	int32_t ___indentLevel_1;
	// System.Int32 System.Diagnostics.TraceListener::indentSize
	int32_t ___indentSize_2;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceListener::attributes
	StringDictionary_t4218 * ___attributes_3;
	// System.Diagnostics.TraceOptions System.Diagnostics.TraceListener::options
	int32_t ___options_4;
	// System.String System.Diagnostics.TraceListener::name
	String_t* ___name_5;
	// System.Boolean System.Diagnostics.TraceListener::needIndent
	bool ___needIndent_6;
};
