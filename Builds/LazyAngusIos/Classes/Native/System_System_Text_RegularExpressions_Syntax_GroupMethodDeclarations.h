#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Group
struct Group_t2149;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2147;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2184;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t2165;

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C" void Group__ctor_m11321 (Group_t2149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Group_AppendExpression_m11322 (Group_t2149 * __this, Expression_t2147 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Group_Compile_m11323 (Group_t2149 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern "C" void Group_GetWidth_m11324 (Group_t2149 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t2165 * Group_GetAnchorInfo_m11325 (Group_t2149 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
