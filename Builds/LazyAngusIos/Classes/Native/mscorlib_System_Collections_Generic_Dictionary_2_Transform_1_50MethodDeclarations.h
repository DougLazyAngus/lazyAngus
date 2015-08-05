#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>
struct Transform_1_t6127;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32694_gshared (Transform_1_t6127 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m32694(__this, ___object, ___method, method) (( void (*) (Transform_1_t6127 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m32694_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m32695_gshared (Transform_1_t6127 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m32695(__this, ___key, ___value, method) (( uint8_t (*) (Transform_1_t6127 *, int64_t, uint8_t, const MethodInfo*))Transform_1_Invoke_m32695_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m32696_gshared (Transform_1_t6127 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m32696(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6127 *, int64_t, uint8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m32696_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m32697_gshared (Transform_1_t6127 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m32697(__this, ___result, method) (( uint8_t (*) (Transform_1_t6127 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m32697_gshared)(__this, ___result, method)
