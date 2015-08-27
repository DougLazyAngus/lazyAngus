﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.Int64>
struct Func_2_t6664;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Int64>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.Int64>
#include "System_Core_System_Func_2_gen_199MethodDeclarations.h"
#define Func_2__ctor_m39517(__this, ___object, ___method, method) (( void (*) (Func_2_t6664 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39498_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Int64>::Invoke(T)
#define Func_2_Invoke_m39518(__this, ___arg1, method) (( int64_t (*) (Func_2_t6664 *, bool, const MethodInfo*))Func_2_Invoke_m39499_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39519(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6664 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39500_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Int64>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39520(__this, ___result, method) (( int64_t (*) (Func_2_t6664 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39501_gshared)(__this, ___result, method)
