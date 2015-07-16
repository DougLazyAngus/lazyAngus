#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3724;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m23248_gshared (Predicate_1_t3724 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m23248(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3724 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23248_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m23249_gshared (Predicate_1_t3724 * __this, UIVertex_t793  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m23249(__this, ___obj, method) (( bool (*) (Predicate_1_t3724 *, UIVertex_t793 , const MethodInfo*))Predicate_1_Invoke_m23249_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m23250_gshared (Predicate_1_t3724 * __this, UIVertex_t793  ___obj, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m23250(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3724 *, UIVertex_t793 , AsyncCallback_t387 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m23250_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m23251_gshared (Predicate_1_t3724 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m23251(__this, ___result, method) (( bool (*) (Predicate_1_t3724 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m23251_gshared)(__this, ___result, method)
