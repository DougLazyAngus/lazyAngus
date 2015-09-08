#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t4514;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t4499;
// System.Text.RegularExpressions.RxInterpreter/RepeatContext
struct RepeatContext_t4513;
// System.Text.RegularExpressions.BaseMachine
#include "System_System_Text_RegularExpressions_BaseMachine.h"
// System.Text.RegularExpressions.RxInterpreter/IntStack
#include "System_System_Text_RegularExpressions_RxInterpreter_IntStack.h"
// System.Text.RegularExpressions.RxInterpreter
struct  RxInterpreter_t4515  : public BaseMachine_t4471
{
	// System.Byte[] System.Text.RegularExpressions.RxInterpreter::program
	ByteU5BU5D_t66* ___program_1;
	// System.String System.Text.RegularExpressions.RxInterpreter::str
	String_t* ___str_2;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::string_start
	int32_t ___string_start_3;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::string_end
	int32_t ___string_end_4;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::group_count
	int32_t ___group_count_5;
	// System.Int32[] System.Text.RegularExpressions.RxInterpreter::groups
	Int32U5BU5D_t484* ___groups_6;
	// System.Text.RegularExpressions.EvalDelegate System.Text.RegularExpressions.RxInterpreter::eval_del
	EvalDelegate_t4514 * ___eval_del_7;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.RxInterpreter::marks
	MarkU5BU5D_t4499* ___marks_8;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::mark_start
	int32_t ___mark_start_9;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::mark_end
	int32_t ___mark_end_10;
	// System.Text.RegularExpressions.RxInterpreter/IntStack System.Text.RegularExpressions.RxInterpreter::stack
	IntStack_t4512  ___stack_11;
	// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter::repeat
	RepeatContext_t4513 * ___repeat_12;
	// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter::deep
	RepeatContext_t4513 * ___deep_13;
};
struct RxInterpreter_t4515_StaticFields{
	// System.Boolean System.Text.RegularExpressions.RxInterpreter::trace_rx
	bool ___trace_rx_14;
};
