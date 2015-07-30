#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Double>
struct Predicate_1_t6684;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m40048_gshared (Predicate_1_t6684 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m40048(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6684 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m40048_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Double>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m40049_gshared (Predicate_1_t6684 * __this, double ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m40049(__this, ___obj, method) (( bool (*) (Predicate_1_t6684 *, double, const MethodInfo*))Predicate_1_Invoke_m40049_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m40050_gshared (Predicate_1_t6684 * __this, double ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m40050(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6684 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m40050_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Double>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m40051_gshared (Predicate_1_t6684 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m40051(__this, ___result, method) (( bool (*) (Predicate_1_t6684 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m40051_gshared)(__this, ___result, method)
