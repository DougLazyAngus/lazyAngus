﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Int32>
struct Predicate_1_t3574;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m21178_gshared (Predicate_1_t3574 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m21178(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3574 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21178_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m21179_gshared (Predicate_1_t3574 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m21179(__this, ___obj, method) (( bool (*) (Predicate_1_t3574 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m21179_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m21180_gshared (Predicate_1_t3574 * __this, int32_t ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m21180(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3574 *, int32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21180_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m21181_gshared (Predicate_1_t3574 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m21181(__this, ___result, method) (( bool (*) (Predicate_1_t3574 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21181_gshared)(__this, ___result, method)
