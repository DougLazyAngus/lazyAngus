#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3696;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m23151_gshared (Predicate_1_t3696 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m23151(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3696 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23151_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m23152_gshared (Predicate_1_t3696 * __this, UIVertex_t760  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m23152(__this, ___obj, method) (( bool (*) (Predicate_1_t3696 *, UIVertex_t760 , const MethodInfo*))Predicate_1_Invoke_m23152_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m23153_gshared (Predicate_1_t3696 * __this, UIVertex_t760  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m23153(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3696 *, UIVertex_t760 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m23153_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m23154_gshared (Predicate_1_t3696 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m23154(__this, ___result, method) (( bool (*) (Predicate_1_t3696 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m23154_gshared)(__this, ___result, method)
