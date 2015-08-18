#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t4165;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t4158;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t4163;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t4164;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t4189;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m14902 (CaptureAssertion_t4165 * __this, Literal_t4164 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m14903 (CaptureAssertion_t4165 * __this, CapturingGroup_t4158 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m14904 (CaptureAssertion_t4165 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m14905 (CaptureAssertion_t4165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t4163 * CaptureAssertion_get_Alternate_m14906 (CaptureAssertion_t4165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
