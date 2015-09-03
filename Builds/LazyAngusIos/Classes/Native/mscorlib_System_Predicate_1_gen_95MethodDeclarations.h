#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct Predicate_1_t8587;
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
#define Predicate_1__ctor_m60761(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8587 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m60659_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::Invoke(T)
#define Predicate_1_Invoke_m60762(__this, ___obj, method) (( bool (*) (Predicate_1_t8587 *, KeyValuePair_2_t7699 , const MethodInfo*))Predicate_1_Invoke_m60660_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m60763(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8587 *, KeyValuePair_2_t7699 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m60661_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m60764(__this, ___result, method) (( bool (*) (Predicate_1_t8587 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m60662_gshared)(__this, ___result, method)
