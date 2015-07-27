#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>
struct Transform_1_t4158;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m28994_gshared (Transform_1_t4158 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m28994(__this, ___object, ___method, method) (( void (*) (Transform_1_t4158 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m28994_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m28995_gshared (Transform_1_t4158 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m28995(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t4158 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m28995_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m28996_gshared (Transform_1_t4158 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m28996(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4158 *, int32_t, int32_t, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m28996_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m28997_gshared (Transform_1_t4158 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m28997(__this, ___result, method) (( int32_t (*) (Transform_1_t4158 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m28997_gshared)(__this, ___result, method)
