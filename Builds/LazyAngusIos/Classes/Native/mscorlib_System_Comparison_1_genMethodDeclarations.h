#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t735;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m5146_gshared (Comparison_1_t735 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m5146(__this, ___object, ___method, method) (( void (*) (Comparison_1_t735 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m5146_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m22881_gshared (Comparison_1_t735 * __this, RaycastResult_t769  ___x, RaycastResult_t769  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m22881(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t735 *, RaycastResult_t769 , RaycastResult_t769 , const MethodInfo*))Comparison_1_Invoke_m22881_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m22882_gshared (Comparison_1_t735 * __this, RaycastResult_t769  ___x, RaycastResult_t769  ___y, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m22882(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t735 *, RaycastResult_t769 , RaycastResult_t769 , AsyncCallback_t344 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m22882_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m22883_gshared (Comparison_1_t735 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m22883(__this, ___result, method) (( int32_t (*) (Comparison_1_t735 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m22883_gshared)(__this, ___result, method)
