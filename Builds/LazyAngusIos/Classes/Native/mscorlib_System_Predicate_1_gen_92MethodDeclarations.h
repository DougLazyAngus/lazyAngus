#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Predicate_1_t8015;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m56065_gshared (Predicate_1_t8015 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m56065(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8015 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m56065_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m56066_gshared (Predicate_1_t8015 * __this, KeyValuePair_2_t7033  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m56066(__this, ___obj, method) (( bool (*) (Predicate_1_t8015 *, KeyValuePair_2_t7033 , const MethodInfo*))Predicate_1_Invoke_m56066_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m56067_gshared (Predicate_1_t8015 * __this, KeyValuePair_2_t7033  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m56067(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8015 *, KeyValuePair_2_t7033 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m56067_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m56068_gshared (Predicate_1_t8015 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m56068(__this, ___result, method) (( bool (*) (Predicate_1_t8015 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m56068_gshared)(__this, ___result, method)
