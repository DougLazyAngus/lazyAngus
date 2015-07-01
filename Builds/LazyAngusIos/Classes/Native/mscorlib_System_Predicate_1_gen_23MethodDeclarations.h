#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Single>
struct Predicate_1_t3563;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m21223_gshared (Predicate_1_t3563 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m21223(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3563 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21223_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Single>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m21224_gshared (Predicate_1_t3563 * __this, float ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m21224(__this, ___obj, method) (( bool (*) (Predicate_1_t3563 *, float, const MethodInfo*))Predicate_1_Invoke_m21224_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m21225_gshared (Predicate_1_t3563 * __this, float ___obj, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m21225(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3563 *, float, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21225_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m21226_gshared (Predicate_1_t3563 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m21226(__this, ___result, method) (( bool (*) (Predicate_1_t3563 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21226_gshared)(__this, ___result, method)
