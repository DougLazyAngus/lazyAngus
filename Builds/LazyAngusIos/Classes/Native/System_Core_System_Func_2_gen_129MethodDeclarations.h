﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.Boolean>
struct Func_2_t6332;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Double,System.Byte>
#include "System_Core_System_Func_2_gen_128MethodDeclarations.h"
#define Func_2__ctor_m35564(__this, ___object, ___method, method) (( void (*) (Func_2_t6332 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35545_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m35565(__this, ___arg1, method) (( bool (*) (Func_2_t6332 *, double, const MethodInfo*))Func_2_Invoke_m35546_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m35566(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6332 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35547_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m35567(__this, ___result, method) (( bool (*) (Func_2_t6332 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35548_gshared)(__this, ___result, method)
