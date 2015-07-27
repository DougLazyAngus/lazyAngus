#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3793;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m24295_gshared (Comparison_1_t3793 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m24295(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3793 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m24295_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m24296_gshared (Comparison_1_t3793 * __this, UIVertex_t841  ___x, UIVertex_t841  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m24296(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3793 *, UIVertex_t841 , UIVertex_t841 , const MethodInfo*))Comparison_1_Invoke_m24296_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m24297_gshared (Comparison_1_t3793 * __this, UIVertex_t841  ___x, UIVertex_t841  ___y, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m24297(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3793 *, UIVertex_t841 , UIVertex_t841 , AsyncCallback_t346 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m24297_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m24298_gshared (Comparison_1_t3793 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m24298(__this, ___result, method) (( int32_t (*) (Comparison_1_t3793 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m24298_gshared)(__this, ___result, method)
