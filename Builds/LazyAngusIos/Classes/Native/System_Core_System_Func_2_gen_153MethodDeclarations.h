#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int32,System.Int16>
struct Func_2_t6498;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int32,System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m37362_gshared (Func_2_t6498 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m37362(__this, ___object, ___method, method) (( void (*) (Func_2_t6498 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m37362_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int32,System.Int16>::Invoke(T)
extern "C" int16_t Func_2_Invoke_m37363_gshared (Func_2_t6498 * __this, int32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m37363(__this, ___arg1, method) (( int16_t (*) (Func_2_t6498 *, int32_t, const MethodInfo*))Func_2_Invoke_m37363_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int32,System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m37364_gshared (Func_2_t6498 * __this, int32_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m37364(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6498 *, int32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m37364_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int32,System.Int16>::EndInvoke(System.IAsyncResult)
extern "C" int16_t Func_2_EndInvoke_m37365_gshared (Func_2_t6498 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m37365(__this, ___result, method) (( int16_t (*) (Func_2_t6498 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m37365_gshared)(__this, ___result, method)
