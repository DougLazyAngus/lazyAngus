#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeSpan/Parser
struct Parser_t4917;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan/Parser::.ctor(System.String)
extern "C" void Parser__ctor_m20756 (Parser_t4917 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::get_AtEnd()
extern "C" bool Parser_get_AtEnd_m20757 (Parser_t4917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseWhiteSpace()
extern "C" void Parser_ParseWhiteSpace_m20758 (Parser_t4917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseSign()
extern "C" bool Parser_ParseSign_m20759 (Parser_t4917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan/Parser::ParseInt(System.Boolean)
extern "C" int32_t Parser_ParseInt_m20760 (Parser_t4917 * __this, bool ___optional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseOptDot()
extern "C" bool Parser_ParseOptDot_m20761 (Parser_t4917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseOptColon()
extern "C" void Parser_ParseOptColon_m20762 (Parser_t4917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan/Parser::ParseTicks()
extern "C" int64_t Parser_ParseTicks_m20763 (Parser_t4917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan/Parser::Execute()
extern "C" TimeSpan_t334  Parser_Execute_m20764 (Parser_t4917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
