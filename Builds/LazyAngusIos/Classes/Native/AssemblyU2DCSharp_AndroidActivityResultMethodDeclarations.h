﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidActivityResult
struct AndroidActivityResult_t176;
// System.String
struct String_t;
// AdroidActivityResultCodes
#include "AssemblyU2DCSharp_AdroidActivityResultCodes.h"

// System.Void AndroidActivityResult::.ctor(System.String,System.String)
extern "C" void AndroidActivityResult__ctor_m1019 (AndroidActivityResult_t176 * __this, String_t* ___rId, String_t* ___codeString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AdroidActivityResultCodes AndroidActivityResult::get_code()
extern "C" int32_t AndroidActivityResult_get_code_m1020 (AndroidActivityResult_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AndroidActivityResult::get_requestId()
extern "C" int32_t AndroidActivityResult_get_requestId_m1021 (AndroidActivityResult_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidActivityResult::get_IsSucceeded()
extern "C" bool AndroidActivityResult_get_IsSucceeded_m1022 (AndroidActivityResult_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidActivityResult::get_IsFailed()
extern "C" bool AndroidActivityResult_get_IsFailed_m1023 (AndroidActivityResult_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
