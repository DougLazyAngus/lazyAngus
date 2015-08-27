﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Object>
struct Transform_1_t7091;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m45086_gshared (Transform_1_t7091 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m45086(__this, ___object, ___method, method) (( void (*) (Transform_1_t7091 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m45086_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m45087_gshared (Transform_1_t7091 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Transform_1_Invoke_m45087(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t7091 *, Object_t *, double, const MethodInfo*))Transform_1_Invoke_m45087_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m45088_gshared (Transform_1_t7091 * __this, Object_t * ___key, double ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m45088(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7091 *, Object_t *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m45088_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m45089_gshared (Transform_1_t7091 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m45089(__this, ___result, method) (( Object_t * (*) (Transform_1_t7091 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m45089_gshared)(__this, ___result, method)
