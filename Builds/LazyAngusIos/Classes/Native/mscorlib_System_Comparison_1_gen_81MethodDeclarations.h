#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Comparison_1_t7699;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Comparison_1_gen_80MethodDeclarations.h"
#define Comparison_1__ctor_m52261(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7699 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m52158_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Invoke(T,T)
#define Comparison_1_Invoke_m52262(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7699 *, KeyValuePair_2_t7186 , KeyValuePair_2_t7186 , const MethodInfo*))Comparison_1_Invoke_m52159_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m52263(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7699 *, KeyValuePair_2_t7186 , KeyValuePair_2_t7186 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m52160_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m52264(__this, ___result, method) (( int32_t (*) (Comparison_1_t7699 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m52161_gshared)(__this, ___result, method)
