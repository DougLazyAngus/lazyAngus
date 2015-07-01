#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<SimpleJSON.JSONNode>
struct Predicate_1_t3286;
// System.Object
struct Object_t;
// SimpleJSON.JSONNode
struct JSONNode_t2;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<SimpleJSON.JSONNode>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m16693(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3286 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16629_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<SimpleJSON.JSONNode>::Invoke(T)
#define Predicate_1_Invoke_m16694(__this, ___obj, method) (( bool (*) (Predicate_1_t3286 *, JSONNode_t2 *, const MethodInfo*))Predicate_1_Invoke_m16630_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<SimpleJSON.JSONNode>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m16695(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3286 *, JSONNode_t2 *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16631_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<SimpleJSON.JSONNode>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m16696(__this, ___result, method) (( bool (*) (Predicate_1_t3286 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16632_gshared)(__this, ___result, method)
