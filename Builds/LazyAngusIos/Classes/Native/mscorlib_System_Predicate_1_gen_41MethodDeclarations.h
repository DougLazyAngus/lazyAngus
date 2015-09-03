#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t6415;
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
extern "C" void Predicate_1__ctor_m33770_gshared (Predicate_1_t6415 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m33770(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6415 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m33770_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m33771_gshared (Predicate_1_t6415 * __this, UIVertex_t965  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m33771(__this, ___obj, method) (( bool (*) (Predicate_1_t6415 *, UIVertex_t965 , const MethodInfo*))Predicate_1_Invoke_m33771_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m33772_gshared (Predicate_1_t6415 * __this, UIVertex_t965  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m33772(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6415 *, UIVertex_t965 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m33772_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m33773_gshared (Predicate_1_t6415 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m33773(__this, ___result, method) (( bool (*) (Predicate_1_t6415 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m33773_gshared)(__this, ___result, method)
