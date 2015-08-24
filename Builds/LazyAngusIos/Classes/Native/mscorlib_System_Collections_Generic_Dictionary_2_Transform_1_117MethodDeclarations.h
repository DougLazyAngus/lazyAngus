#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>
struct Transform_1_t8610;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m63426_gshared (Transform_1_t8610 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m63426(__this, ___object, ___method, method) (( void (*) (Transform_1_t8610 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m63426_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m63427_gshared (Transform_1_t8610 * __this, int32_t ___key, TimeType_t3357  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m63427(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t8610 *, int32_t, TimeType_t3357 , const MethodInfo*))Transform_1_Invoke_m63427_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m63428_gshared (Transform_1_t8610 * __this, int32_t ___key, TimeType_t3357  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m63428(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t8610 *, int32_t, TimeType_t3357 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m63428_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m63429_gshared (Transform_1_t8610 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m63429(__this, ___result, method) (( int32_t (*) (Transform_1_t8610 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m63429_gshared)(__this, ___result, method)
