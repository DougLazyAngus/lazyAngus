#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3231;
// System.IO.TextReader
struct TextReader_t3189;
// System.Text.Encoding
struct Encoding_t692;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t4153  : public Object_t
{
};
struct Console_t4153_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t3231 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t3231 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t3189 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t692 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t692 * ___outputEncoding_4;
};
