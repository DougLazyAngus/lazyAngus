#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Predicate_1_t8221;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Predicate_1_gen_82MethodDeclarations.h"
#define Predicate_1__ctor_m56165(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8221 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m56063_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Invoke(T)
#define Predicate_1_Invoke_m56166(__this, ___obj, method) (( bool (*) (Predicate_1_t8221 *, KeyValuePair_2_t7818 , const MethodInfo*))Predicate_1_Invoke_m56064_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m56167(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8221 *, KeyValuePair_2_t7818 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m56065_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m56168(__this, ___result, method) (( bool (*) (Predicate_1_t8221 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m56066_gshared)(__this, ___result, method)
