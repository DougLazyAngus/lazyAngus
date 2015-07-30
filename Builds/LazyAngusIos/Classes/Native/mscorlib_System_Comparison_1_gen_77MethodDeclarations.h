#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Comparison_1_t7565;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Comparison_1_gen_76MethodDeclarations.h"
#define Comparison_1__ctor_m50679(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7565 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m50576_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Invoke(T,T)
#define Comparison_1_Invoke_m50680(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7565 *, KeyValuePair_2_t7160 , KeyValuePair_2_t7160 , const MethodInfo*))Comparison_1_Invoke_m50577_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m50681(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7565 *, KeyValuePair_2_t7160 , KeyValuePair_2_t7160 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m50578_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m50682(__this, ___result, method) (( int32_t (*) (Comparison_1_t7565 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m50579_gshared)(__this, ___result, method)
