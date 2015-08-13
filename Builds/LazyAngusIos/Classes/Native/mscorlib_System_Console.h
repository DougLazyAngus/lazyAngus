#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3277;
// System.IO.TextReader
struct TextReader_t3235;
// System.Text.Encoding
struct Encoding_t739;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t4197  : public Object_t
{
};
struct Console_t4197_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t3277 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t3277 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t3235 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t739 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t739 * ___outputEncoding_4;
};
