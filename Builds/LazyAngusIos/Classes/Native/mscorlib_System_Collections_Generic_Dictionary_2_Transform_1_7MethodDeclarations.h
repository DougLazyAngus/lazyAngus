#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
struct Transform_1_t3395;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18007_gshared (Transform_1_t3395 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m18007(__this, ___object, ___method, method) (( void (*) (Transform_1_t3395 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18007_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m18008_gshared (Transform_1_t3395 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m18008(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t3395 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m18008_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18009_gshared (Transform_1_t3395 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m18009(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3395 *, int32_t, Object_t *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18009_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m18010_gshared (Transform_1_t3395 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m18010(__this, ___result, method) (( int32_t (*) (Transform_1_t3395 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18010_gshared)(__this, ___result, method)
