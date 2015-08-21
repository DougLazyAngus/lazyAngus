#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Predicate_1_t7511;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Predicate_1_gen_76MethodDeclarations.h"
#define Predicate_1__ctor_m49902(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7511 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m49800_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Invoke(T)
#define Predicate_1_Invoke_m49903(__this, ___obj, method) (( bool (*) (Predicate_1_t7511 *, KeyValuePair_2_t7220 , const MethodInfo*))Predicate_1_Invoke_m49801_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m49904(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7511 *, KeyValuePair_2_t7220 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m49802_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m49905(__this, ___result, method) (( bool (*) (Predicate_1_t7511 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m49803_gshared)(__this, ___result, method)
