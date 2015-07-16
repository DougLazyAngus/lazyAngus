#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GooglePlayGiftRequestResult
struct GooglePlayGiftRequestResult_t166;
// System.String
struct String_t;
// GP_GamesActivityResultCodes
#include "AssemblyU2DCSharp_GP_GamesActivityResultCodes.h"

// System.Void GooglePlayGiftRequestResult::.ctor(System.String)
extern "C" void GooglePlayGiftRequestResult__ctor_m686 (GooglePlayGiftRequestResult_t166 * __this, String_t* ___r_code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_GamesActivityResultCodes GooglePlayGiftRequestResult::get_code()
extern "C" int32_t GooglePlayGiftRequestResult_get_code_m687 (GooglePlayGiftRequestResult_t166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGiftRequestResult::get_isSuccess()
extern "C" bool GooglePlayGiftRequestResult_get_isSuccess_m688 (GooglePlayGiftRequestResult_t166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGiftRequestResult::get_isFailure()
extern "C" bool GooglePlayGiftRequestResult_get_isFailure_m689 (GooglePlayGiftRequestResult_t166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
