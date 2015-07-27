﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Int32>
struct Predicate_1_t3657;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m22265_gshared (Predicate_1_t3657 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m22265(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3657 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m22265_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m22266_gshared (Predicate_1_t3657 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m22266(__this, ___obj, method) (( bool (*) (Predicate_1_t3657 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m22266_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m22267_gshared (Predicate_1_t3657 * __this, int32_t ___obj, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m22267(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3657 *, int32_t, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m22267_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m22268_gshared (Predicate_1_t3657 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m22268(__this, ___result, method) (( bool (*) (Predicate_1_t3657 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m22268_gshared)(__this, ___result, method)
