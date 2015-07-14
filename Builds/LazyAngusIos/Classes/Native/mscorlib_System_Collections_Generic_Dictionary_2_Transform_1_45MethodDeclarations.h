#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct Transform_1_t3915;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25952_gshared (Transform_1_t3915 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m25952(__this, ___object, ___method, method) (( void (*) (Transform_1_t3915 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m25952_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t3905  Transform_1_Invoke_m25953_gshared (Transform_1_t3915 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m25953(__this, ___key, ___value, method) (( KeyValuePair_2_t3905  (*) (Transform_1_t3915 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m25953_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25954_gshared (Transform_1_t3915 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m25954(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3915 *, uint64_t, Object_t *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m25954_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t3905  Transform_1_EndInvoke_m25955_gshared (Transform_1_t3915 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m25955(__this, ___result, method) (( KeyValuePair_2_t3905  (*) (Transform_1_t3915 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m25955_gshared)(__this, ___result, method)
