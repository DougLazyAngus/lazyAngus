﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Canvas>
struct Predicate_1_t3728;
// System.Object
struct Object_t;
// UnityEngine.Canvas
struct Canvas_t375;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Canvas>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m23420(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3728 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16957_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Canvas>::Invoke(T)
#define Predicate_1_Invoke_m23421(__this, ___obj, method) (( bool (*) (Predicate_1_t3728 *, Canvas_t375 *, const MethodInfo*))Predicate_1_Invoke_m16958_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Canvas>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m23422(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3728 *, Canvas_t375 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16959_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Canvas>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m23423(__this, ___result, method) (( bool (*) (Predicate_1_t3728 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16960_gshared)(__this, ___result, method)