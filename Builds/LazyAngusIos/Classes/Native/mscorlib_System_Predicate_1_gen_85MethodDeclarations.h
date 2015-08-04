#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct Predicate_1_t7838;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "mscorlib_System_Predicate_1_gen_84MethodDeclarations.h"
#define Predicate_1__ctor_m54104(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7838 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m54002_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::Invoke(T)
#define Predicate_1_Invoke_m54105(__this, ___obj, method) (( bool (*) (Predicate_1_t7838 *, KeyValuePair_2_t6983 , const MethodInfo*))Predicate_1_Invoke_m54003_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m54106(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7838 *, KeyValuePair_2_t6983 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m54004_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m54107(__this, ___result, method) (( bool (*) (Predicate_1_t7838 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m54005_gshared)(__this, ___result, method)
