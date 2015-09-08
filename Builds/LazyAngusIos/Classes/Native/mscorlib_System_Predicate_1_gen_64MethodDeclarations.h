#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Double>
struct Predicate_1_t7328;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m45462_gshared (Predicate_1_t7328 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m45462(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7328 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m45462_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Double>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m45463_gshared (Predicate_1_t7328 * __this, double ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m45463(__this, ___obj, method) (( bool (*) (Predicate_1_t7328 *, double, const MethodInfo*))Predicate_1_Invoke_m45463_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m45464_gshared (Predicate_1_t7328 * __this, double ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m45464(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7328 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m45464_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Double>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m45465_gshared (Predicate_1_t7328 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m45465(__this, ___result, method) (( bool (*) (Predicate_1_t7328 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m45465_gshared)(__this, ___result, method)
