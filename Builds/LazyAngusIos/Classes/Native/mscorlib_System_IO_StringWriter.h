#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StringWriter
struct  StringWriter_t3381  : public TextWriter_t3558
{
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t261 * ___internalString_4;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_5;
};
