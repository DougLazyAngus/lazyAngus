#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3790;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m24278_gshared (Predicate_1_t3790 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m24278(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3790 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m24278_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m24279_gshared (Predicate_1_t3790 * __this, UIVertex_t840  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m24279(__this, ___obj, method) (( bool (*) (Predicate_1_t3790 *, UIVertex_t840 , const MethodInfo*))Predicate_1_Invoke_m24279_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m24280_gshared (Predicate_1_t3790 * __this, UIVertex_t840  ___obj, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m24280(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3790 *, UIVertex_t840 , AsyncCallback_t344 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24280_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m24281_gshared (Predicate_1_t3790 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m24281(__this, ___result, method) (( bool (*) (Predicate_1_t3790 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24281_gshared)(__this, ___result, method)
