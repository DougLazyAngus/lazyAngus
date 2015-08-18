#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Int16>
struct Predicate_1_t6479;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m37160_gshared (Predicate_1_t6479 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m37160(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6479 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m37160_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int16>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m37161_gshared (Predicate_1_t6479 * __this, int16_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m37161(__this, ___obj, method) (( bool (*) (Predicate_1_t6479 *, int16_t, const MethodInfo*))Predicate_1_Invoke_m37161_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int16>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m37162_gshared (Predicate_1_t6479 * __this, int16_t ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m37162(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6479 *, int16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m37162_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int16>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m37163_gshared (Predicate_1_t6479 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m37163(__this, ___result, method) (( bool (*) (Predicate_1_t6479 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m37163_gshared)(__this, ___result, method)
