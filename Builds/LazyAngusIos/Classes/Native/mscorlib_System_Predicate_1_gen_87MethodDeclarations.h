#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Predicate_1_t8351;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Predicate_1_gen_86MethodDeclarations.h"
#define Predicate_1__ctor_m57719(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8351 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m57617_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Invoke(T)
#define Predicate_1_Invoke_m57720(__this, ___obj, method) (( bool (*) (Predicate_1_t8351 *, KeyValuePair_2_t7840 , const MethodInfo*))Predicate_1_Invoke_m57618_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m57721(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8351 *, KeyValuePair_2_t7840 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m57619_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m57722(__this, ___result, method) (( bool (*) (Predicate_1_t8351 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m57620_gshared)(__this, ___result, method)
