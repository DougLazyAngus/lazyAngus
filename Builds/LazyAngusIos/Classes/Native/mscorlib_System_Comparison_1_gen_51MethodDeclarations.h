#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct Comparison_1_t6105;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Comparison_1_gen_48MethodDeclarations.h"
#define Comparison_1__ctor_m32383(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6105 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m31704_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Invoke(T,T)
#define Comparison_1_Invoke_m32384(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6105 *, KeyValuePair_2_t302 , KeyValuePair_2_t302 , const MethodInfo*))Comparison_1_Invoke_m31705_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m32385(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6105 *, KeyValuePair_2_t302 , KeyValuePair_2_t302 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m31706_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m32386(__this, ___result, method) (( int32_t (*) (Comparison_1_t6105 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m31707_gshared)(__this, ___result, method)
