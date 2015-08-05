#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
struct Predicate_1_t5717;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t820;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m27413(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5717 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21479_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::Invoke(T)
#define Predicate_1_Invoke_m27414(__this, ___obj, method) (( bool (*) (Predicate_1_t5717 *, BaseRaycaster_t820 *, const MethodInfo*))Predicate_1_Invoke_m21480_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m27415(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5717 *, BaseRaycaster_t820 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21481_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m27416(__this, ___result, method) (( bool (*) (Predicate_1_t5717 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21482_gshared)(__this, ___result, method)
