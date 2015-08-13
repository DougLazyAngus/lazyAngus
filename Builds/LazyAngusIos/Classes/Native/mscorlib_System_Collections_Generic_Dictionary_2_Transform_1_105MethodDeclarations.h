#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct Transform_1_t8487;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m61649_gshared (Transform_1_t8487 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m61649(__this, ___object, ___method, method) (( void (*) (Transform_1_t8487 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m61649_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t8478  Transform_1_Invoke_m61650_gshared (Transform_1_t8487 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m61650(__this, ___key, ___value, method) (( KeyValuePair_2_t8478  (*) (Transform_1_t8487 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m61650_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m61651_gshared (Transform_1_t8487 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m61651(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t8487 *, uint64_t, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m61651_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t8478  Transform_1_EndInvoke_m61652_gshared (Transform_1_t8487 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m61652(__this, ___result, method) (( KeyValuePair_2_t8478  (*) (Transform_1_t8487 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m61652_gshared)(__this, ___result, method)
