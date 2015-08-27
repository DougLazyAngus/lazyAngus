#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t5428;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m21742_gshared (Predicate_1_t5428 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m21742(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5428 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21742_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m21743_gshared (Predicate_1_t5428 * __this, Object_t * ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m21743(__this, ___obj, method) (( bool (*) (Predicate_1_t5428 *, Object_t *, const MethodInfo*))Predicate_1_Invoke_m21743_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m21744_gshared (Predicate_1_t5428 * __this, Object_t * ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m21744(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5428 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21744_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m21745_gshared (Predicate_1_t5428 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m21745(__this, ___result, method) (( bool (*) (Predicate_1_t5428 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21745_gshared)(__this, ___result, method)
