#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.SByte>
struct Predicate_1_t7007;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.SByte>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m41306_gshared (Predicate_1_t7007 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m41306(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7007 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m41306_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.SByte>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m41307_gshared (Predicate_1_t7007 * __this, int8_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m41307(__this, ___obj, method) (( bool (*) (Predicate_1_t7007 *, int8_t, const MethodInfo*))Predicate_1_Invoke_m41307_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m41308_gshared (Predicate_1_t7007 * __this, int8_t ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m41308(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7007 *, int8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m41308_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.SByte>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m41309_gshared (Predicate_1_t7007 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m41309(__this, ___result, method) (( bool (*) (Predicate_1_t7007 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m41309_gshared)(__this, ___result, method)
