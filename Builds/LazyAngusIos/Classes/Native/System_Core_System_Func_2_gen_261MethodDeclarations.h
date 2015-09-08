#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Single,System.Single>
struct Func_2_t7397;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m46277_gshared (Func_2_t7397 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m46277(__this, ___object, ___method, method) (( void (*) (Func_2_t7397 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m46277_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Single,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m46278_gshared (Func_2_t7397 * __this, float ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m46278(__this, ___arg1, method) (( float (*) (Func_2_t7397 *, float, const MethodInfo*))Func_2_Invoke_m46278_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Single,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m46279_gshared (Func_2_t7397 * __this, float ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m46279(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7397 *, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m46279_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m46280_gshared (Func_2_t7397 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m46280(__this, ___result, method) (( float (*) (Func_2_t7397 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m46280_gshared)(__this, ___result, method)
