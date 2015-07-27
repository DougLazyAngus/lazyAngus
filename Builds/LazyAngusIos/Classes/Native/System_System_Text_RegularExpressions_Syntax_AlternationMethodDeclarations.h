#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Alternation
struct Alternation_t2159;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t2146;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2147;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2184;

// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
extern "C" void Alternation__ctor_m11369 (Alternation_t2159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
extern "C" ExpressionCollection_t2146 * Alternation_get_Alternatives_m11370 (Alternation_t2159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Alternation_AddAlternative_m11371 (Alternation_t2159 * __this, Expression_t2147 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Alternation_Compile_m11372 (Alternation_t2159 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
extern "C" void Alternation_GetWidth_m11373 (Alternation_t2159 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
