#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct Comparison_1_t8483;
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

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "mscorlib_System_Comparison_1_gen_90MethodDeclarations.h"
#define Comparison_1__ctor_m59514(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8483 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m59411_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::Invoke(T,T)
#define Comparison_1_Invoke_m59515(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8483 *, KeyValuePair_2_t7626 , KeyValuePair_2_t7626 , const MethodInfo*))Comparison_1_Invoke_m59412_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m59516(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8483 *, KeyValuePair_2_t7626 , KeyValuePair_2_t7626 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m59413_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m59517(__this, ___result, method) (( int32_t (*) (Comparison_1_t8483 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m59414_gshared)(__this, ___result, method)
