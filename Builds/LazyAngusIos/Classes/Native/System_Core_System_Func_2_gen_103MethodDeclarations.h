﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt16,System.Object>
struct Func_2_t6247;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt16,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34590_gshared (Func_2_t6247 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m34590(__this, ___object, ___method, method) (( void (*) (Func_2_t6247 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m34590_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt16,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m34591_gshared (Func_2_t6247 * __this, uint16_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m34591(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6247 *, uint16_t, const MethodInfo*))Func_2_Invoke_m34591_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt16,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m34592_gshared (Func_2_t6247 * __this, uint16_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m34592(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6247 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m34592_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt16,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m34593_gshared (Func_2_t6247 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m34593(__this, ___result, method) (( Object_t * (*) (Func_2_t6247 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m34593_gshared)(__this, ___result, method)