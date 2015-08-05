#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Byte>
struct Func_1_t6115;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m32727_gshared (Func_1_t6115 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m32727(__this, ___object, ___method, method) (( void (*) (Func_1_t6115 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m32727_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Byte>::Invoke()
extern "C" uint8_t Func_1_Invoke_m32728_gshared (Func_1_t6115 * __this, const MethodInfo* method);
#define Func_1_Invoke_m32728(__this, method) (( uint8_t (*) (Func_1_t6115 *, const MethodInfo*))Func_1_Invoke_m32728_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Byte>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m32729_gshared (Func_1_t6115 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m32729(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t6115 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m32729_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_1_EndInvoke_m32730_gshared (Func_1_t6115 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m32730(__this, ___result, method) (( uint8_t (*) (Func_1_t6115 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m32730_gshared)(__this, ___result, method)
