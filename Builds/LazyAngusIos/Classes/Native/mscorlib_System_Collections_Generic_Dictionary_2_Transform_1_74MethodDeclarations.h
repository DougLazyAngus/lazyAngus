﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>
struct Transform_1_t7094;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m45096_gshared (Transform_1_t7094 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m45096(__this, ___object, ___method, method) (( void (*) (Transform_1_t7094 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m45096_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::Invoke(TKey,TValue)
extern "C" double Transform_1_Invoke_m45097_gshared (Transform_1_t7094 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Transform_1_Invoke_m45097(__this, ___key, ___value, method) (( double (*) (Transform_1_t7094 *, Object_t *, double, const MethodInfo*))Transform_1_Invoke_m45097_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m45098_gshared (Transform_1_t7094 * __this, Object_t * ___key, double ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m45098(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7094 *, Object_t *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m45098_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::EndInvoke(System.IAsyncResult)
extern "C" double Transform_1_EndInvoke_m45099_gshared (Transform_1_t7094 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m45099(__this, ___result, method) (( double (*) (Transform_1_t7094 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m45099_gshared)(__this, ___result, method)
