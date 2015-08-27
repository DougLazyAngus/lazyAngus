﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.UInt32>
struct Func_2_t6620;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.UInt32>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.UInt32>
#include "System_Core_System_Func_2_gen_186MethodDeclarations.h"
#define Func_2__ctor_m38945(__this, ___object, ___method, method) (( void (*) (Func_2_t6620 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m38926_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.UInt32>::Invoke(T)
#define Func_2_Invoke_m38946(__this, ___arg1, method) (( uint32_t (*) (Func_2_t6620 *, bool, const MethodInfo*))Func_2_Invoke_m38927_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m38947(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6620 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m38928_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.UInt32>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m38948(__this, ___result, method) (( uint32_t (*) (Func_2_t6620 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m38929_gshared)(__this, ___result, method)
