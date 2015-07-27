#pragma once
#include <stdint.h>
// System.Text.StringBuilder
struct StringBuilder_t221;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.StringWriter
struct  StringWriter_t1677  : public TextWriter_t1676
{
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t221 * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;
};
