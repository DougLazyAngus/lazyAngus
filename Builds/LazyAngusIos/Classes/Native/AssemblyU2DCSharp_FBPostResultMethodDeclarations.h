#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBPostResult
struct FBPostResult_t290;
// FBResult
struct FBResult_t281;
// System.String
struct String_t;

// System.Void FBPostResult::.ctor(FBResult)
extern "C" void FBPostResult__ctor_m1563 (FBPostResult_t290 * __this, FBResult_t281 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBResult FBPostResult::get_Result()
extern "C" FBResult_t281 * FBPostResult_get_Result_m1564 (FBPostResult_t290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBPostResult::get_PostId()
extern "C" String_t* FBPostResult_get_PostId_m1565 (FBPostResult_t290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBPostResult::get_IsSucceeded()
extern "C" bool FBPostResult_get_IsSucceeded_m1566 (FBPostResult_t290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
