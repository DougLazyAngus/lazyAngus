﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t777;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m5441_gshared (Comparison_1_t777 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m5441(__this, ___object, ___method, method) (( void (*) (Comparison_1_t777 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m5441_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m26846_gshared (Comparison_1_t777 * __this, RaycastResult_t811  ___x, RaycastResult_t811  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m26846(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t777 *, RaycastResult_t811 , RaycastResult_t811 , const MethodInfo*))Comparison_1_Invoke_m26846_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m26847_gshared (Comparison_1_t777 * __this, RaycastResult_t811  ___x, RaycastResult_t811  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m26847(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t777 *, RaycastResult_t811 , RaycastResult_t811 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m26847_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m26848_gshared (Comparison_1_t777 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m26848(__this, ___result, method) (( int32_t (*) (Comparison_1_t777 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m26848_gshared)(__this, ___result, method)
