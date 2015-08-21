#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Predicate_1_t6056;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Predicate_1_gen_48MethodDeclarations.h"
#define Predicate_1__ctor_m31764(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6056 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m31662_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(T)
#define Predicate_1_Invoke_m31765(__this, ___obj, method) (( bool (*) (Predicate_1_t6056 *, KeyValuePair_2_t775 , const MethodInfo*))Predicate_1_Invoke_m31663_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m31766(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6056 *, KeyValuePair_2_t775 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m31664_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m31767(__this, ___result, method) (( bool (*) (Predicate_1_t6056 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m31665_gshared)(__this, ___result, method)
