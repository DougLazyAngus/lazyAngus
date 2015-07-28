﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.Int16>
struct Func_2_t6403;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Int16>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.Int16>
#include "System_Core_System_Func_2_gen_148MethodDeclarations.h"
#define Func_2__ctor_m36490(__this, ___object, ___method, method) (( void (*) (Func_2_t6403 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m36471_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Int16>::Invoke(T)
#define Func_2_Invoke_m36491(__this, ___arg1, method) (( int16_t (*) (Func_2_t6403 *, bool, const MethodInfo*))Func_2_Invoke_m36472_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m36492(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6403 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m36473_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Int16>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m36493(__this, ___result, method) (( int16_t (*) (Func_2_t6403 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m36474_gshared)(__this, ___result, method)