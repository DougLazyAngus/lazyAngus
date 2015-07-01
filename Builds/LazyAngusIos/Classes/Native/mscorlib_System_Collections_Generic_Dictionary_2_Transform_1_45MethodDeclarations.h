#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct Transform_1_t3874;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25763_gshared (Transform_1_t3874 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m25763(__this, ___object, ___method, method) (( void (*) (Transform_1_t3874 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m25763_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3864  Transform_1_Invoke_m25764_gshared (Transform_1_t3874 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m25764(__this, ___key, ___value, method) (( KeyValuePair_2_t3864  (*) (Transform_1_t3874 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m25764_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25765_gshared (Transform_1_t3874 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m25765(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3874 *, uint64_t, Object_t *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m25765_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3864  Transform_1_EndInvoke_m25766_gshared (Transform_1_t3874 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m25766(__this, ___result, method) (( KeyValuePair_2_t3864  (*) (Transform_1_t3874 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m25766_gshared)(__this, ___result, method)
