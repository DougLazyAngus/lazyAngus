#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t1341;
// System.Object
struct Object_t;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1447;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void PropertyChangedEventHandler__ctor_m14710 (PropertyChangedEventHandler_t1341 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C" void PropertyChangedEventHandler_Invoke_m14711 (PropertyChangedEventHandler_t1341 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1447 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PropertyChangedEventHandler_t1341(Il2CppObject* delegate, Object_t * ___sender, PropertyChangedEventArgs_t1447 * ___e);
// System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * PropertyChangedEventHandler_BeginInvoke_m14712 (PropertyChangedEventHandler_t1341 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1447 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void PropertyChangedEventHandler_EndInvoke_m14713 (PropertyChangedEventHandler_t1341 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
