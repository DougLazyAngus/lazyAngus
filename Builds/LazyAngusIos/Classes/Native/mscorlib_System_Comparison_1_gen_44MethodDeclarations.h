#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t5976;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m30899_gshared (Comparison_1_t5976 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m30899(__this, ___object, ___method, method) (( void (*) (Comparison_1_t5976 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m30899_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m30900_gshared (Comparison_1_t5976 * __this, KeyValuePair_2_t70  ___x, KeyValuePair_2_t70  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m30900(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t5976 *, KeyValuePair_2_t70 , KeyValuePair_2_t70 , const MethodInfo*))Comparison_1_Invoke_m30900_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m30901_gshared (Comparison_1_t5976 * __this, KeyValuePair_2_t70  ___x, KeyValuePair_2_t70  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m30901(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t5976 *, KeyValuePair_2_t70 , KeyValuePair_2_t70 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m30901_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m30902_gshared (Comparison_1_t5976 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m30902(__this, ___result, method) (( int32_t (*) (Comparison_1_t5976 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m30902_gshared)(__this, ___result, method)
