#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.DateTime>
struct Predicate_1_t6764;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Predicate`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m41077_gshared (Predicate_1_t6764 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m41077(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6764 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m41077_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.DateTime>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m41078_gshared (Predicate_1_t6764 * __this, DateTime_t287  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m41078(__this, ___obj, method) (( bool (*) (Predicate_1_t6764 *, DateTime_t287 , const MethodInfo*))Predicate_1_Invoke_m41078_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.DateTime>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m41079_gshared (Predicate_1_t6764 * __this, DateTime_t287  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m41079(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6764 *, DateTime_t287 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m41079_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m41080_gshared (Predicate_1_t6764 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m41080(__this, ___result, method) (( bool (*) (Predicate_1_t6764 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m41080_gshared)(__this, ___result, method)
