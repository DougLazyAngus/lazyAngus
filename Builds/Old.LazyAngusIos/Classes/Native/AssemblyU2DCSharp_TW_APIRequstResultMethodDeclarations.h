#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TW_APIRequstResult
struct TW_APIRequstResult_t254;
// System.String
struct String_t;

// System.Void TW_APIRequstResult::.ctor(System.Boolean,System.String)
extern "C" void TW_APIRequstResult__ctor_m1011 (TW_APIRequstResult_t254 * __this, bool ___IsResSucceeded, String_t* ___resData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TW_APIRequstResult::get_IsSucceeded()
extern "C" bool TW_APIRequstResult_get_IsSucceeded_m1012 (TW_APIRequstResult_t254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TW_APIRequstResult::get_responce()
extern "C" String_t* TW_APIRequstResult_get_responce_m1013 (TW_APIRequstResult_t254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
