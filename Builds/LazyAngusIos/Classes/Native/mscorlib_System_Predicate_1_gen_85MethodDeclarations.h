#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Predicate_1_t8286;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Predicate_1_gen_84MethodDeclarations.h"
#define Predicate_1__ctor_m56942(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8286 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m56840_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(T)
#define Predicate_1_Invoke_m56943(__this, ___obj, method) (( bool (*) (Predicate_1_t8286 *, KeyValuePair_2_t7829 , const MethodInfo*))Predicate_1_Invoke_m56841_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m56944(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8286 *, KeyValuePair_2_t7829 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m56842_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m56945(__this, ___result, method) (( bool (*) (Predicate_1_t8286 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m56843_gshared)(__this, ___result, method)
