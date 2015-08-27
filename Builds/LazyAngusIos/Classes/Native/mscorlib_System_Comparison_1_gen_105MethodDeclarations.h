﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t8575;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t2887;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m62862(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8575 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21770_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
#define Comparison_1_Invoke_m62863(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8575 *, PersistentCall_t2887 *, PersistentCall_t2887 *, const MethodInfo*))Comparison_1_Invoke_m21771_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m62864(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8575 *, PersistentCall_t2887 *, PersistentCall_t2887 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21772_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m62865(__this, ___result, method) (( int32_t (*) (Comparison_1_t8575 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21773_gshared)(__this, ___result, method)
