#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GooglePlayResult
struct GooglePlayResult_t236;
// System.String
struct String_t;
// GP_GamesStatusCodes
#include "AssemblyU2DCSharp_GP_GamesStatusCodes.h"

// System.Void GooglePlayResult::.ctor(GP_GamesStatusCodes)
extern "C" void GooglePlayResult__ctor_m1363 (GooglePlayResult_t236 * __this, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayResult::.ctor(System.String)
extern "C" void GooglePlayResult__ctor_m1364 (GooglePlayResult_t236 * __this, String_t* ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayResult::SetCode(GP_GamesStatusCodes)
extern "C" void GooglePlayResult_SetCode_m1365 (GooglePlayResult_t236 * __this, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_GamesStatusCodes GooglePlayResult::get_response()
extern "C" int32_t GooglePlayResult_get_response_m1366 (GooglePlayResult_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayResult::get_message()
extern "C" String_t* GooglePlayResult_get_message_m1367 (GooglePlayResult_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayResult::get_isSuccess()
extern "C" bool GooglePlayResult_get_isSuccess_m1368 (GooglePlayResult_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayResult::get_isFailure()
extern "C" bool GooglePlayResult_get_isFailure_m1369 (GooglePlayResult_t236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
