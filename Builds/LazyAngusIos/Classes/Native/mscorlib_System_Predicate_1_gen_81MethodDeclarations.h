#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Predicate_1_t8156;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Predicate_1_gen_80MethodDeclarations.h"
#define Predicate_1__ctor_m55388(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8156 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m55286_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(T)
#define Predicate_1_Invoke_m55389(__this, ___obj, method) (( bool (*) (Predicate_1_t8156 *, KeyValuePair_2_t6104 , const MethodInfo*))Predicate_1_Invoke_m55287_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m55390(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8156 *, KeyValuePair_2_t6104 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m55288_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m55391(__this, ___result, method) (( bool (*) (Predicate_1_t8156 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m55289_gshared)(__this, ___result, method)
