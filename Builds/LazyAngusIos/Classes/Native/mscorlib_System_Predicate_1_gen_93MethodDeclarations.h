#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct Predicate_1_t8561;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Predicate_1_gen_92MethodDeclarations.h"
#define Predicate_1__ctor_m60396(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8561 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m60294_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Invoke(T)
#define Predicate_1_Invoke_m60397(__this, ___obj, method) (( bool (*) (Predicate_1_t8561 *, KeyValuePair_2_t7678 , const MethodInfo*))Predicate_1_Invoke_m60295_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m60398(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8561 *, KeyValuePair_2_t7678 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m60296_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m60399(__this, ___result, method) (( bool (*) (Predicate_1_t8561 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m60297_gshared)(__this, ___result, method)
