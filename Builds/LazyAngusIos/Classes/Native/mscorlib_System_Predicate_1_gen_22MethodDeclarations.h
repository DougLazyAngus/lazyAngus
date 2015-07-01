#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Int32>
struct Predicate_1_t3550;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m21020_gshared (Predicate_1_t3550 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m21020(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3550 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21020_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m21021_gshared (Predicate_1_t3550 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m21021(__this, ___obj, method) (( bool (*) (Predicate_1_t3550 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m21021_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m21022_gshared (Predicate_1_t3550 * __this, int32_t ___obj, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m21022(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3550 *, int32_t, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21022_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m21023_gshared (Predicate_1_t3550 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m21023(__this, ___result, method) (( bool (*) (Predicate_1_t3550 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21023_gshared)(__this, ___result, method)
