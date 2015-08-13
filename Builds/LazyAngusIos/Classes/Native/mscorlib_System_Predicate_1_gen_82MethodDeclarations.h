#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Predicate_1_t7702;
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
#include "mscorlib_System_Predicate_1_gen_81MethodDeclarations.h"
#define Predicate_1__ctor_m52145(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7702 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m52043_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(T)
#define Predicate_1_Invoke_m52146(__this, ___obj, method) (( bool (*) (Predicate_1_t7702 *, KeyValuePair_2_t7245 , const MethodInfo*))Predicate_1_Invoke_m52044_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m52147(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7702 *, KeyValuePair_2_t7245 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m52045_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m52148(__this, ___result, method) (( bool (*) (Predicate_1_t7702 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m52046_gshared)(__this, ___result, method)
