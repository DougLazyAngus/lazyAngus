#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.Json/JsonStringParser
struct JsonStringParser_t1176;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t695;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t785;
// System.Text.RegularExpressions.Match
struct Match_t1372;

// System.String Parse.Internal.Json/JsonStringParser::get_Input()
extern "C" String_t* JsonStringParser_get_Input_m6418 (JsonStringParser_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::set_Input(System.String)
extern "C" void JsonStringParser_set_Input_m6419 (JsonStringParser_t1176 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Parse.Internal.Json/JsonStringParser::get_InputAsArray()
extern "C" CharU5BU5D_t695* JsonStringParser_get_InputAsArray_m6420 (JsonStringParser_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::set_InputAsArray(System.Char[])
extern "C" void JsonStringParser_set_InputAsArray_m6421 (JsonStringParser_t1176 * __this, CharU5BU5D_t695* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.Json/JsonStringParser::get_CurrentIndex()
extern "C" int32_t JsonStringParser_get_CurrentIndex_m6422 (JsonStringParser_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::Skip(System.Int32)
extern "C" void JsonStringParser_Skip_m6423 (JsonStringParser_t1176 * __this, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::.ctor(System.String)
extern "C" void JsonStringParser__ctor_m6424 (JsonStringParser_t1176 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseObject(System.Object&)
extern "C" bool JsonStringParser_ParseObject_m6425 (JsonStringParser_t1176 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseMember(System.Object&)
extern "C" bool JsonStringParser_ParseMember_m6426 (JsonStringParser_t1176 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseArray(System.Object&)
extern "C" bool JsonStringParser_ParseArray_m6427 (JsonStringParser_t1176 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseValue(System.Object&)
extern "C" bool JsonStringParser_ParseValue_m6428 (JsonStringParser_t1176 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseString(System.Object&)
extern "C" bool JsonStringParser_ParseString_m6429 (JsonStringParser_t1176 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseNumber(System.Object&)
extern "C" bool JsonStringParser_ParseNumber_m6430 (JsonStringParser_t1176 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.Match&)
extern "C" bool JsonStringParser_Accept_m6431 (JsonStringParser_t1176 * __this, Regex_t785 * ___matcher, Match_t1372 ** ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Char)
extern "C" bool JsonStringParser_Accept_m6432 (JsonStringParser_t1176 * __this, uint16_t ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Char[])
extern "C" bool JsonStringParser_Accept_m6433 (JsonStringParser_t1176 * __this, CharU5BU5D_t695* ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
