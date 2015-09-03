#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.UInt64>
struct Predicate_1_t7267;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m44606_gshared (Predicate_1_t7267 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m44606(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7267 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m44606_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.UInt64>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m44607_gshared (Predicate_1_t7267 * __this, uint64_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m44607(__this, ___obj, method) (( bool (*) (Predicate_1_t7267 *, uint64_t, const MethodInfo*))Predicate_1_Invoke_m44607_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.UInt64>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m44608_gshared (Predicate_1_t7267 * __this, uint64_t ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m44608(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7267 *, uint64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m44608_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m44609_gshared (Predicate_1_t7267 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m44609(__this, ___result, method) (( bool (*) (Predicate_1_t7267 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m44609_gshared)(__this, ___result, method)
