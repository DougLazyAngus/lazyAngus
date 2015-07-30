#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Single,System.SByte>
struct Func_2_t6393;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Single,System.SByte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m36274_gshared (Func_2_t6393 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m36274(__this, ___object, ___method, method) (( void (*) (Func_2_t6393 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36274_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Single,System.SByte>::Invoke(T)
extern "C" int8_t Func_2_Invoke_m36275_gshared (Func_2_t6393 * __this, float ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m36275(__this, ___arg1, method) (( int8_t (*) (Func_2_t6393 *, float, const MethodInfo*))Func_2_Invoke_m36275_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Single,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m36276_gshared (Func_2_t6393 * __this, float ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m36276(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6393 *, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36276_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Single,System.SByte>::EndInvoke(System.IAsyncResult)
extern "C" int8_t Func_2_EndInvoke_m36277_gshared (Func_2_t6393 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m36277(__this, ___result, method) (( int8_t (*) (Func_2_t6393 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36277_gshared)(__this, ___result, method)
