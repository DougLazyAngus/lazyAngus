#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t1755;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t2426  : public TextWriter_t1755
{
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t1755 * ___writer_3;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_4;
};
