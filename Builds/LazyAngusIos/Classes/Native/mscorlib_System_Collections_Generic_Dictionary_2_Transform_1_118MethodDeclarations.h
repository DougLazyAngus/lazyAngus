#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>
struct Transform_1_t9192;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m68133_gshared (Transform_1_t9192 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m68133(__this, ___object, ___method, method) (( void (*) (Transform_1_t9192 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m68133_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::Invoke(TKey,TValue)
extern "C" TimeType_t3752  Transform_1_Invoke_m68134_gshared (Transform_1_t9192 * __this, int32_t ___key, TimeType_t3752  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m68134(__this, ___key, ___value, method) (( TimeType_t3752  (*) (Transform_1_t9192 *, int32_t, TimeType_t3752 , const MethodInfo*))Transform_1_Invoke_m68134_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m68135_gshared (Transform_1_t9192 * __this, int32_t ___key, TimeType_t3752  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m68135(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t9192 *, int32_t, TimeType_t3752 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m68135_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.TimeZoneInfo/TimeType>::EndInvoke(System.IAsyncResult)
extern "C" TimeType_t3752  Transform_1_EndInvoke_m68136_gshared (Transform_1_t9192 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m68136(__this, ___result, method) (( TimeType_t3752  (*) (Transform_1_t9192 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m68136_gshared)(__this, ___result, method)
