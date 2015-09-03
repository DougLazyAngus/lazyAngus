#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Comparison_1_t8203;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m55991_gshared (Comparison_1_t8203 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m55991(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8203 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m55991_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m55992_gshared (Comparison_1_t8203 * __this, KeyValuePair_2_t7803  ___x, KeyValuePair_2_t7803  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m55992(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8203 *, KeyValuePair_2_t7803 , KeyValuePair_2_t7803 , const MethodInfo*))Comparison_1_Invoke_m55992_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m55993_gshared (Comparison_1_t8203 * __this, KeyValuePair_2_t7803  ___x, KeyValuePair_2_t7803  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m55993(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8203 *, KeyValuePair_2_t7803 , KeyValuePair_2_t7803 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m55993_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m55994_gshared (Comparison_1_t8203 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m55994(__this, ___result, method) (( int32_t (*) (Comparison_1_t8203 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m55994_gshared)(__this, ___result, method)
