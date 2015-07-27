#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3791;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m24281_gshared (Predicate_1_t3791 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m24281(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3791 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m24281_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m24282_gshared (Predicate_1_t3791 * __this, UIVertex_t841  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m24282(__this, ___obj, method) (( bool (*) (Predicate_1_t3791 *, UIVertex_t841 , const MethodInfo*))Predicate_1_Invoke_m24282_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m24283_gshared (Predicate_1_t3791 * __this, UIVertex_t841  ___obj, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m24283(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3791 *, UIVertex_t841 , AsyncCallback_t346 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24283_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m24284_gshared (Predicate_1_t3791 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m24284(__this, ___result, method) (( bool (*) (Predicate_1_t3791 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24284_gshared)(__this, ___result, method)
