#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Transform_1_t7017;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m44302_gshared (Transform_1_t7017 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m44302(__this, ___object, ___method, method) (( void (*) (Transform_1_t7017 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m44302_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t6935  Transform_1_Invoke_m44303_gshared (Transform_1_t7017 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Transform_1_Invoke_m44303(__this, ___key, ___value, method) (( KeyValuePair_2_t6935  (*) (Transform_1_t7017 *, Object_t *, double, const MethodInfo*))Transform_1_Invoke_m44303_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m44304_gshared (Transform_1_t7017 * __this, Object_t * ___key, double ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m44304(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7017 *, Object_t *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m44304_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t6935  Transform_1_EndInvoke_m44305_gshared (Transform_1_t7017 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m44305(__this, ___result, method) (( KeyValuePair_2_t6935  (*) (Transform_1_t7017 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m44305_gshared)(__this, ___result, method)
