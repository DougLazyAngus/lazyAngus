#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct Predicate_1_t8429;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "mscorlib_System_Predicate_1_gen_88MethodDeclarations.h"
#define Predicate_1__ctor_m58808(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8429 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m58706_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::Invoke(T)
#define Predicate_1_Invoke_m58809(__this, ___obj, method) (( bool (*) (Predicate_1_t8429 *, KeyValuePair_2_t7659 , const MethodInfo*))Predicate_1_Invoke_m58707_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m58810(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8429 *, KeyValuePair_2_t7659 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m58708_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m58811(__this, ___result, method) (( bool (*) (Predicate_1_t8429 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m58709_gshared)(__this, ___result, method)
