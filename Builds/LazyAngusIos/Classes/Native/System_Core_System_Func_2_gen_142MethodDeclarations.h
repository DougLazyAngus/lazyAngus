#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int64,System.SByte>
struct Func_2_t6383;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int64,System.SByte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m36149_gshared (Func_2_t6383 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m36149(__this, ___object, ___method, method) (( void (*) (Func_2_t6383 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36149_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int64,System.SByte>::Invoke(T)
extern "C" int8_t Func_2_Invoke_m36150_gshared (Func_2_t6383 * __this, int64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m36150(__this, ___arg1, method) (( int8_t (*) (Func_2_t6383 *, int64_t, const MethodInfo*))Func_2_Invoke_m36150_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int64,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m36151_gshared (Func_2_t6383 * __this, int64_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m36151(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6383 *, int64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36151_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int64,System.SByte>::EndInvoke(System.IAsyncResult)
extern "C" int8_t Func_2_EndInvoke_m36152_gshared (Func_2_t6383 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m36152(__this, ___result, method) (( int8_t (*) (Func_2_t6383 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36152_gshared)(__this, ___result, method)
