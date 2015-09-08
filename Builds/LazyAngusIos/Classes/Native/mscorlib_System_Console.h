#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3562;
// System.IO.TextReader
struct TextReader_t3376;
// System.Text.Encoding
struct Encoding_t757;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t4857;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t4856;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t4581  : public Object_t
{
};
struct Console_t4581_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t3562 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t3562 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t3376 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t757 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t757 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t4857 * ___cancel_event_5;
	// System.Console/InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t4856 * ___cancel_handler_6;
};
