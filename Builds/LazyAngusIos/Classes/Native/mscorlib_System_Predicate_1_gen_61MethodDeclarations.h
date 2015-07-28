﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Boolean>
struct Predicate_1_t6844;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Byte>
#include "mscorlib_System_Predicate_1_gen_51MethodDeclarations.h"
#define Predicate_1__ctor_m42084(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6844 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m35010_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Boolean>::Invoke(T)
#define Predicate_1_Invoke_m42085(__this, ___obj, method) (( bool (*) (Predicate_1_t6844 *, bool, const MethodInfo*))Predicate_1_Invoke_m35011_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m42086(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6844 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m35012_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m42087(__this, ___result, method) (( bool (*) (Predicate_1_t6844 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m35013_gshared)(__this, ___result, method)