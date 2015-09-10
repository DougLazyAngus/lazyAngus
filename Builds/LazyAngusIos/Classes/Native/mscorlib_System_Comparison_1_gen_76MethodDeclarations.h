#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Comparison_1_t8021;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m53742_gshared (Comparison_1_t8021 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m53742(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8021 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m53742_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m53743_gshared (Comparison_1_t8021 * __this, KeyValuePair_2_t7787  ___x, KeyValuePair_2_t7787  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m53743(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8021 *, KeyValuePair_2_t7787 , KeyValuePair_2_t7787 , const MethodInfo*))Comparison_1_Invoke_m53743_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m53744_gshared (Comparison_1_t8021 * __this, KeyValuePair_2_t7787  ___x, KeyValuePair_2_t7787  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m53744(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8021 *, KeyValuePair_2_t7787 , KeyValuePair_2_t7787 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m53744_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m53745_gshared (Comparison_1_t8021 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m53745(__this, ___result, method) (( int32_t (*) (Comparison_1_t8021 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m53745_gshared)(__this, ___result, method)
