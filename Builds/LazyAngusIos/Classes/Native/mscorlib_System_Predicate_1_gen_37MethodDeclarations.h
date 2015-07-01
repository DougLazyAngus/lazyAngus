#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UI.Selectable>
struct Predicate_1_t3720;
// System.Object
struct Object_t;
// UnityEngine.UI.Selectable
struct Selectable_t693;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.UI.Selectable>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m23705(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3720 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16629_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UI.Selectable>::Invoke(T)
#define Predicate_1_Invoke_m23706(__this, ___obj, method) (( bool (*) (Predicate_1_t3720 *, Selectable_t693 *, const MethodInfo*))Predicate_1_Invoke_m16630_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UI.Selectable>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m23707(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3720 *, Selectable_t693 *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16631_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UI.Selectable>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m23708(__this, ___result, method) (( bool (*) (Predicate_1_t3720 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16632_gshared)(__this, ___result, method)
