#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t2962;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2883;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m10196(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2962 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21722_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T)
#define Predicate_1_Invoke_m62830(__this, ___obj, method) (( bool (*) (Predicate_1_t2962 *, BaseInvokableCall_t2883 *, const MethodInfo*))Predicate_1_Invoke_m21723_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m62831(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2962 *, BaseInvokableCall_t2883 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21724_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m62832(__this, ___result, method) (( bool (*) (Predicate_1_t2962 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21725_gshared)(__this, ___result, method)
