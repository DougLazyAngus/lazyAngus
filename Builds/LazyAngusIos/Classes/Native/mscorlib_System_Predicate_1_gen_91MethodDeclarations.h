#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct Predicate_1_t7988;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Predicate_1_gen_90MethodDeclarations.h"
#define Predicate_1__ctor_m55744(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7988 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m55642_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Invoke(T)
#define Predicate_1_Invoke_m55745(__this, ___obj, method) (( bool (*) (Predicate_1_t7988 *, KeyValuePair_2_t7105 , const MethodInfo*))Predicate_1_Invoke_m55643_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m55746(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7988 *, KeyValuePair_2_t7105 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m55644_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m55747(__this, ___result, method) (( bool (*) (Predicate_1_t7988 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m55645_gshared)(__this, ___result, method)
