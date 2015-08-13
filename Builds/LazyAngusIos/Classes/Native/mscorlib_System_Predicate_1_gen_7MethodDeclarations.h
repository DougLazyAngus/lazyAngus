#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>
struct Predicate_1_t5481;
// System.Object
struct Object_t;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t675;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m22804(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5481 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21723_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>::Invoke(T)
#define Predicate_1_Invoke_m22805(__this, ___obj, method) (( bool (*) (Predicate_1_t5481 *, EventHandlerFunction_t675 *, const MethodInfo*))Predicate_1_Invoke_m21724_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m22806(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5481 *, EventHandlerFunction_t675 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21725_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnionAssets.FLE.EventHandlerFunction>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m22807(__this, ___result, method) (( bool (*) (Predicate_1_t5481 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21726_gshared)(__this, ___result, method)
