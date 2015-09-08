#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Single,System.Int32>
struct Func_2_t7170;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Single,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m43287_gshared (Func_2_t7170 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m43287(__this, ___object, ___method, method) (( void (*) (Func_2_t7170 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m43287_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Single,System.Int32>::Invoke(T)
extern "C" int32_t Func_2_Invoke_m43288_gshared (Func_2_t7170 * __this, float ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m43288(__this, ___arg1, method) (( int32_t (*) (Func_2_t7170 *, float, const MethodInfo*))Func_2_Invoke_m43288_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Single,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m43289_gshared (Func_2_t7170 * __this, float ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m43289(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7170 *, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m43289_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Single,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Func_2_EndInvoke_m43290_gshared (Func_2_t7170 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m43290(__this, ___result, method) (( int32_t (*) (Func_2_t7170 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m43290_gshared)(__this, ___result, method)
