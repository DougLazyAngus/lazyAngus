#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct Predicate_1_t7914;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "mscorlib_System_Predicate_1_gen_88MethodDeclarations.h"
#define Predicate_1__ctor_m54876(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7914 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m54774_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::Invoke(T)
#define Predicate_1_Invoke_m54877(__this, ___obj, method) (( bool (*) (Predicate_1_t7914 *, KeyValuePair_2_t7059 , const MethodInfo*))Predicate_1_Invoke_m54775_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m54878(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7914 *, KeyValuePair_2_t7059 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m54776_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m54879(__this, ___result, method) (( bool (*) (Predicate_1_t7914 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m54777_gshared)(__this, ___result, method)
