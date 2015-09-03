#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Comparison_1_t8340;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Comparison_1_gen_86MethodDeclarations.h"
#define Comparison_1__ctor_m57648(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8340 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m57545_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Invoke(T,T)
#define Comparison_1_Invoke_m57649(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8340 *, KeyValuePair_2_t7827 , KeyValuePair_2_t7827 , const MethodInfo*))Comparison_1_Invoke_m57546_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m57650(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8340 *, KeyValuePair_2_t7827 , KeyValuePair_2_t7827 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m57547_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m57651(__this, ___result, method) (( int32_t (*) (Comparison_1_t8340 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m57548_gshared)(__this, ___result, method)
