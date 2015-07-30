#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ANMiniJSON.Json/Parser
struct Parser_t260;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t312;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t636;
// ANMiniJSON.Json/Parser/TOKEN
#include "AssemblyU2DCSharp_ANMiniJSON_Json_Parser_TOKEN.h"

// System.Void ANMiniJSON.Json/Parser::.ctor(System.String)
extern "C" void Parser__ctor_m1414 (Parser_t260 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ANMiniJSON.Json/Parser::Parse(System.String)
extern "C" Object_t * Parser_Parse_m1415 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ANMiniJSON.Json/Parser::Dispose()
extern "C" void Parser_Dispose_m1416 (Parser_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> ANMiniJSON.Json/Parser::ParseObject()
extern "C" Dictionary_2_t312 * Parser_ParseObject_m1417 (Parser_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> ANMiniJSON.Json/Parser::ParseArray()
extern "C" List_1_t636 * Parser_ParseArray_m1418 (Parser_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ANMiniJSON.Json/Parser::ParseValue()
extern "C" Object_t * Parser_ParseValue_m1419 (Parser_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ANMiniJSON.Json/Parser::ParseByToken(ANMiniJSON.Json/Parser/TOKEN)
extern "C" Object_t * Parser_ParseByToken_m1420 (Parser_t260 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ANMiniJSON.Json/Parser::ParseString()
extern "C" String_t* Parser_ParseString_m1421 (Parser_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ANMiniJSON.Json/Parser::ParseNumber()
extern "C" Object_t * Parser_ParseNumber_m1422 (Parser_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ANMiniJSON.Json/Parser::EatWhitespace()
extern "C" void Parser_EatWhitespace_m1423 (Parser_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char ANMiniJSON.Json/Parser::get_PeekChar()
extern "C" uint16_t Parser_get_PeekChar_m1424 (Parser_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char ANMiniJSON.Json/Parser::get_NextChar()
extern "C" uint16_t Parser_get_NextChar_m1425 (Parser_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ANMiniJSON.Json/Parser::get_NextWord()
extern "C" String_t* Parser_get_NextWord_m1426 (Parser_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ANMiniJSON.Json/Parser/TOKEN ANMiniJSON.Json/Parser::get_NextToken()
extern "C" int32_t Parser_get_NextToken_m1427 (Parser_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
