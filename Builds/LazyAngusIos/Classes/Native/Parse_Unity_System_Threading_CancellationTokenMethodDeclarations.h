﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CancellationToken
struct CancellationToken_t1165;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1340;
// System.Action
struct Action_t143;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"

// System.Void System.Threading.CancellationToken::.ctor(System.Threading.CancellationTokenSource)
extern "C" void CancellationToken__ctor_m7234 (CancellationToken_t1165 * __this, CancellationTokenSource_t1340 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
extern "C" CancellationToken_t1165  CancellationToken_get_None_m7235 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
extern "C" bool CancellationToken_get_IsCancellationRequested_m7236 (CancellationToken_t1165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
extern "C" CancellationTokenRegistration_t1341  CancellationToken_Register_m7237 (CancellationToken_t1165 * __this, Action_t143 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
extern "C" void CancellationToken_ThrowIfCancellationRequested_m7238 (CancellationToken_t1165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
