#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct Predicate_1_t8593;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_61.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Predicate_1_gen_94MethodDeclarations.h"
#define Predicate_1__ctor_m60786(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8593 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m60684_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::Invoke(T)
#define Predicate_1_Invoke_m60787(__this, ___obj, method) (( bool (*) (Predicate_1_t8593 *, KeyValuePair_2_t7705 , const MethodInfo*))Predicate_1_Invoke_m60685_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m60788(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8593 *, KeyValuePair_2_t7705 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m60686_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m60789(__this, ___result, method) (( bool (*) (Predicate_1_t8593 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m60687_gshared)(__this, ___result, method)
