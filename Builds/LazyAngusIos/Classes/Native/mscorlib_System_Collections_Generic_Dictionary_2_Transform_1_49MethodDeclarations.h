#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct Transform_1_t3991;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m27040_gshared (Transform_1_t3991 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m27040(__this, ___object, ___method, method) (( void (*) (Transform_1_t3991 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m27040_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3981  Transform_1_Invoke_m27041_gshared (Transform_1_t3991 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m27041(__this, ___key, ___value, method) (( KeyValuePair_2_t3981  (*) (Transform_1_t3991 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m27041_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m27042_gshared (Transform_1_t3991 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m27042(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3991 *, uint64_t, Object_t *, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m27042_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3981  Transform_1_EndInvoke_m27043_gshared (Transform_1_t3991 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m27043(__this, ___result, method) (( KeyValuePair_2_t3981  (*) (Transform_1_t3991 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m27043_gshared)(__this, ___result, method)
