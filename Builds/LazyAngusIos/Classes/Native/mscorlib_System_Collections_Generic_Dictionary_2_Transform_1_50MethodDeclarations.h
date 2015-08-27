﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>
struct Transform_1_t6201;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m33470_gshared (Transform_1_t6201 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m33470(__this, ___object, ___method, method) (( void (*) (Transform_1_t6201 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m33470_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::Invoke(TKey,TValue)
extern "C" int64_t Transform_1_Invoke_m33471_gshared (Transform_1_t6201 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m33471(__this, ___key, ___value, method) (( int64_t (*) (Transform_1_t6201 *, int64_t, uint8_t, const MethodInfo*))Transform_1_Invoke_m33471_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m33472_gshared (Transform_1_t6201 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m33472(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6201 *, int64_t, uint8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m33472_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Transform_1_EndInvoke_m33473_gshared (Transform_1_t6201 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m33473(__this, ___result, method) (( int64_t (*) (Transform_1_t6201 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m33473_gshared)(__this, ___result, method)
