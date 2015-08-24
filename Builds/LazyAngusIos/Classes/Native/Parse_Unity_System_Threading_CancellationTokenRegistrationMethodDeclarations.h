#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t1341;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1340;
// System.Action
struct Action_t143;

// System.Void System.Threading.CancellationTokenRegistration::.ctor(System.Threading.CancellationTokenSource,System.Action)
extern "C" void CancellationTokenRegistration__ctor_m7239 (CancellationTokenRegistration_t1341 * __this, CancellationTokenSource_t1340 * ___source, Action_t143 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
extern "C" void CancellationTokenRegistration_Dispose_m7240 (CancellationTokenRegistration_t1341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
