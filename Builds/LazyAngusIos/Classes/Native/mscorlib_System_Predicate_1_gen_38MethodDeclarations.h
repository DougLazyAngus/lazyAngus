#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t3726;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t465;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.CanvasGroup>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m23799(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3726 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16629_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.CanvasGroup>::Invoke(T)
#define Predicate_1_Invoke_m23800(__this, ___obj, method) (( bool (*) (Predicate_1_t3726 *, CanvasGroup_t465 *, const MethodInfo*))Predicate_1_Invoke_m16630_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.CanvasGroup>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m23801(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3726 *, CanvasGroup_t465 *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16631_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.CanvasGroup>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m23802(__this, ___result, method) (( bool (*) (Predicate_1_t3726 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16632_gshared)(__this, ___result, method)
