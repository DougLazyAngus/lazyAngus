﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int64,System.Single>
struct Func_2_t6824;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int64,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m41559_gshared (Func_2_t6824 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m41559(__this, ___object, ___method, method) (( void (*) (Func_2_t6824 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m41559_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int64,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m41560_gshared (Func_2_t6824 * __this, int64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m41560(__this, ___arg1, method) (( float (*) (Func_2_t6824 *, int64_t, const MethodInfo*))Func_2_Invoke_m41560_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int64,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m41561_gshared (Func_2_t6824 * __this, int64_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m41561(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6824 *, int64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m41561_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int64,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m41562_gshared (Func_2_t6824 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m41562(__this, ___result, method) (( float (*) (Func_2_t6824 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m41562_gshared)(__this, ___result, method)
