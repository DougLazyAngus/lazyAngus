#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t1351;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1261;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m7258(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1351 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17545_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T)
#define Predicate_1_Invoke_m28220(__this, ___obj, method) (( bool (*) (Predicate_1_t1351 *, BaseInvokableCall_t1261 *, const MethodInfo*))Predicate_1_Invoke_m17546_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m28221(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1351 *, BaseInvokableCall_t1261 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17547_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m28222(__this, ___result, method) (( bool (*) (Predicate_1_t1351 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17548_gshared)(__this, ___result, method)
