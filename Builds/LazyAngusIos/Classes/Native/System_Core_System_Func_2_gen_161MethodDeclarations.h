#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Byte,System.UInt16>
struct Func_2_t6537;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Byte,System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m37890_gshared (Func_2_t6537 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m37890(__this, ___object, ___method, method) (( void (*) (Func_2_t6537 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m37890_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Byte,System.UInt16>::Invoke(T)
extern "C" uint16_t Func_2_Invoke_m37891_gshared (Func_2_t6537 * __this, uint8_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m37891(__this, ___arg1, method) (( uint16_t (*) (Func_2_t6537 *, uint8_t, const MethodInfo*))Func_2_Invoke_m37891_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Byte,System.UInt16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m37892_gshared (Func_2_t6537 * __this, uint8_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m37892(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6537 *, uint8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m37892_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Byte,System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C" uint16_t Func_2_EndInvoke_m37893_gshared (Func_2_t6537 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m37893(__this, ___result, method) (( uint16_t (*) (Func_2_t6537 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m37893_gshared)(__this, ___result, method)
