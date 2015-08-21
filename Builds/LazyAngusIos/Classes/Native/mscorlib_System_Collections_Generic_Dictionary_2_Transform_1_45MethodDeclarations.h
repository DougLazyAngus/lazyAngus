#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct Transform_1_t6020;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m31296_gshared (Transform_1_t6020 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m31296(__this, ___object, ___method, method) (( void (*) (Transform_1_t6020 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m31296_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t6007  Transform_1_Invoke_m31297_gshared (Transform_1_t6020 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m31297(__this, ___key, ___value, method) (( KeyValuePair_2_t6007  (*) (Transform_1_t6020 *, int64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m31297_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m31298_gshared (Transform_1_t6020 * __this, int64_t ___key, Object_t * ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m31298(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6020 *, int64_t, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m31298_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t6007  Transform_1_EndInvoke_m31299_gshared (Transform_1_t6020 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m31299(__this, ___result, method) (( KeyValuePair_2_t6007  (*) (Transform_1_t6020 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m31299_gshared)(__this, ___result, method)
