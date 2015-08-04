#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.SynchronizationContext
struct SynchronizationContext_t1317;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2110;
// System.Object
struct Object_t;

// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C" void SynchronizationContext__ctor_m7584 (SynchronizationContext_t1317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
extern "C" SynchronizationContext_t1317 * SynchronizationContext_get_Current_m7583 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C" void SynchronizationContext_Post_m19003 (SynchronizationContext_t1317 * __this, SendOrPostCallback_t2110 * ___d, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
