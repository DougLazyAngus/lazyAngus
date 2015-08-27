#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.SByte,System.Int64>
struct Func_2_t6668;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.SByte,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m39537_gshared (Func_2_t6668 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m39537(__this, ___object, ___method, method) (( void (*) (Func_2_t6668 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39537_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.SByte,System.Int64>::Invoke(T)
extern "C" int64_t Func_2_Invoke_m39538_gshared (Func_2_t6668 * __this, int8_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m39538(__this, ___arg1, method) (( int64_t (*) (Func_2_t6668 *, int8_t, const MethodInfo*))Func_2_Invoke_m39538_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.SByte,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m39539_gshared (Func_2_t6668 * __this, int8_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m39539(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6668 *, int8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39539_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.SByte,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Func_2_EndInvoke_m39540_gshared (Func_2_t6668 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m39540(__this, ___result, method) (( int64_t (*) (Func_2_t6668 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39540_gshared)(__this, ___result, method)
