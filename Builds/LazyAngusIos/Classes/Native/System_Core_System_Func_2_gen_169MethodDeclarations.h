#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt64,System.UInt16>
struct Func_2_t6590;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt64,System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m38503_gshared (Func_2_t6590 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m38503(__this, ___object, ___method, method) (( void (*) (Func_2_t6590 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m38503_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt64,System.UInt16>::Invoke(T)
extern "C" uint16_t Func_2_Invoke_m38504_gshared (Func_2_t6590 * __this, uint64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m38504(__this, ___arg1, method) (( uint16_t (*) (Func_2_t6590 *, uint64_t, const MethodInfo*))Func_2_Invoke_m38504_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt64,System.UInt16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m38505_gshared (Func_2_t6590 * __this, uint64_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m38505(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6590 *, uint64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m38505_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt64,System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C" uint16_t Func_2_EndInvoke_m38506_gshared (Func_2_t6590 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m38506(__this, ___result, method) (( uint16_t (*) (Func_2_t6590 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m38506_gshared)(__this, ___result, method)
