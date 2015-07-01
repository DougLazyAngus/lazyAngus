#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t3611;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m21963_gshared (Predicate_1_t3611 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m21963(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3611 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21963_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m21964_gshared (Predicate_1_t3611 * __this, RaycastResult_t666  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m21964(__this, ___obj, method) (( bool (*) (Predicate_1_t3611 *, RaycastResult_t666 , const MethodInfo*))Predicate_1_Invoke_m21964_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m21965_gshared (Predicate_1_t3611 * __this, RaycastResult_t666  ___obj, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m21965(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3611 *, RaycastResult_t666 , AsyncCallback_t389 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21965_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m21966_gshared (Predicate_1_t3611 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m21966(__this, ___result, method) (( bool (*) (Predicate_1_t3611 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21966_gshared)(__this, ___result, method)
