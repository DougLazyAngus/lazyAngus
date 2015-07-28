﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseException
struct ParseException_t1176;
// System.String
struct String_t;
// System.Exception
struct Exception_t57;
// Parse.ParseException/ErrorCode
#include "Parse_Unity_Parse_ParseException_ErrorCode.h"

// System.Void Parse.ParseException::.ctor(Parse.ParseException/ErrorCode,System.String,System.Exception)
extern "C" void ParseException__ctor_m6390 (ParseException_t1176 * __this, int32_t ___code, String_t* ___message, Exception_t57 * ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseException/ErrorCode Parse.ParseException::get_Code()
extern "C" int32_t ParseException_get_Code_m6391 (ParseException_t1176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseException::set_Code(Parse.ParseException/ErrorCode)
extern "C" void ParseException_set_Code_m6392 (ParseException_t1176 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;