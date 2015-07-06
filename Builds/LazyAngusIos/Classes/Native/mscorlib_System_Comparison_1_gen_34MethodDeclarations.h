﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3698;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m23161_gshared (Comparison_1_t3698 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m23161(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3698 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m23161_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m23162_gshared (Comparison_1_t3698 * __this, UIVertex_t760  ___x, UIVertex_t760  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m23162(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3698 *, UIVertex_t760 , UIVertex_t760 , const MethodInfo*))Comparison_1_Invoke_m23162_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m23163_gshared (Comparison_1_t3698 * __this, UIVertex_t760  ___x, UIVertex_t760  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m23163(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3698 *, UIVertex_t760 , UIVertex_t760 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m23163_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m23164_gshared (Comparison_1_t3698 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m23164(__this, ___result, method) (( int32_t (*) (Comparison_1_t3698 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m23164_gshared)(__this, ___result, method)
