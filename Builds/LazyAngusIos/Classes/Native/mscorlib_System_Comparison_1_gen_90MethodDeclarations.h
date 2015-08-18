#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct Comparison_1_t7986;
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
#include "mscorlib_System_Comparison_1_gen_89MethodDeclarations.h"
#define Comparison_1__ctor_m55664(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7986 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m55561_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::Invoke(T,T)
#define Comparison_1_Invoke_m55665(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7986 *, KeyValuePair_2_t7101 , KeyValuePair_2_t7101 , const MethodInfo*))Comparison_1_Invoke_m55562_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m55666(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7986 *, KeyValuePair_2_t7101 , KeyValuePair_2_t7101 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m55563_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m55667(__this, ___result, method) (( int32_t (*) (Comparison_1_t7986 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m55564_gshared)(__this, ___result, method)
