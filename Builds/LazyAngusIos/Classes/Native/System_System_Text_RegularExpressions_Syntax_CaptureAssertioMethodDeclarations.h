#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t4110;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t4103;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t4108;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t4109;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t4134;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m14577 (CaptureAssertion_t4110 * __this, Literal_t4109 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m14578 (CaptureAssertion_t4110 * __this, CapturingGroup_t4103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m14579 (CaptureAssertion_t4110 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m14580 (CaptureAssertion_t4110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t4108 * CaptureAssertion_get_Alternate_m14581 (CaptureAssertion_t4110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
