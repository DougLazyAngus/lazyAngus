#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t5700;
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

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m27238_gshared (Predicate_1_t5700 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m27238(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5700 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m27238_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m27239_gshared (Predicate_1_t5700 * __this, RaycastResult_t811  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m27239(__this, ___obj, method) (( bool (*) (Predicate_1_t5700 *, RaycastResult_t811 , const MethodInfo*))Predicate_1_Invoke_m27239_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m27240_gshared (Predicate_1_t5700 * __this, RaycastResult_t811  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m27240(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5700 *, RaycastResult_t811 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m27240_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m27241_gshared (Predicate_1_t5700 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m27241(__this, ___result, method) (( bool (*) (Predicate_1_t5700 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m27241_gshared)(__this, ___result, method)
