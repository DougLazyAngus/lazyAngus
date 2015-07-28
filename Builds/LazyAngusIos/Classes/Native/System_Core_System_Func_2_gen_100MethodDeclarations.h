﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.Object>
struct Func_2_t6226;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.Object>
#include "System_Core_System_Func_2_gen_99MethodDeclarations.h"
#define Func_2__ctor_m34488(__this, ___object, ___method, method) (( void (*) (Func_2_t6226 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m34469_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Object>::Invoke(T)
#define Func_2_Invoke_m34489(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6226 *, bool, const MethodInfo*))Func_2_Invoke_m34470_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m34490(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6226 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m34471_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m34491(__this, ___result, method) (( Object_t * (*) (Func_2_t6226 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m34472_gshared)(__this, ___result, method)
