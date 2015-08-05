#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.Json/JsonStringParser
struct JsonStringParser_t1126;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t663;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1127;
// System.Text.RegularExpressions.Match
struct Match_t1325;

// System.String Parse.Internal.Json/JsonStringParser::get_Input()
extern "C" String_t* JsonStringParser_get_Input_m6185 (JsonStringParser_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::set_Input(System.String)
extern "C" void JsonStringParser_set_Input_m6186 (JsonStringParser_t1126 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Parse.Internal.Json/JsonStringParser::get_InputAsArray()
extern "C" CharU5BU5D_t663* JsonStringParser_get_InputAsArray_m6187 (JsonStringParser_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::set_InputAsArray(System.Char[])
extern "C" void JsonStringParser_set_InputAsArray_m6188 (JsonStringParser_t1126 * __this, CharU5BU5D_t663* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.Json/JsonStringParser::get_CurrentIndex()
extern "C" int32_t JsonStringParser_get_CurrentIndex_m6189 (JsonStringParser_t1126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::Skip(System.Int32)
extern "C" void JsonStringParser_Skip_m6190 (JsonStringParser_t1126 * __this, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json/JsonStringParser::.ctor(System.String)
extern "C" void JsonStringParser__ctor_m6191 (JsonStringParser_t1126 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseObject(System.Object&)
extern "C" bool JsonStringParser_ParseObject_m6192 (JsonStringParser_t1126 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseMember(System.Object&)
extern "C" bool JsonStringParser_ParseMember_m6193 (JsonStringParser_t1126 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseArray(System.Object&)
extern "C" bool JsonStringParser_ParseArray_m6194 (JsonStringParser_t1126 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseValue(System.Object&)
extern "C" bool JsonStringParser_ParseValue_m6195 (JsonStringParser_t1126 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseString(System.Object&)
extern "C" bool JsonStringParser_ParseString_m6196 (JsonStringParser_t1126 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::ParseNumber(System.Object&)
extern "C" bool JsonStringParser_ParseNumber_m6197 (JsonStringParser_t1126 * __this, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.Match&)
extern "C" bool JsonStringParser_Accept_m6198 (JsonStringParser_t1126 * __this, Regex_t1127 * ___matcher, Match_t1325 ** ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Char)
extern "C" bool JsonStringParser_Accept_m6199 (JsonStringParser_t1126 * __this, uint16_t ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.Json/JsonStringParser::Accept(System.Char[])
extern "C" bool JsonStringParser_Accept_m6200 (JsonStringParser_t1126 * __this, CharU5BU5D_t663* ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
