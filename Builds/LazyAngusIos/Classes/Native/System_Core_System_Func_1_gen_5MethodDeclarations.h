#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Int32>
struct Func_1_t1303;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m7560_gshared (Func_1_t1303 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m7560(__this, ___object, ___method, method) (( void (*) (Func_1_t1303 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m7560_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Int32>::Invoke()
extern "C" int32_t Func_1_Invoke_m59107_gshared (Func_1_t1303 * __this, const MethodInfo* method);
#define Func_1_Invoke_m59107(__this, method) (( int32_t (*) (Func_1_t1303 *, const MethodInfo*))Func_1_Invoke_m59107_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Int32>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m59108_gshared (Func_1_t1303 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m59108(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1303 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m59108_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Func_1_EndInvoke_m59109_gshared (Func_1_t1303 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m59109(__this, ___result, method) (( int32_t (*) (Func_1_t1303 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m59109_gshared)(__this, ___result, method)
