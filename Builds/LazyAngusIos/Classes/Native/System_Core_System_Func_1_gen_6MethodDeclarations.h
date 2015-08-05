#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Object>
struct Func_1_t1371;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m29884_gshared (Func_1_t1371 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m29884(__this, ___object, ___method, method) (( void (*) (Func_1_t1371 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m29884_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Object>::Invoke()
extern "C" Object_t * Func_1_Invoke_m29886_gshared (Func_1_t1371 * __this, const MethodInfo* method);
#define Func_1_Invoke_m29886(__this, method) (( Object_t * (*) (Func_1_t1371 *, const MethodInfo*))Func_1_Invoke_m29886_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m29888_gshared (Func_1_t1371 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m29888(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1371 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m29888_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_1_EndInvoke_m29890_gshared (Func_1_t1371 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m29890(__this, ___result, method) (( Object_t * (*) (Func_1_t1371 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m29890_gshared)(__this, ___result, method)
