#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t5707;
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
extern "C" void Predicate_1__ctor_m27285_gshared (Predicate_1_t5707 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m27285(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5707 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m27285_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m27286_gshared (Predicate_1_t5707 * __this, RaycastResult_t817  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m27286(__this, ___obj, method) (( bool (*) (Predicate_1_t5707 *, RaycastResult_t817 , const MethodInfo*))Predicate_1_Invoke_m27286_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m27287_gshared (Predicate_1_t5707 * __this, RaycastResult_t817  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m27287(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5707 *, RaycastResult_t817 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m27287_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m27288_gshared (Predicate_1_t5707 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m27288(__this, ___result, method) (( bool (*) (Predicate_1_t5707 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m27288_gshared)(__this, ___result, method)
