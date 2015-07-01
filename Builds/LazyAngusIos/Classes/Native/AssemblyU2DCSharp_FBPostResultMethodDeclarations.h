#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBPostResult
struct FBPostResult_t222;
// FBResult
struct FBResult_t213;
// System.String
struct String_t;

// System.Void FBPostResult::.ctor(FBResult)
extern "C" void FBPostResult__ctor_m888 (FBPostResult_t222 * __this, FBResult_t213 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBResult FBPostResult::get_Result()
extern "C" FBResult_t213 * FBPostResult_get_Result_m889 (FBPostResult_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBPostResult::get_PostId()
extern "C" String_t* FBPostResult_get_PostId_m890 (FBPostResult_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBPostResult::get_IsSucceeded()
extern "C" bool FBPostResult_get_IsSucceeded_m891 (FBPostResult_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
