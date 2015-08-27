#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Comparison_1_t7986;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m55685_gshared (Comparison_1_t7986 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m55685(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7986 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m55685_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m55686_gshared (Comparison_1_t7986 * __this, KeyValuePair_2_t7024  ___x, KeyValuePair_2_t7024  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m55686(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7986 *, KeyValuePair_2_t7024 , KeyValuePair_2_t7024 , const MethodInfo*))Comparison_1_Invoke_m55686_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m55687_gshared (Comparison_1_t7986 * __this, KeyValuePair_2_t7024  ___x, KeyValuePair_2_t7024  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m55687(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7986 *, KeyValuePair_2_t7024 , KeyValuePair_2_t7024 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m55687_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m55688_gshared (Comparison_1_t7986 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m55688(__this, ___result, method) (( int32_t (*) (Comparison_1_t7986 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m55688_gshared)(__this, ___result, method)
