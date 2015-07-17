#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TWResult
struct TWResult_t277;
// System.String
struct String_t;

// System.Void TWResult::.ctor(System.Boolean,System.String)
extern "C" void TWResult__ctor_m1408 (TWResult_t277 * __this, bool ___IsResSucceeded, String_t* ___resData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TWResult::get_IsSucceeded()
extern "C" bool TWResult_get_IsSucceeded_m1409 (TWResult_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TWResult::get_data()
extern "C" String_t* TWResult_get_data_m1410 (TWResult_t277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
