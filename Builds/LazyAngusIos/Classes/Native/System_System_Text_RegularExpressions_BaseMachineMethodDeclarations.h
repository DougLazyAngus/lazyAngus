#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t4116;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t787;
// System.String[]
struct StringU5BU5D_t75;
// System.Text.RegularExpressions.Match
struct Match_t1374;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t4115;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1179;

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C" void BaseMachine__ctor_m14582 (BaseMachine_t4116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_Replace_m14583 (BaseMachine_t4116 * __this, Regex_t787 * ___regex, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.BaseMachine::Split(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" StringU5BU5D_t75* BaseMachine_Split_m14584 (BaseMachine_t4116 * __this, Regex_t787 * ___regex, String_t* ___input, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t1374 * BaseMachine_Scan_m14585 (BaseMachine_t4116 * __this, Regex_t787 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_LTRReplace_m14586 (BaseMachine_t4116 * __this, Regex_t787 * ___regex, String_t* ___input, MatchAppendEvaluator_t4115 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
extern "C" String_t* BaseMachine_LTRReplace_m14587 (BaseMachine_t4116 * __this, Regex_t787 * ___regex, String_t* ___input, MatchAppendEvaluator_t4115 * ___evaluator, int32_t ___count, int32_t ___startat, bool ___needs_groups_or_captures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_RTLReplace_m14588 (BaseMachine_t4116 * __this, Regex_t787 * ___regex, String_t* ___input, MatchEvaluator_t1179 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
