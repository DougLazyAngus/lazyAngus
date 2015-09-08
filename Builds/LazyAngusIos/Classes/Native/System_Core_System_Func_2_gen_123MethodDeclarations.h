#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int64,System.Byte>
struct Func_2_t6975;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int64,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m40876_gshared (Func_2_t6975 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m40876(__this, ___object, ___method, method) (( void (*) (Func_2_t6975 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40876_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int64,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m40877_gshared (Func_2_t6975 * __this, int64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m40877(__this, ___arg1, method) (( uint8_t (*) (Func_2_t6975 *, int64_t, const MethodInfo*))Func_2_Invoke_m40877_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int64,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m40878_gshared (Func_2_t6975 * __this, int64_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m40878(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6975 *, int64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40878_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int64,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m40879_gshared (Func_2_t6975 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m40879(__this, ___result, method) (( uint8_t (*) (Func_2_t6975 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40879_gshared)(__this, ___result, method)
