#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>
struct Transform_1_t8379;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m60498_gshared (Transform_1_t8379 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m60498(__this, ___object, ___method, method) (( void (*) (Transform_1_t8379 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m60498_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m60499_gshared (Transform_1_t8379 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m60499(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t8379 *, Object_t *, int64_t, const MethodInfo*))Transform_1_Invoke_m60499_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m60500_gshared (Transform_1_t8379 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m60500(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t8379 *, Object_t *, int64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m60500_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m60501_gshared (Transform_1_t8379 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m60501(__this, ___result, method) (( Object_t * (*) (Transform_1_t8379 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m60501_gshared)(__this, ___result, method)
