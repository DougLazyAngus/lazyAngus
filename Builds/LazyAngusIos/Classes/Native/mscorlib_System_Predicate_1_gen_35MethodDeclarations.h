#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t5770;
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
extern "C" void Predicate_1__ctor_m28393_gshared (Predicate_1_t5770 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m28393(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5770 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m28393_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m28394_gshared (Predicate_1_t5770 * __this, UIVertex_t890  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m28394(__this, ___obj, method) (( bool (*) (Predicate_1_t5770 *, UIVertex_t890 , const MethodInfo*))Predicate_1_Invoke_m28394_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m28395_gshared (Predicate_1_t5770 * __this, UIVertex_t890  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m28395(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5770 *, UIVertex_t890 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m28395_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m28396_gshared (Predicate_1_t5770 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m28396(__this, ___result, method) (( bool (*) (Predicate_1_t5770 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m28396_gshared)(__this, ___result, method)
