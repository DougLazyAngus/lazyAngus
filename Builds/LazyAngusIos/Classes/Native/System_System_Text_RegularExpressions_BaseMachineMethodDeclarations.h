#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t4471;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t805;
// System.String[]
struct StringU5BU5D_t75;
// System.Text.RegularExpressions.Match
struct Match_t1395;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t4470;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1200;

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C" void BaseMachine__ctor_m17427 (BaseMachine_t4471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_Replace_m17428 (BaseMachine_t4471 * __this, Regex_t805 * ___regex, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.BaseMachine::Split(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" StringU5BU5D_t75* BaseMachine_Split_m17429 (BaseMachine_t4471 * __this, Regex_t805 * ___regex, String_t* ___input, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t1395 * BaseMachine_Scan_m17430 (BaseMachine_t4471 * __this, Regex_t805 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_LTRReplace_m17431 (BaseMachine_t4471 * __this, Regex_t805 * ___regex, String_t* ___input, MatchAppendEvaluator_t4470 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
extern "C" String_t* BaseMachine_LTRReplace_m17432 (BaseMachine_t4471 * __this, Regex_t805 * ___regex, String_t* ___input, MatchAppendEvaluator_t4470 * ___evaluator, int32_t ___count, int32_t ___startat, bool ___needs_groups_or_captures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_RTLReplace_m17433 (BaseMachine_t4471 * __this, Regex_t805 * ___regex, String_t* ___input, MatchEvaluator_t1200 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
