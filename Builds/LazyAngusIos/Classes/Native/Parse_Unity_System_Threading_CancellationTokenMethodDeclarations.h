#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CancellationToken
struct CancellationToken_t1192;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1367;
// System.Action
struct Action_t143;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"

// System.Void System.Threading.CancellationToken::.ctor(System.Threading.CancellationTokenSource)
extern "C" void CancellationToken__ctor_m7441 (CancellationToken_t1192 * __this, CancellationTokenSource_t1367 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
extern "C" CancellationToken_t1192  CancellationToken_get_None_m7442 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
extern "C" bool CancellationToken_get_IsCancellationRequested_m7443 (CancellationToken_t1192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
extern "C" CancellationTokenRegistration_t1368  CancellationToken_Register_m7444 (CancellationToken_t1192 * __this, Action_t143 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
extern "C" void CancellationToken_ThrowIfCancellationRequested_m7445 (CancellationToken_t1192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
