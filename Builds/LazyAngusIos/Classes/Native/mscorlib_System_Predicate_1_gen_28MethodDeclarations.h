#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t5711;
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
extern "C" void Predicate_1__ctor_m27313_gshared (Predicate_1_t5711 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m27313(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5711 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m27313_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m27314_gshared (Predicate_1_t5711 * __this, RaycastResult_t820  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m27314(__this, ___obj, method) (( bool (*) (Predicate_1_t5711 *, RaycastResult_t820 , const MethodInfo*))Predicate_1_Invoke_m27314_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m27315_gshared (Predicate_1_t5711 * __this, RaycastResult_t820  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m27315(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5711 *, RaycastResult_t820 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m27315_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m27316_gshared (Predicate_1_t5711 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m27316(__this, ___result, method) (( bool (*) (Predicate_1_t5711 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m27316_gshared)(__this, ___result, method)
