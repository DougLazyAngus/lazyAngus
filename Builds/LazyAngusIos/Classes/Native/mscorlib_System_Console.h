#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t1700;
// System.IO.TextReader
struct TextReader_t2012;
// System.Text.Encoding
struct Encoding_t531;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t1693  : public Object_t
{
};
struct Console_t1693_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1700 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1700 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t2012 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t531 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t531 * ___outputEncoding_4;
};
