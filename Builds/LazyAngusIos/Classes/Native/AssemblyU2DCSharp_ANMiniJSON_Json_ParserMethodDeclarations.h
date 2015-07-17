#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ANMiniJSON.Json/Parser
struct Parser_t218;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t270;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t582;
// ANMiniJSON.Json/Parser/TOKEN
#include "AssemblyU2DCSharp_ANMiniJSON_Json_Parser_TOKEN.h"

// System.Void ANMiniJSON.Json/Parser::.ctor(System.String)
extern "C" void Parser__ctor_m1141 (Parser_t218 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ANMiniJSON.Json/Parser::Parse(System.String)
extern "C" Object_t * Parser_Parse_m1142 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ANMiniJSON.Json/Parser::Dispose()
extern "C" void Parser_Dispose_m1143 (Parser_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> ANMiniJSON.Json/Parser::ParseObject()
extern "C" Dictionary_2_t270 * Parser_ParseObject_m1144 (Parser_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> ANMiniJSON.Json/Parser::ParseArray()
extern "C" List_1_t582 * Parser_ParseArray_m1145 (Parser_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ANMiniJSON.Json/Parser::ParseValue()
extern "C" Object_t * Parser_ParseValue_m1146 (Parser_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ANMiniJSON.Json/Parser::ParseByToken(ANMiniJSON.Json/Parser/TOKEN)
extern "C" Object_t * Parser_ParseByToken_m1147 (Parser_t218 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ANMiniJSON.Json/Parser::ParseString()
extern "C" String_t* Parser_ParseString_m1148 (Parser_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ANMiniJSON.Json/Parser::ParseNumber()
extern "C" Object_t * Parser_ParseNumber_m1149 (Parser_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ANMiniJSON.Json/Parser::EatWhitespace()
extern "C" void Parser_EatWhitespace_m1150 (Parser_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char ANMiniJSON.Json/Parser::get_PeekChar()
extern "C" uint16_t Parser_get_PeekChar_m1151 (Parser_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char ANMiniJSON.Json/Parser::get_NextChar()
extern "C" uint16_t Parser_get_NextChar_m1152 (Parser_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ANMiniJSON.Json/Parser::get_NextWord()
extern "C" String_t* Parser_get_NextWord_m1153 (Parser_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ANMiniJSON.Json/Parser/TOKEN ANMiniJSON.Json/Parser::get_NextToken()
extern "C" int32_t Parser_get_NextToken_m1154 (Parser_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
