#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<ExplicitMouseDesc>
struct Predicate_1_t3539;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDesc.h"

// System.Void System.Predicate`1<ExplicitMouseDesc>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m20875_gshared (Predicate_1_t3539 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m20875(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3539 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m20875_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<ExplicitMouseDesc>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m20876_gshared (Predicate_1_t3539 * __this, ExplicitMouseDesc_t413  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m20876(__this, ___obj, method) (( bool (*) (Predicate_1_t3539 *, ExplicitMouseDesc_t413 , const MethodInfo*))Predicate_1_Invoke_m20876_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<ExplicitMouseDesc>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m20877_gshared (Predicate_1_t3539 * __this, ExplicitMouseDesc_t413  ___obj, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m20877(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3539 *, ExplicitMouseDesc_t413 , AsyncCallback_t389 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m20877_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<ExplicitMouseDesc>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m20878_gshared (Predicate_1_t3539 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m20878(__this, ___result, method) (( bool (*) (Predicate_1_t3539 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m20878_gshared)(__this, ___result, method)
