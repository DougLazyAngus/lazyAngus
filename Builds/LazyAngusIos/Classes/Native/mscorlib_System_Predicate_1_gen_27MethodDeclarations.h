#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Single>
struct Predicate_1_t5731;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m27282_gshared (Predicate_1_t5731 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m27282(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5731 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m27282_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Single>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m27283_gshared (Predicate_1_t5731 * __this, float ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m27283(__this, ___obj, method) (( bool (*) (Predicate_1_t5731 *, float, const MethodInfo*))Predicate_1_Invoke_m27283_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m27284_gshared (Predicate_1_t5731 * __this, float ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m27284(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5731 *, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m27284_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m27285_gshared (Predicate_1_t5731 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m27285(__this, ___result, method) (( bool (*) (Predicate_1_t5731 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m27285_gshared)(__this, ___result, method)
