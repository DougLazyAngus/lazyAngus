#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t192;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StringWriter
struct  StringWriter_t2053  : public TextWriter_t1700
{
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t192 * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;
};
