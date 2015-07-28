#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Comparison_1_t8540;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m62763_gshared (Comparison_1_t8540 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m62763(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8540 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m62763_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m62764_gshared (Comparison_1_t8540 * __this, KeyValuePair_2_t3321  ___x, KeyValuePair_2_t3321  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m62764(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8540 *, KeyValuePair_2_t3321 , KeyValuePair_2_t3321 , const MethodInfo*))Comparison_1_Invoke_m62764_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m62765_gshared (Comparison_1_t8540 * __this, KeyValuePair_2_t3321  ___x, KeyValuePair_2_t3321  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m62765(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8540 *, KeyValuePair_2_t3321 , KeyValuePair_2_t3321 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m62765_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m62766_gshared (Comparison_1_t8540 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m62766(__this, ___result, method) (( int32_t (*) (Comparison_1_t8540 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m62766_gshared)(__this, ___result, method)
