#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t864;
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
extern "C" void Comparison_1__ctor_m5942_gshared (Comparison_1_t864 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m5942(__this, ___object, ___method, method) (( void (*) (Comparison_1_t864 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m5942_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m32323_gshared (Comparison_1_t864 * __this, RaycastResult_t898  ___x, RaycastResult_t898  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m32323(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t864 *, RaycastResult_t898 , RaycastResult_t898 , const MethodInfo*))Comparison_1_Invoke_m32323_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m32324_gshared (Comparison_1_t864 * __this, RaycastResult_t898  ___x, RaycastResult_t898  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m32324(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t864 *, RaycastResult_t898 , RaycastResult_t898 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m32324_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m32325_gshared (Comparison_1_t864 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m32325(__this, ___result, method) (( int32_t (*) (Comparison_1_t864 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m32325_gshared)(__this, ___result, method)
