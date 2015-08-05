#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct Predicate_1_t7840;
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
#define Predicate_1__ctor_m54116(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7840 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m54014_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::Invoke(T)
#define Predicate_1_Invoke_m54117(__this, ___obj, method) (( bool (*) (Predicate_1_t7840 *, KeyValuePair_2_t6985 , const MethodInfo*))Predicate_1_Invoke_m54015_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m54118(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7840 *, KeyValuePair_2_t6985 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m54016_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m54119(__this, ___result, method) (( bool (*) (Predicate_1_t7840 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m54017_gshared)(__this, ___result, method)
