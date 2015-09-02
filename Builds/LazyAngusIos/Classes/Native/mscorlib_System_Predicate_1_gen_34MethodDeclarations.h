#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t5823;
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
extern "C" void Predicate_1__ctor_m28469_gshared (Predicate_1_t5823 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m28469(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5823 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m28469_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m28470_gshared (Predicate_1_t5823 * __this, RaycastResult_t894  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m28470(__this, ___obj, method) (( bool (*) (Predicate_1_t5823 *, RaycastResult_t894 , const MethodInfo*))Predicate_1_Invoke_m28470_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m28471_gshared (Predicate_1_t5823 * __this, RaycastResult_t894  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m28471(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5823 *, RaycastResult_t894 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m28471_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m28472_gshared (Predicate_1_t5823 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m28472(__this, ___result, method) (( bool (*) (Predicate_1_t5823 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m28472_gshared)(__this, ___result, method)
