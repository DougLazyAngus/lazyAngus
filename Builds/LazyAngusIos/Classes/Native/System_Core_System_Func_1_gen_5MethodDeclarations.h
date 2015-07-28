#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Int32>
struct Func_1_t1295;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m7501_gshared (Func_1_t1295 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m7501(__this, ___object, ___method, method) (( void (*) (Func_1_t1295 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m7501_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Int32>::Invoke()
extern "C" int32_t Func_1_Invoke_m59044_gshared (Func_1_t1295 * __this, const MethodInfo* method);
#define Func_1_Invoke_m59044(__this, method) (( int32_t (*) (Func_1_t1295 *, const MethodInfo*))Func_1_Invoke_m59044_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Int32>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m59045_gshared (Func_1_t1295 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m59045(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t1295 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m59045_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Func_1_EndInvoke_m59046_gshared (Func_1_t1295 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m59046(__this, ___result, method) (( int32_t (*) (Func_1_t1295 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m59046_gshared)(__this, ___result, method)
