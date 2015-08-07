#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnionAssets.FLE.DataEventHandlerFunction>
struct Predicate_1_t5447;
// System.Object
struct Object_t;
// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t630;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnionAssets.FLE.DataEventHandlerFunction>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m22749(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5447 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21464_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnionAssets.FLE.DataEventHandlerFunction>::Invoke(T)
#define Predicate_1_Invoke_m22750(__this, ___obj, method) (( bool (*) (Predicate_1_t5447 *, DataEventHandlerFunction_t630 *, const MethodInfo*))Predicate_1_Invoke_m21465_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnionAssets.FLE.DataEventHandlerFunction>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m22751(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5447 *, DataEventHandlerFunction_t630 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21466_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnionAssets.FLE.DataEventHandlerFunction>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m22752(__this, ___result, method) (( bool (*) (Predicate_1_t5447 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21467_gshared)(__this, ___result, method)
