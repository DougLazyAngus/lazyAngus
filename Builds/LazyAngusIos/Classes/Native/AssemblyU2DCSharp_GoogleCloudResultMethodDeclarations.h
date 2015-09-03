#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GoogleCloudResult
struct GoogleCloudResult_t233;
// System.String
struct String_t;
// GP_AppStateStatusCodes
#include "AssemblyU2DCSharp_GP_AppStateStatusCodes.h"

// System.Void GoogleCloudResult::.ctor(System.String)
extern "C" void GoogleCloudResult__ctor_m1350 (GoogleCloudResult_t233 * __this, String_t* ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleCloudResult::.ctor(System.String,System.String)
extern "C" void GoogleCloudResult__ctor_m1351 (GoogleCloudResult_t233 * __this, String_t* ___code, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_AppStateStatusCodes GoogleCloudResult::get_response()
extern "C" int32_t GoogleCloudResult_get_response_m1352 (GoogleCloudResult_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleCloudResult::get_stateDataString()
extern "C" String_t* GoogleCloudResult_get_stateDataString_m1353 (GoogleCloudResult_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleCloudResult::get_serverConflictDataString()
extern "C" String_t* GoogleCloudResult_get_serverConflictDataString_m1354 (GoogleCloudResult_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleCloudResult::get_message()
extern "C" String_t* GoogleCloudResult_get_message_m1355 (GoogleCloudResult_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GoogleCloudResult::get_stateKey()
extern "C" int32_t GoogleCloudResult_get_stateKey_m1356 (GoogleCloudResult_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleCloudResult::get_isSuccess()
extern "C" bool GoogleCloudResult_get_isSuccess_m1357 (GoogleCloudResult_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleCloudResult::get_isFailure()
extern "C" bool GoogleCloudResult_get_isFailure_m1358 (GoogleCloudResult_t233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
