#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct Comparison_1_t7905;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Comparison_1_gen_86MethodDeclarations.h"
#define Comparison_1__ctor_m54920(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7905 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m54817_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Invoke(T,T)
#define Comparison_1_Invoke_m54921(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7905 *, KeyValuePair_2_t7020 , KeyValuePair_2_t7020 , const MethodInfo*))Comparison_1_Invoke_m54818_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m54922(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7905 *, KeyValuePair_2_t7020 , KeyValuePair_2_t7020 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m54819_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m54923(__this, ___result, method) (( int32_t (*) (Comparison_1_t7905 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m54820_gshared)(__this, ___result, method)
