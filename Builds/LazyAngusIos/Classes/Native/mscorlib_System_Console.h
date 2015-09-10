#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t3569;
// System.IO.TextReader
struct TextReader_t3383;
// System.Text.Encoding
struct Encoding_t764;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t4864;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t4863;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t4588  : public Object_t
{
};
struct Console_t4588_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t3569 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t3569 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t3383 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t764 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t764 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t4864 * ___cancel_event_5;
	// System.Console/InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t4863 * ___cancel_handler_6;
};
