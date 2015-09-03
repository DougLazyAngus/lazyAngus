#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int64,System.Single>
struct Func_2_t7386;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int64,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m46139_gshared (Func_2_t7386 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m46139(__this, ___object, ___method, method) (( void (*) (Func_2_t7386 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m46139_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int64,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m46140_gshared (Func_2_t7386 * __this, int64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m46140(__this, ___arg1, method) (( float (*) (Func_2_t7386 *, int64_t, const MethodInfo*))Func_2_Invoke_m46140_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int64,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m46141_gshared (Func_2_t7386 * __this, int64_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m46141(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7386 *, int64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m46141_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int64,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m46142_gshared (Func_2_t7386 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m46142(__this, ___result, method) (( float (*) (Func_2_t7386 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m46142_gshared)(__this, ___result, method)
