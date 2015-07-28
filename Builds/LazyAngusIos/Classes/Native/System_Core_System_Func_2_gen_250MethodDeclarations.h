﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Byte,System.Single>
struct Func_2_t6717;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Byte,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m40477_gshared (Func_2_t6717 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m40477(__this, ___object, ___method, method) (( void (*) (Func_2_t6717 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40477_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Byte,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m40478_gshared (Func_2_t6717 * __this, uint8_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m40478(__this, ___arg1, method) (( float (*) (Func_2_t6717 *, uint8_t, const MethodInfo*))Func_2_Invoke_m40478_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Byte,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m40479_gshared (Func_2_t6717 * __this, uint8_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m40479(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6717 *, uint8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40479_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Byte,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m40480_gshared (Func_2_t6717 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m40480(__this, ___result, method) (( float (*) (Func_2_t6717 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40480_gshared)(__this, ___result, method)