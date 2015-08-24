#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int32,System.Byte>
struct Func_2_t6404;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int32,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m36173_gshared (Func_2_t6404 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m36173(__this, ___object, ___method, method) (( void (*) (Func_2_t6404 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36173_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int32,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m36174_gshared (Func_2_t6404 * __this, int32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m36174(__this, ___arg1, method) (( uint8_t (*) (Func_2_t6404 *, int32_t, const MethodInfo*))Func_2_Invoke_m36174_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int32,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m36175_gshared (Func_2_t6404 * __this, int32_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m36175(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6404 *, int32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36175_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int32,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m36176_gshared (Func_2_t6404 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m36176(__this, ___result, method) (( uint8_t (*) (Func_2_t6404 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36176_gshared)(__this, ___result, method)
