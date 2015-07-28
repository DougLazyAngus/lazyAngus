﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt32,System.Object>
struct Func_2_t6254;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34654_gshared (Func_2_t6254 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m34654(__this, ___object, ___method, method) (( void (*) (Func_2_t6254 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m34654_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt32,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m34655_gshared (Func_2_t6254 * __this, uint32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m34655(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6254 *, uint32_t, const MethodInfo*))Func_2_Invoke_m34655_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt32,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m34656_gshared (Func_2_t6254 * __this, uint32_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m34656(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6254 *, uint32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m34656_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m34657_gshared (Func_2_t6254 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m34657(__this, ___result, method) (( Object_t * (*) (Func_2_t6254 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m34657_gshared)(__this, ___result, method)