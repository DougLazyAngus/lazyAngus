#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.EventHandler`1<System.Object>
struct EventHandler_1_t6002;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandler_1__ctor_m31145_gshared (EventHandler_1_t6002 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventHandler_1__ctor_m31145(__this, ___object, ___method, method) (( void (*) (EventHandler_1_t6002 *, Object_t *, IntPtr_t, const MethodInfo*))EventHandler_1__ctor_m31145_gshared)(__this, ___object, ___method, method)
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
extern "C" void EventHandler_1_Invoke_m31146_gshared (EventHandler_1_t6002 * __this, Object_t * ___sender, Object_t * ___e, const MethodInfo* method);
#define EventHandler_1_Invoke_m31146(__this, ___sender, ___e, method) (( void (*) (EventHandler_1_t6002 *, Object_t *, Object_t *, const MethodInfo*))EventHandler_1_Invoke_m31146_gshared)(__this, ___sender, ___e, method)
// System.IAsyncResult System.EventHandler`1<System.Object>::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandler_1_BeginInvoke_m31147_gshared (EventHandler_1_t6002 * __this, Object_t * ___sender, Object_t * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventHandler_1_BeginInvoke_m31147(__this, ___sender, ___e, ___callback, ___object, method) (( Object_t * (*) (EventHandler_1_t6002 *, Object_t *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))EventHandler_1_BeginInvoke_m31147_gshared)(__this, ___sender, ___e, ___callback, ___object, method)
// System.Void System.EventHandler`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_1_EndInvoke_m31148_gshared (EventHandler_1_t6002 * __this, Object_t * ___result, const MethodInfo* method);
#define EventHandler_1_EndInvoke_m31148(__this, ___result, method) (( void (*) (EventHandler_1_t6002 *, Object_t *, const MethodInfo*))EventHandler_1_EndInvoke_m31148_gshared)(__this, ___result, method)
