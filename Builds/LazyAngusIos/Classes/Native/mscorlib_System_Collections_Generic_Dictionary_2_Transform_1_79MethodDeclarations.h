﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>
struct Transform_1_t7120;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m45447_gshared (Transform_1_t7120 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m45447(__this, ___object, ___method, method) (( void (*) (Transform_1_t7120 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m45447_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::Invoke(TKey,TValue)
extern "C" DateTime_t287  Transform_1_Invoke_m45448_gshared (Transform_1_t7120 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m45448(__this, ___key, ___value, method) (( DateTime_t287  (*) (Transform_1_t7120 *, Object_t *, DateTime_t287 , const MethodInfo*))Transform_1_Invoke_m45448_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m45449_gshared (Transform_1_t7120 * __this, Object_t * ___key, DateTime_t287  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m45449(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7120 *, Object_t *, DateTime_t287 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m45449_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C" DateTime_t287  Transform_1_EndInvoke_m45450_gshared (Transform_1_t7120 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m45450(__this, ___result, method) (( DateTime_t287  (*) (Transform_1_t7120 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m45450_gshared)(__this, ___result, method)
