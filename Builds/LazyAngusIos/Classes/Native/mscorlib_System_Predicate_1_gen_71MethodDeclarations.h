#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Predicate_1_t7372;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Predicate_1_gen_70MethodDeclarations.h"
#define Predicate_1__ctor_m48368(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7372 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m48266_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Invoke(T)
#define Predicate_1_Invoke_m48369(__this, ___obj, method) (( bool (*) (Predicate_1_t7372 *, KeyValuePair_2_t7135 , const MethodInfo*))Predicate_1_Invoke_m48267_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m48370(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7372 *, KeyValuePair_2_t7135 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m48268_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m48371(__this, ___result, method) (( bool (*) (Predicate_1_t7372 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m48269_gshared)(__this, ___result, method)
