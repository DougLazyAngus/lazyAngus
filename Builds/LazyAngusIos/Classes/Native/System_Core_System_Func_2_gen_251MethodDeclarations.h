﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.Single>
struct Func_2_t6805;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Single>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.Single>
#include "System_Core_System_Func_2_gen_250MethodDeclarations.h"
#define Func_2__ctor_m41364(__this, ___object, ___method, method) (( void (*) (Func_2_t6805 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m41345_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Single>::Invoke(T)
#define Func_2_Invoke_m41365(__this, ___arg1, method) (( float (*) (Func_2_t6805 *, bool, const MethodInfo*))Func_2_Invoke_m41346_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m41366(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6805 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m41347_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Single>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m41367(__this, ___result, method) (( float (*) (Func_2_t6805 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m41348_gshared)(__this, ___result, method)
