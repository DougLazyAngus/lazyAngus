﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Boolean>
struct Func_1_t458;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_6MethodDeclarations.h"
#define Func_1__ctor_m7650(__this, ___object, ___method, method) (( void (*) (Func_1_t458 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m26264_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Boolean>::Invoke()
#define Func_1_Invoke_m26265(__this, method) (( bool (*) (Func_1_t458 *, const MethodInfo*))Func_1_Invoke_m26266_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Boolean>::BeginInvoke(System.AsyncCallback,System.Object)
#define Func_1_BeginInvoke_m26267(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t458 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m26268_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_1_EndInvoke_m26269(__this, ___result, method) (( bool (*) (Func_1_t458 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m26270_gshared)(__this, ___result, method)
