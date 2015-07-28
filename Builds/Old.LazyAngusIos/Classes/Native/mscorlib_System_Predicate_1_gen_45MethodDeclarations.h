﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3853;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m25199_gshared (Predicate_1_t3853 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m25199(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3853 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m25199_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m25200_gshared (Predicate_1_t3853 * __this, UICharInfo_t914  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m25200(__this, ___obj, method) (( bool (*) (Predicate_1_t3853 *, UICharInfo_t914 , const MethodInfo*))Predicate_1_Invoke_m25200_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m25201_gshared (Predicate_1_t3853 * __this, UICharInfo_t914  ___obj, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m25201(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3853 *, UICharInfo_t914 , AsyncCallback_t387 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m25201_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m25202_gshared (Predicate_1_t3853 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m25202(__this, ___result, method) (( bool (*) (Predicate_1_t3853 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m25202_gshared)(__this, ___result, method)