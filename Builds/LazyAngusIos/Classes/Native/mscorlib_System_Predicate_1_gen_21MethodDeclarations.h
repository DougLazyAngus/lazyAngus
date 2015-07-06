#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<ExplicitMouseDesc>
struct Predicate_1_t3563;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ExplicitMouseDesc
#include "AssemblyU2DCSharp_ExplicitMouseDesc.h"

// System.Void System.Predicate`1<ExplicitMouseDesc>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m21033_gshared (Predicate_1_t3563 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m21033(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3563 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21033_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<ExplicitMouseDesc>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m21034_gshared (Predicate_1_t3563 * __this, ExplicitMouseDesc_t415  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m21034(__this, ___obj, method) (( bool (*) (Predicate_1_t3563 *, ExplicitMouseDesc_t415 , const MethodInfo*))Predicate_1_Invoke_m21034_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<ExplicitMouseDesc>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m21035_gshared (Predicate_1_t3563 * __this, ExplicitMouseDesc_t415  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m21035(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3563 *, ExplicitMouseDesc_t415 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21035_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<ExplicitMouseDesc>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m21036_gshared (Predicate_1_t3563 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m21036(__this, ___result, method) (( bool (*) (Predicate_1_t3563 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21036_gshared)(__this, ___result, method)
