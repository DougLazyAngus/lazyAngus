#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct Comparison_1_t8570;
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

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Comparison_1_gen_92MethodDeclarations.h"
#define Comparison_1__ctor_m60464(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8570 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m60361_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Invoke(T,T)
#define Comparison_1_Invoke_m60465(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8570 *, KeyValuePair_2_t7685 , KeyValuePair_2_t7685 , const MethodInfo*))Comparison_1_Invoke_m60362_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m60466(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8570 *, KeyValuePair_2_t7685 , KeyValuePair_2_t7685 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m60363_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m60467(__this, ___result, method) (( int32_t (*) (Comparison_1_t8570 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m60364_gshared)(__this, ___result, method)
