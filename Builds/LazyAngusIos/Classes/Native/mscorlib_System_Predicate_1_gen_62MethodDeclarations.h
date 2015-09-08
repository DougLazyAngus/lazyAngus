#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Int64>
struct Predicate_1_t7226;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m44048_gshared (Predicate_1_t7226 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m44048(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7226 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m44048_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int64>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m44049_gshared (Predicate_1_t7226 * __this, int64_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m44049(__this, ___obj, method) (( bool (*) (Predicate_1_t7226 *, int64_t, const MethodInfo*))Predicate_1_Invoke_m44049_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m44050_gshared (Predicate_1_t7226 * __this, int64_t ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m44050(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7226 *, int64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m44050_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m44051_gshared (Predicate_1_t7226 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m44051(__this, ___result, method) (( bool (*) (Predicate_1_t7226 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m44051_gshared)(__this, ___result, method)
