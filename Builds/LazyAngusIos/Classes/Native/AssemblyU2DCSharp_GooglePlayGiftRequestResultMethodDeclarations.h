#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GooglePlayGiftRequestResult
struct GooglePlayGiftRequestResult_t235;
// System.String
struct String_t;
// GP_GamesActivityResultCodes
#include "AssemblyU2DCSharp_GP_GamesActivityResultCodes.h"

// System.Void GooglePlayGiftRequestResult::.ctor(System.String)
extern "C" void GooglePlayGiftRequestResult__ctor_m1361 (GooglePlayGiftRequestResult_t235 * __this, String_t* ___r_code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_GamesActivityResultCodes GooglePlayGiftRequestResult::get_code()
extern "C" int32_t GooglePlayGiftRequestResult_get_code_m1362 (GooglePlayGiftRequestResult_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGiftRequestResult::get_isSuccess()
extern "C" bool GooglePlayGiftRequestResult_get_isSuccess_m1363 (GooglePlayGiftRequestResult_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGiftRequestResult::get_isFailure()
extern "C" bool GooglePlayGiftRequestResult_get_isFailure_m1364 (GooglePlayGiftRequestResult_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
