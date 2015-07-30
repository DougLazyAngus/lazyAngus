#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t628;
// System.Object
struct Object_t;
// UnionAssets.FLE.CEvent
struct CEvent_t133;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnionAssets.FLE.DataEventHandlerFunction::.ctor(System.Object,System.IntPtr)
extern "C" void DataEventHandlerFunction__ctor_m3393 (DataEventHandlerFunction_t628 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.DataEventHandlerFunction::Invoke(UnionAssets.FLE.CEvent)
extern "C" void DataEventHandlerFunction_Invoke_m3394 (DataEventHandlerFunction_t628 * __this, CEvent_t133 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataEventHandlerFunction_t628(Il2CppObject* delegate, CEvent_t133 * ___e);
// System.IAsyncResult UnionAssets.FLE.DataEventHandlerFunction::BeginInvoke(UnionAssets.FLE.CEvent,System.AsyncCallback,System.Object)
extern "C" Object_t * DataEventHandlerFunction_BeginInvoke_m3395 (DataEventHandlerFunction_t628 * __this, CEvent_t133 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.DataEventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void DataEventHandlerFunction_EndInvoke_m3396 (DataEventHandlerFunction_t628 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
