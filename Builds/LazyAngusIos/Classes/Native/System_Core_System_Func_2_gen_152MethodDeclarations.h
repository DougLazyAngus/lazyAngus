#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt16,System.Int16>
struct Func_2_t6414;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt16,System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m36580_gshared (Func_2_t6414 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m36580(__this, ___object, ___method, method) (( void (*) (Func_2_t6414 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36580_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt16,System.Int16>::Invoke(T)
extern "C" int16_t Func_2_Invoke_m36581_gshared (Func_2_t6414 * __this, uint16_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m36581(__this, ___arg1, method) (( int16_t (*) (Func_2_t6414 *, uint16_t, const MethodInfo*))Func_2_Invoke_m36581_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt16,System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m36582_gshared (Func_2_t6414 * __this, uint16_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m36582(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6414 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36582_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt16,System.Int16>::EndInvoke(System.IAsyncResult)
extern "C" int16_t Func_2_EndInvoke_m36583_gshared (Func_2_t6414 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m36583(__this, ___result, method) (( int16_t (*) (Func_2_t6414 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36583_gshared)(__this, ___result, method)
