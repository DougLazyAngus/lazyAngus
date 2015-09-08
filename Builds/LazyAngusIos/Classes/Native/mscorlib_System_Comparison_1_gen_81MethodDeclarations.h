#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Comparison_1_t8151;
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

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Comparison_1_gen_80MethodDeclarations.h"
#define Comparison_1__ctor_m55342(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8151 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m55239_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(T,T)
#define Comparison_1_Invoke_m55343(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8151 *, KeyValuePair_2_t6097 , KeyValuePair_2_t6097 , const MethodInfo*))Comparison_1_Invoke_m55240_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m55344(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8151 *, KeyValuePair_2_t6097 , KeyValuePair_2_t6097 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m55241_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m55345(__this, ___result, method) (( int32_t (*) (Comparison_1_t8151 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m55242_gshared)(__this, ___result, method)
