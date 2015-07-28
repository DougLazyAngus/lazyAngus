#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.BackslashNumber
struct BackslashNumber_t4114;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1268;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t4134;

// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
extern "C" void BackslashNumber__ctor_m14612 (BackslashNumber_t4114 * __this, bool ___ignore, bool ___ecma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
extern "C" bool BackslashNumber_ResolveReference_m14613 (BackslashNumber_t4114 * __this, String_t* ___num_str, Hashtable_t1268 * ___groups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void BackslashNumber_Compile_m14614 (BackslashNumber_t4114 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
