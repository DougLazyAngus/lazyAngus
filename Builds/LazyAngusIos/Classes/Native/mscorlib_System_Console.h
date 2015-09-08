#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3559;
// System.IO.TextReader
struct TextReader_t3373;
// System.Text.Encoding
struct Encoding_t754;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t4854;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t4853;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t4578  : public Object_t
{
};
struct Console_t4578_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t3559 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t3559 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t3373 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t754 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t754 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t4854 * ___cancel_event_5;
	// System.Console/InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t4853 * ___cancel_handler_6;
};
