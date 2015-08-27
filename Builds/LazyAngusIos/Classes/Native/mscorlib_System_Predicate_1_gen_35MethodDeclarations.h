﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Transform>
struct Predicate_1_t5812;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t406;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m28490(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5812 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21742_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::Invoke(T)
#define Predicate_1_Invoke_m28491(__this, ___obj, method) (( bool (*) (Predicate_1_t5812 *, Transform_t406 *, const MethodInfo*))Predicate_1_Invoke_m21743_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Transform>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m28492(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5812 *, Transform_t406 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21744_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m28493(__this, ___result, method) (( bool (*) (Predicate_1_t5812 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21745_gshared)(__this, ___result, method)
