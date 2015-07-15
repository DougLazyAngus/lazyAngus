#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t528;
// System.Object
struct Object_t;
// UnionAssets.FLE.CEvent
struct CEvent_t91;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnionAssets.FLE.DataEventHandlerFunction::.ctor(System.Object,System.IntPtr)
extern "C" void DataEventHandlerFunction__ctor_m2537 (DataEventHandlerFunction_t528 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent)
extern "C" void DataEventHandlerFunction_Invoke_m2538 (DataEventHandlerFunction_t528 * __this, CEvent_t91 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataEventHandlerFunction_t528(Il2CppObject* delegate, CEvent_t91 * ___e);
// System.IAsyncResult UnionAssets.FLE.DataEventHandlerFunction::BeginInvoke(UnionAssets.FLE.CEvent,System.AsyncCallback,System.Object)
extern "C" Object_t * DataEventHandlerFunction_BeginInvoke_m2539 (DataEventHandlerFunction_t528 * __this, CEvent_t91 * ___e, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.DataEventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void DataEventHandlerFunction_EndInvoke_m2540 (DataEventHandlerFunction_t528 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
