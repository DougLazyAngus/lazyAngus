#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3558;
// System.IO.TextReader
struct TextReader_t3372;
// System.Text.Encoding
struct Encoding_t753;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t4853;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t4852;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t4577  : public Object_t
{
};
struct Console_t4577_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t3558 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t3558 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t3372 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t753 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t753 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t4853 * ___cancel_event_5;
	// System.Console/InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t4852 * ___cancel_handler_6;
};
