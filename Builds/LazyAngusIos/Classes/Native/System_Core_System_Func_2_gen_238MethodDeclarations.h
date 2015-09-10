#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Byte,System.Double>
struct Func_2_t7347;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Byte,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m45586_gshared (Func_2_t7347 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m45586(__this, ___object, ___method, method) (( void (*) (Func_2_t7347 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m45586_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Byte,System.Double>::Invoke(T)
extern "C" double Func_2_Invoke_m45587_gshared (Func_2_t7347 * __this, uint8_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m45587(__this, ___arg1, method) (( double (*) (Func_2_t7347 *, uint8_t, const MethodInfo*))Func_2_Invoke_m45587_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Byte,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m45588_gshared (Func_2_t7347 * __this, uint8_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m45588(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7347 *, uint8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m45588_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Byte,System.Double>::EndInvoke(System.IAsyncResult)
extern "C" double Func_2_EndInvoke_m45589_gshared (Func_2_t7347 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m45589(__this, ___result, method) (( double (*) (Func_2_t7347 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m45589_gshared)(__this, ___result, method)
