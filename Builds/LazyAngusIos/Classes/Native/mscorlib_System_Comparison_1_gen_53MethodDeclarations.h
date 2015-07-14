#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t4071;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m27825_gshared (Comparison_1_t4071 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m27825(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4071 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m27825_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m27826_gshared (Comparison_1_t4071 * __this, KeyValuePair_2_t40  ___x, KeyValuePair_2_t40  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m27826(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4071 *, KeyValuePair_2_t40 , KeyValuePair_2_t40 , const MethodInfo*))Comparison_1_Invoke_m27826_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m27827_gshared (Comparison_1_t4071 * __this, KeyValuePair_2_t40  ___x, KeyValuePair_2_t40  ___y, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m27827(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4071 *, KeyValuePair_2_t40 , KeyValuePair_2_t40 , AsyncCallback_t387 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m27827_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m27828_gshared (Comparison_1_t4071 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m27828(__this, ___result, method) (( int32_t (*) (Comparison_1_t4071 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m27828_gshared)(__this, ___result, method)
