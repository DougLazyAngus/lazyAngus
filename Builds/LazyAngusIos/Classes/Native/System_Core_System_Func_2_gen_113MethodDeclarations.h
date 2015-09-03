#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.SByte,System.Byte>
struct Func_2_t6954;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.SByte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m40588_gshared (Func_2_t6954 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m40588(__this, ___object, ___method, method) (( void (*) (Func_2_t6954 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40588_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.SByte,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m40589_gshared (Func_2_t6954 * __this, int8_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m40589(__this, ___arg1, method) (( uint8_t (*) (Func_2_t6954 *, int8_t, const MethodInfo*))Func_2_Invoke_m40589_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.SByte,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m40590_gshared (Func_2_t6954 * __this, int8_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m40590(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6954 *, int8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40590_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.SByte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m40591_gshared (Func_2_t6954 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m40591(__this, ___result, method) (( uint8_t (*) (Func_2_t6954 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40591_gshared)(__this, ___result, method)
