#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GoogleCloudResult
struct GoogleCloudResult_t193;
// System.String
struct String_t;
// GP_AppStateStatusCodes
#include "AssemblyU2DCSharp_GP_AppStateStatusCodes.h"

// System.Void GoogleCloudResult::.ctor(System.String)
extern "C" void GoogleCloudResult__ctor_m1077 (GoogleCloudResult_t193 * __this, String_t* ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleCloudResult::.ctor(System.String,System.String)
extern "C" void GoogleCloudResult__ctor_m1078 (GoogleCloudResult_t193 * __this, String_t* ___code, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GP_AppStateStatusCodes GoogleCloudResult::get_response()
extern "C" int32_t GoogleCloudResult_get_response_m1079 (GoogleCloudResult_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleCloudResult::get_stateDataString()
extern "C" String_t* GoogleCloudResult_get_stateDataString_m1080 (GoogleCloudResult_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleCloudResult::get_serverConflictDataString()
extern "C" String_t* GoogleCloudResult_get_serverConflictDataString_m1081 (GoogleCloudResult_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleCloudResult::get_message()
extern "C" String_t* GoogleCloudResult_get_message_m1082 (GoogleCloudResult_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GoogleCloudResult::get_stateKey()
extern "C" int32_t GoogleCloudResult_get_stateKey_m1083 (GoogleCloudResult_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleCloudResult::get_isSuccess()
extern "C" bool GoogleCloudResult_get_isSuccess_m1084 (GoogleCloudResult_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleCloudResult::get_isFailure()
extern "C" bool GoogleCloudResult_get_isFailure_m1085 (GoogleCloudResult_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
