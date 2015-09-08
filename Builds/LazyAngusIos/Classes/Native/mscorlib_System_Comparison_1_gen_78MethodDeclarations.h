#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Comparison_1_t8079;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m54462_gshared (Comparison_1_t8079 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m54462(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8079 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m54462_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m54463_gshared (Comparison_1_t8079 * __this, KeyValuePair_2_t7791  ___x, KeyValuePair_2_t7791  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m54463(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8079 *, KeyValuePair_2_t7791 , KeyValuePair_2_t7791 , const MethodInfo*))Comparison_1_Invoke_m54463_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m54464_gshared (Comparison_1_t8079 * __this, KeyValuePair_2_t7791  ___x, KeyValuePair_2_t7791  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m54464(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8079 *, KeyValuePair_2_t7791 , KeyValuePair_2_t7791 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m54464_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m54465_gshared (Comparison_1_t8079 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m54465(__this, ___result, method) (( int32_t (*) (Comparison_1_t8079 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m54465_gshared)(__this, ___result, method)
