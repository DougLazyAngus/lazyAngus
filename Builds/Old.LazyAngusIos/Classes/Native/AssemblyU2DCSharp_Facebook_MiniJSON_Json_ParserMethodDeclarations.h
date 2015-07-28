﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.MiniJSON.Json/Parser
struct Parser_t367;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t244;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t535;
// Facebook.MiniJSON.Json/Parser/TOKEN
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_Parser_TOKEN.h"

// System.Void Facebook.MiniJSON.Json/Parser::.ctor(System.String)
extern "C" void Parser__ctor_m1751 (Parser_t367 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::Parse(System.String)
extern "C" Object_t * Parser_Parse_m1752 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Parser::Dispose()
extern "C" void Parser_Dispose_m1753 (Parser_t367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
extern "C" Dictionary_2_t244 * Parser_ParseObject_m1754 (Parser_t367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
extern "C" List_1_t535 * Parser_ParseArray_m1755 (Parser_t367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
extern "C" Object_t * Parser_ParseValue_m1756 (Parser_t367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
extern "C" Object_t * Parser_ParseByToken_m1757 (Parser_t367 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Parser::ParseString()
extern "C" String_t* Parser_ParseString_m1758 (Parser_t367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
extern "C" Object_t * Parser_ParseNumber_m1759 (Parser_t367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
extern "C" void Parser_EatWhitespace_m1760 (Parser_t367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Facebook.MiniJSON.Json/Parser::get_PeekChar()
extern "C" uint16_t Parser_get_PeekChar_m1761 (Parser_t367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
extern "C" uint16_t Parser_get_NextChar_m1762 (Parser_t367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
extern "C" String_t* Parser_get_NextWord_m1763 (Parser_t367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
extern "C" int32_t Parser_get_NextToken_m1764 (Parser_t367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;