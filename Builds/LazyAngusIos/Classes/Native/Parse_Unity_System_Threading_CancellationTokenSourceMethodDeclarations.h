#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1367;
// System.Action
struct Action_t143;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"

// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenSource::Register(System.Action)
extern "C" CancellationTokenRegistration_t1368  CancellationTokenSource_Register_m7448 (CancellationTokenSource_t1367 * __this, Action_t143 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Unregister(System.Action)
extern "C" void CancellationTokenSource_Unregister_m7449 (CancellationTokenSource_t1367 * __this, Action_t143 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationTokenSource::get_IsCancellationRequested()
extern "C" bool CancellationTokenSource_get_IsCancellationRequested_m7450 (CancellationTokenSource_t1367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
extern "C" CancellationToken_t1192  CancellationTokenSource_get_Token_m7451 (CancellationTokenSource_t1367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Cancel()
extern "C" void CancellationTokenSource_Cancel_m7452 (CancellationTokenSource_t1367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Cancel(System.Boolean)
extern "C" void CancellationTokenSource_Cancel_m7453 (CancellationTokenSource_t1367 * __this, bool ___throwOnFirstException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::.ctor()
extern "C" void CancellationTokenSource__ctor_m7454 (CancellationTokenSource_t1367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
