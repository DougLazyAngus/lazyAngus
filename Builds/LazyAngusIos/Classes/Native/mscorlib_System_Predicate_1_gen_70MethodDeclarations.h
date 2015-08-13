#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Predicate_1_t7300;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Predicate_1_gen_69MethodDeclarations.h"
#define Predicate_1__ctor_m47191(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7300 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m47089_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Invoke(T)
#define Predicate_1_Invoke_m47192(__this, ___obj, method) (( bool (*) (Predicate_1_t7300 *, KeyValuePair_2_t7183 , const MethodInfo*))Predicate_1_Invoke_m47090_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m47193(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7300 *, KeyValuePair_2_t7183 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m47091_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m47194(__this, ___result, method) (( bool (*) (Predicate_1_t7300 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m47092_gshared)(__this, ___result, method)
