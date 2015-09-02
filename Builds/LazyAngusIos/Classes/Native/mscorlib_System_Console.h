#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3294;
// System.IO.TextReader
struct TextReader_t3252;
// System.Text.Encoding
struct Encoding_t753;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t4214  : public Object_t
{
};
struct Console_t4214_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t3294 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t3294 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t3252 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t753 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t753 * ___outputEncoding_4;
};
