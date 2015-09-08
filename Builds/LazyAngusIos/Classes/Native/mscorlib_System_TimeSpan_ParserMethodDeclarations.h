#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeSpan/Parser
struct Parser_t4921;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan/Parser::.ctor(System.String)
extern "C" void Parser__ctor_m20769 (Parser_t4921 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::get_AtEnd()
extern "C" bool Parser_get_AtEnd_m20770 (Parser_t4921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseWhiteSpace()
extern "C" void Parser_ParseWhiteSpace_m20771 (Parser_t4921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseSign()
extern "C" bool Parser_ParseSign_m20772 (Parser_t4921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan/Parser::ParseInt(System.Boolean)
extern "C" int32_t Parser_ParseInt_m20773 (Parser_t4921 * __this, bool ___optional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseOptDot()
extern "C" bool Parser_ParseOptDot_m20774 (Parser_t4921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseOptColon()
extern "C" void Parser_ParseOptColon_m20775 (Parser_t4921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan/Parser::ParseTicks()
extern "C" int64_t Parser_ParseTicks_m20776 (Parser_t4921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan/Parser::Execute()
extern "C" TimeSpan_t334  Parser_Execute_m20777 (Parser_t4921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
