﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Reference
struct Reference_t1689;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1679;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1724;

// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
extern "C" void Reference__ctor_m8545 (Reference_t1689 * __this, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
extern "C" CapturingGroup_t1679 * Reference_get_CapturingGroup_m8546 (Reference_t1689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void Reference_set_CapturingGroup_m8547 (Reference_t1689 * __this, CapturingGroup_t1679 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
extern "C" bool Reference_get_IgnoreCase_m8548 (Reference_t1689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Reference_Compile_m8549 (Reference_t1689 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
extern "C" void Reference_GetWidth_m8550 (Reference_t1689 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
extern "C" bool Reference_IsComplex_m8551 (Reference_t1689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
