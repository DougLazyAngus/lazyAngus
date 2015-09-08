#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct Predicate_1_t6671;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Predicate_1_gen_50MethodDeclarations.h"
#define Predicate_1__ctor_m36960(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6671 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m36281_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Invoke(T)
#define Predicate_1_Invoke_m36961(__this, ___obj, method) (( bool (*) (Predicate_1_t6671 *, KeyValuePair_2_t302 , const MethodInfo*))Predicate_1_Invoke_m36282_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m36962(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6671 *, KeyValuePair_2_t302 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m36283_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m36963(__this, ___result, method) (( bool (*) (Predicate_1_t6671 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m36284_gshared)(__this, ___result, method)
