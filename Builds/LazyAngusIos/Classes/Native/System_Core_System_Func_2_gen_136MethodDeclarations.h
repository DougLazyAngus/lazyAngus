﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.SByte>
struct Func_2_t6356;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.SByte>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.SByte>
#include "System_Core_System_Func_2_gen_135MethodDeclarations.h"
#define Func_2__ctor_m35907(__this, ___object, ___method, method) (( void (*) (Func_2_t6356 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35888_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.SByte>::Invoke(T)
#define Func_2_Invoke_m35908(__this, ___arg1, method) (( int8_t (*) (Func_2_t6356 *, bool, const MethodInfo*))Func_2_Invoke_m35889_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m35909(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6356 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35890_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.SByte>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m35910(__this, ___result, method) (( int8_t (*) (Func_2_t6356 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35891_gshared)(__this, ___result, method)