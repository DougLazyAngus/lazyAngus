#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t2156;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2147;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2184;

// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
extern "C" void ExpressionAssertion__ctor_m11362 (ExpressionAssertion_t2156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
extern "C" void ExpressionAssertion_set_Reverse_m11363 (ExpressionAssertion_t2156 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
extern "C" void ExpressionAssertion_set_Negate_m11364 (ExpressionAssertion_t2156 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
extern "C" Expression_t2147 * ExpressionAssertion_get_TestExpression_m11365 (ExpressionAssertion_t2156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void ExpressionAssertion_set_TestExpression_m11366 (ExpressionAssertion_t2156 * __this, Expression_t2147 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void ExpressionAssertion_Compile_m11367 (ExpressionAssertion_t2156 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
extern "C" bool ExpressionAssertion_IsComplex_m11368 (ExpressionAssertion_t2156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
