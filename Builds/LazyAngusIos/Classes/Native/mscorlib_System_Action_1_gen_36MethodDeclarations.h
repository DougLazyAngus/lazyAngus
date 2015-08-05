#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Int32>
struct Action_1_t5568;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m25078_gshared (Action_1_t5568 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m25078(__this, ___object, ___method, method) (( void (*) (Action_1_t5568 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m25078_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Int32>::Invoke(T)
extern "C" void Action_1_Invoke_m25080_gshared (Action_1_t5568 * __this, int32_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m25080(__this, ___obj, method) (( void (*) (Action_1_t5568 *, int32_t, const MethodInfo*))Action_1_Invoke_m25080_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m25082_gshared (Action_1_t5568 * __this, int32_t ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m25082(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t5568 *, int32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m25082_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m25084_gshared (Action_1_t5568 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m25084(__this, ___result, method) (( void (*) (Action_1_t5568 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m25084_gshared)(__this, ___result, method)
