﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int16,System.Int32>
struct Func_2_t6491;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int16,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m37549_gshared (Func_2_t6491 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m37549(__this, ___object, ___method, method) (( void (*) (Func_2_t6491 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m37549_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int16,System.Int32>::Invoke(T)
extern "C" int32_t Func_2_Invoke_m37550_gshared (Func_2_t6491 * __this, int16_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m37550(__this, ___arg1, method) (( int32_t (*) (Func_2_t6491 *, int16_t, const MethodInfo*))Func_2_Invoke_m37550_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int16,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m37551_gshared (Func_2_t6491 * __this, int16_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m37551(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6491 *, int16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m37551_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int16,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Func_2_EndInvoke_m37552_gshared (Func_2_t6491 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m37552(__this, ___result, method) (( int32_t (*) (Func_2_t6491 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m37552_gshared)(__this, ___result, method)