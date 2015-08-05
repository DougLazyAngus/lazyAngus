#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparison_1_t7497;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m49830_gshared (Comparison_1_t7497 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m49830(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7497 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m49830_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m49831_gshared (Comparison_1_t7497 * __this, KeyValuePair_2_t5488  ___x, KeyValuePair_2_t5488  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m49831(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7497 *, KeyValuePair_2_t5488 , KeyValuePair_2_t5488 , const MethodInfo*))Comparison_1_Invoke_m49831_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m49832_gshared (Comparison_1_t7497 * __this, KeyValuePair_2_t5488  ___x, KeyValuePair_2_t5488  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m49832(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7497 *, KeyValuePair_2_t5488 , KeyValuePair_2_t5488 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m49832_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m49833_gshared (Comparison_1_t7497 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m49833(__this, ___result, method) (( int32_t (*) (Comparison_1_t7497 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m49833_gshared)(__this, ___result, method)
