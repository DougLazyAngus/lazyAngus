#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Comparison_1_t7937;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m55254_gshared (Comparison_1_t7937 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m55254(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7937 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m55254_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m55255_gshared (Comparison_1_t7937 * __this, KeyValuePair_2_t6952  ___x, KeyValuePair_2_t6952  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m55255(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7937 *, KeyValuePair_2_t6952 , KeyValuePair_2_t6952 , const MethodInfo*))Comparison_1_Invoke_m55255_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m55256_gshared (Comparison_1_t7937 * __this, KeyValuePair_2_t6952  ___x, KeyValuePair_2_t6952  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m55256(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7937 *, KeyValuePair_2_t6952 , KeyValuePair_2_t6952 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m55256_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m55257_gshared (Comparison_1_t7937 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m55257(__this, ___result, method) (( int32_t (*) (Comparison_1_t7937 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m55257_gshared)(__this, ___result, method)
