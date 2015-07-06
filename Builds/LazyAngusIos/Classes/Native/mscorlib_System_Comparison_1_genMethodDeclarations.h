#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t655;
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
extern "C" void Comparison_1__ctor_m4384_gshared (Comparison_1_t655 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m4384(__this, ___object, ___method, method) (( void (*) (Comparison_1_t655 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m4384_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21754_gshared (Comparison_1_t655 * __this, RaycastResult_t689  ___x, RaycastResult_t689  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m21754(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t655 *, RaycastResult_t689 , RaycastResult_t689 , const MethodInfo*))Comparison_1_Invoke_m21754_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m21755_gshared (Comparison_1_t655 * __this, RaycastResult_t689  ___x, RaycastResult_t689  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m21755(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t655 *, RaycastResult_t689 , RaycastResult_t689 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21755_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21756_gshared (Comparison_1_t655 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m21756(__this, ___result, method) (( int32_t (*) (Comparison_1_t655 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21756_gshared)(__this, ___result, method)
