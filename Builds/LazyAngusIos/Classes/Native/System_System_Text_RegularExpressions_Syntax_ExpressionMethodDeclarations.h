﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t4155;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t4190;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t4173;

// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
extern "C" void Expression__ctor_m14881 (Expression_t4155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&)
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
extern "C" int32_t Expression_GetFixedWidth_m14882 (Expression_t4155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t4173 * Expression_GetAnchorInfo_m14883 (Expression_t4155 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex()
