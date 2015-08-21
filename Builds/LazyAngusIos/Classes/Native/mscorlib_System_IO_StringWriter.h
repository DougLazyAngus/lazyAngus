#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StringWriter
struct  StringWriter_t3276  : public TextWriter_t3275
{
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t261 * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;
};
