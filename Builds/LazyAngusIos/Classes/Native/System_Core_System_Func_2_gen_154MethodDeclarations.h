#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt32,System.Int16>
struct Func_2_t6427;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt32,System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m36697_gshared (Func_2_t6427 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m36697(__this, ___object, ___method, method) (( void (*) (Func_2_t6427 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36697_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt32,System.Int16>::Invoke(T)
extern "C" int16_t Func_2_Invoke_m36698_gshared (Func_2_t6427 * __this, uint32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m36698(__this, ___arg1, method) (( int16_t (*) (Func_2_t6427 *, uint32_t, const MethodInfo*))Func_2_Invoke_m36698_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt32,System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m36699_gshared (Func_2_t6427 * __this, uint32_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m36699(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6427 *, uint32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36699_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt32,System.Int16>::EndInvoke(System.IAsyncResult)
extern "C" int16_t Func_2_EndInvoke_m36700_gshared (Func_2_t6427 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m36700(__this, ___result, method) (( int16_t (*) (Func_2_t6427 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36700_gshared)(__this, ___result, method)
