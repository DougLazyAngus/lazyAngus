﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1720;

// System.Void Mono.Security.Protocol.Tls.ValidationResult::.ctor(System.Boolean,System.Boolean,System.Int32)
extern "C" void ValidationResult__ctor_m8857 (ValidationResult_t1720 * __this, bool ___trusted, bool ___user_denied, int32_t ___error_code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ValidationResult::get_Trusted()
extern "C" bool ValidationResult_get_Trusted_m11004 (ValidationResult_t1720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.ValidationResult::get_ErrorCode()
extern "C" int32_t ValidationResult_get_ErrorCode_m11005 (ValidationResult_t1720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
