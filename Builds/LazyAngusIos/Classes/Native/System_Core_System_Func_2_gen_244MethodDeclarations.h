#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt32,System.Double>
struct Func_2_t6706;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt32,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m40282_gshared (Func_2_t6706 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m40282(__this, ___object, ___method, method) (( void (*) (Func_2_t6706 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40282_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt32,System.Double>::Invoke(T)
extern "C" double Func_2_Invoke_m40283_gshared (Func_2_t6706 * __this, uint32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m40283(__this, ___arg1, method) (( double (*) (Func_2_t6706 *, uint32_t, const MethodInfo*))Func_2_Invoke_m40283_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt32,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m40284_gshared (Func_2_t6706 * __this, uint32_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m40284(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6706 *, uint32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40284_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt32,System.Double>::EndInvoke(System.IAsyncResult)
extern "C" double Func_2_EndInvoke_m40285_gshared (Func_2_t6706 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m40285(__this, ___result, method) (( double (*) (Func_2_t6706 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40285_gshared)(__this, ___result, method)
