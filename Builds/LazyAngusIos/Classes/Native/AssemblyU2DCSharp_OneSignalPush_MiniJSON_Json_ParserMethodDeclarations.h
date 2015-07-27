#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// OneSignalPush.MiniJSON.Json/Parser
struct Parser_t341;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t272;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t584;
// OneSignalPush.MiniJSON.Json/Parser/TOKEN
#include "AssemblyU2DCSharp_OneSignalPush_MiniJSON_Json_Parser_TOKEN.h"

// System.Void OneSignalPush.MiniJSON.Json/Parser::.ctor(System.String)
extern "C" void Parser__ctor_m1811 (Parser_t341 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OneSignalPush.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C" bool Parser_IsWordBreak_m1812 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OneSignalPush.MiniJSON.Json/Parser::Parse(System.String)
extern "C" Object_t * Parser_Parse_m1813 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Parser::Dispose()
extern "C" void Parser_Dispose_m1814 (Parser_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> OneSignalPush.MiniJSON.Json/Parser::ParseObject()
extern "C" Dictionary_2_t272 * Parser_ParseObject_m1815 (Parser_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> OneSignalPush.MiniJSON.Json/Parser::ParseArray()
extern "C" List_1_t584 * Parser_ParseArray_m1816 (Parser_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OneSignalPush.MiniJSON.Json/Parser::ParseValue()
extern "C" Object_t * Parser_ParseValue_m1817 (Parser_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OneSignalPush.MiniJSON.Json/Parser::ParseByToken(OneSignalPush.MiniJSON.Json/Parser/TOKEN)
extern "C" Object_t * Parser_ParseByToken_m1818 (Parser_t341 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OneSignalPush.MiniJSON.Json/Parser::ParseString()
extern "C" String_t* Parser_ParseString_m1819 (Parser_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OneSignalPush.MiniJSON.Json/Parser::ParseNumber()
extern "C" Object_t * Parser_ParseNumber_m1820 (Parser_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Parser::EatWhitespace()
extern "C" void Parser_EatWhitespace_m1821 (Parser_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char OneSignalPush.MiniJSON.Json/Parser::get_PeekChar()
extern "C" uint16_t Parser_get_PeekChar_m1822 (Parser_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char OneSignalPush.MiniJSON.Json/Parser::get_NextChar()
extern "C" uint16_t Parser_get_NextChar_m1823 (Parser_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OneSignalPush.MiniJSON.Json/Parser::get_NextWord()
extern "C" String_t* Parser_get_NextWord_m1824 (Parser_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OneSignalPush.MiniJSON.Json/Parser/TOKEN OneSignalPush.MiniJSON.Json/Parser::get_NextToken()
extern "C" int32_t Parser_get_NextToken_m1825 (Parser_t341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
