#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t3960;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m26599_gshared (Transform_1_t3960 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m26599(__this, ___object, ___method, method) (( void (*) (Transform_1_t3960 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m26599_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t40  Transform_1_Invoke_m26600_gshared (Transform_1_t3960 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m26600(__this, ___key, ___value, method) (( KeyValuePair_2_t40  (*) (Transform_1_t3960 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Transform_1_Invoke_m26600_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m26601_gshared (Transform_1_t3960 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m26601(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3960 *, Object_t *, KeyValuePair_2_t40 , AsyncCallback_t387 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m26601_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t40  Transform_1_EndInvoke_m26602_gshared (Transform_1_t3960 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m26602(__this, ___result, method) (( KeyValuePair_2_t40  (*) (Transform_1_t3960 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m26602_gshared)(__this, ___result, method)
