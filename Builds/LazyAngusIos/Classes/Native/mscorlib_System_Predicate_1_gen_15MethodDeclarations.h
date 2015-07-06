﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<FBLikeInfo>
struct Predicate_1_t3477;
// System.Object
struct Object_t;
// FBLikeInfo
struct FBLikeInfo_t221;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<FBLikeInfo>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m19782(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3477 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16777_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<FBLikeInfo>::Invoke(T)
#define Predicate_1_Invoke_m19783(__this, ___obj, method) (( bool (*) (Predicate_1_t3477 *, FBLikeInfo_t221 *, const MethodInfo*))Predicate_1_Invoke_m16778_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<FBLikeInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m19784(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3477 *, FBLikeInfo_t221 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16779_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<FBLikeInfo>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m19785(__this, ___result, method) (( bool (*) (Predicate_1_t3477 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16780_gshared)(__this, ___result, method)
