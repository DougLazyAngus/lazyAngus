#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t4121;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t4114;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t4119;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t4120;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t4145;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m14655 (CaptureAssertion_t4121 * __this, Literal_t4120 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m14656 (CaptureAssertion_t4121 * __this, CapturingGroup_t4114 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m14657 (CaptureAssertion_t4121 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m14658 (CaptureAssertion_t4121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t4119 * CaptureAssertion_get_Alternate_m14659 (CaptureAssertion_t4121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
