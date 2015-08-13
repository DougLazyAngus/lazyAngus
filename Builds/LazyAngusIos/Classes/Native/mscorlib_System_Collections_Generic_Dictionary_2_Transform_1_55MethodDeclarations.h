#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
struct Transform_1_t6212;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m33580_gshared (Transform_1_t6212 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m33580(__this, ___object, ___method, method) (( void (*) (Transform_1_t6212 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m33580_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m33581_gshared (Transform_1_t6212 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m33581(__this, ___key, ___value, method) (( uint8_t (*) (Transform_1_t6212 *, Object_t *, uint8_t, const MethodInfo*))Transform_1_Invoke_m33581_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m33582_gshared (Transform_1_t6212 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m33582(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6212 *, Object_t *, uint8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m33582_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m33583_gshared (Transform_1_t6212 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m33583(__this, ___result, method) (( uint8_t (*) (Transform_1_t6212 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m33583_gshared)(__this, ___result, method)
