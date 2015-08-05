#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t786;
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
extern "C" void Comparison_1__ctor_m5516_gshared (Comparison_1_t786 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m5516(__this, ___object, ___method, method) (( void (*) (Comparison_1_t786 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m5516_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m26921_gshared (Comparison_1_t786 * __this, RaycastResult_t820  ___x, RaycastResult_t820  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m26921(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t786 *, RaycastResult_t820 , RaycastResult_t820 , const MethodInfo*))Comparison_1_Invoke_m26921_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m26922_gshared (Comparison_1_t786 * __this, RaycastResult_t820  ___x, RaycastResult_t820  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m26922(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t786 *, RaycastResult_t820 , RaycastResult_t820 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m26922_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m26923_gshared (Comparison_1_t786 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m26923(__this, ___result, method) (( int32_t (*) (Comparison_1_t786 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m26923_gshared)(__this, ___result, method)
