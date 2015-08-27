﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.UInt16>
struct Func_2_t6539;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.UInt16>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.UInt16>
#include "System_Core_System_Func_2_gen_161MethodDeclarations.h"
#define Func_2__ctor_m37941(__this, ___object, ___method, method) (( void (*) (Func_2_t6539 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m37922_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.UInt16>::Invoke(T)
#define Func_2_Invoke_m37942(__this, ___arg1, method) (( uint16_t (*) (Func_2_t6539 *, bool, const MethodInfo*))Func_2_Invoke_m37923_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.UInt16>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m37943(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6539 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m37924_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.UInt16>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m37944(__this, ___result, method) (( uint16_t (*) (Func_2_t6539 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m37925_gshared)(__this, ___result, method)
