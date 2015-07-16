﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<FBScore>
struct Predicate_1_t3489;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t225;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<FBScore>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m19598(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3489 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16993_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<FBScore>::Invoke(T)
#define Predicate_1_Invoke_m19599(__this, ___obj, method) (( bool (*) (Predicate_1_t3489 *, FBScore_t225 *, const MethodInfo*))Predicate_1_Invoke_m16994_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<FBScore>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m19600(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3489 *, FBScore_t225 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16995_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<FBScore>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m19601(__this, ___result, method) (( bool (*) (Predicate_1_t3489 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16996_gshared)(__this, ___result, method)
