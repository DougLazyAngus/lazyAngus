#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3219;
// System.IO.TextReader
struct TextReader_t3177;
// System.Text.Encoding
struct Encoding_t681;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t4141  : public Object_t
{
};
struct Console_t4141_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t3219 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t3219 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t3177 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t681 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t681 * ___outputEncoding_4;
};
