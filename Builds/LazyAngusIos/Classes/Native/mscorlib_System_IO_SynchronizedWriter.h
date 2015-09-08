#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3562;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t5007  : public TextWriter_t3562
{
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t3562 * ___writer_4;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_5;
};
