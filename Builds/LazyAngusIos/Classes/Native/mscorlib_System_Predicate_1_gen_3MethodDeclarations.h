#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t3321;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16932_gshared (Predicate_1_t3321 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16932(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3321 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16932_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16933_gshared (Predicate_1_t3321 * __this, Object_t * ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16933(__this, ___obj, method) (( bool (*) (Predicate_1_t3321 *, Object_t *, const MethodInfo*))Predicate_1_Invoke_m16933_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16934_gshared (Predicate_1_t3321 * __this, Object_t * ___obj, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16934(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3321 *, Object_t *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16934_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16935_gshared (Predicate_1_t3321 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16935(__this, ___result, method) (( bool (*) (Predicate_1_t3321 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16935_gshared)(__this, ___result, method)
