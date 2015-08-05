#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Comparison_1_t7308;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Comparison_1_gen_68MethodDeclarations.h"
#define Comparison_1__ctor_m47594(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7308 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m47491_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Invoke(T,T)
#define Comparison_1_Invoke_m47595(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7308 *, KeyValuePair_2_t7123 , KeyValuePair_2_t7123 , const MethodInfo*))Comparison_1_Invoke_m47492_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m47596(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7308 *, KeyValuePair_2_t7123 , KeyValuePair_2_t7123 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m47493_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m47597(__this, ___result, method) (( int32_t (*) (Comparison_1_t7308 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m47494_gshared)(__this, ___result, method)
