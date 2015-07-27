#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FB_APIResult
struct FB_APIResult_t258;
// System.String
struct String_t;

// System.Void FB_APIResult::.ctor(System.Boolean,System.String)
extern "C" void FB_APIResult__ctor_m1343 (FB_APIResult_t258 * __this, bool ___IsResSucceeded, String_t* ___resData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FB_APIResult::get_IsSucceeded()
extern "C" bool FB_APIResult_get_IsSucceeded_m1344 (FB_APIResult_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FB_APIResult::get_responce()
extern "C" String_t* FB_APIResult_get_responce_m1345 (FB_APIResult_t258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
