#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3229;
// System.IO.TextReader
struct TextReader_t3187;
// System.Text.Encoding
struct Encoding_t690;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t4151  : public Object_t
{
};
struct Console_t4151_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t3229 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t3229 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t3187 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t690 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t690 * ___outputEncoding_4;
};
