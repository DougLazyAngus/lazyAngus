#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t5822;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t599;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.CanvasGroup>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m29232(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5822 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21448_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.CanvasGroup>::Invoke(T)
#define Predicate_1_Invoke_m29233(__this, ___obj, method) (( bool (*) (Predicate_1_t5822 *, CanvasGroup_t599 *, const MethodInfo*))Predicate_1_Invoke_m21449_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.CanvasGroup>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m29234(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5822 *, CanvasGroup_t599 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21450_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.CanvasGroup>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m29235(__this, ___result, method) (( bool (*) (Predicate_1_t5822 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21451_gshared)(__this, ___result, method)
