#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.EventHandler`1<System.Object>
struct EventHandler_1_t5926;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandler_1__ctor_m30372_gshared (EventHandler_1_t5926 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventHandler_1__ctor_m30372(__this, ___object, ___method, method) (( void (*) (EventHandler_1_t5926 *, Object_t *, IntPtr_t, const MethodInfo*))EventHandler_1__ctor_m30372_gshared)(__this, ___object, ___method, method)
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
extern "C" void EventHandler_1_Invoke_m30373_gshared (EventHandler_1_t5926 * __this, Object_t * ___sender, Object_t * ___e, const MethodInfo* method);
#define EventHandler_1_Invoke_m30373(__this, ___sender, ___e, method) (( void (*) (EventHandler_1_t5926 *, Object_t *, Object_t *, const MethodInfo*))EventHandler_1_Invoke_m30373_gshared)(__this, ___sender, ___e, method)
// System.IAsyncResult System.EventHandler`1<System.Object>::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandler_1_BeginInvoke_m30374_gshared (EventHandler_1_t5926 * __this, Object_t * ___sender, Object_t * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventHandler_1_BeginInvoke_m30374(__this, ___sender, ___e, ___callback, ___object, method) (( Object_t * (*) (EventHandler_1_t5926 *, Object_t *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))EventHandler_1_BeginInvoke_m30374_gshared)(__this, ___sender, ___e, ___callback, ___object, method)
// System.Void System.EventHandler`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_1_EndInvoke_m30375_gshared (EventHandler_1_t5926 * __this, Object_t * ___result, const MethodInfo* method);
#define EventHandler_1_EndInvoke_m30375(__this, ___result, method) (( void (*) (EventHandler_1_t5926 *, Object_t *, const MethodInfo*))EventHandler_1_EndInvoke_m30375_gshared)(__this, ___result, method)
