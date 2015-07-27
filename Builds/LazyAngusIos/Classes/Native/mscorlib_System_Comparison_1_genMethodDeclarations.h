#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t736;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m5153_gshared (Comparison_1_t736 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m5153(__this, ___object, ___method, method) (( void (*) (Comparison_1_t736 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m5153_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m22888_gshared (Comparison_1_t736 * __this, RaycastResult_t770  ___x, RaycastResult_t770  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m22888(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t736 *, RaycastResult_t770 , RaycastResult_t770 , const MethodInfo*))Comparison_1_Invoke_m22888_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m22889_gshared (Comparison_1_t736 * __this, RaycastResult_t770  ___x, RaycastResult_t770  ___y, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m22889(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t736 *, RaycastResult_t770 , RaycastResult_t770 , AsyncCallback_t346 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m22889_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m22890_gshared (Comparison_1_t736 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m22890(__this, ___result, method) (( int32_t (*) (Comparison_1_t736 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m22890_gshared)(__this, ___result, method)
