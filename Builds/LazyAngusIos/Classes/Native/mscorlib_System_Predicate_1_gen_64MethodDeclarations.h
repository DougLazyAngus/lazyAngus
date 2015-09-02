#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Double>
struct Predicate_1_t6794;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m41201_gshared (Predicate_1_t6794 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m41201(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6794 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m41201_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Double>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m41202_gshared (Predicate_1_t6794 * __this, double ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m41202(__this, ___obj, method) (( bool (*) (Predicate_1_t6794 *, double, const MethodInfo*))Predicate_1_Invoke_m41202_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m41203_gshared (Predicate_1_t6794 * __this, double ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m41203(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6794 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m41203_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Double>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m41204_gshared (Predicate_1_t6794 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m41204(__this, ___result, method) (( bool (*) (Predicate_1_t6794 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m41204_gshared)(__this, ___result, method)
