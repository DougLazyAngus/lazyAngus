#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>
struct Transform_1_t8607;
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
extern "C" void Transform_1__ctor_m63394_gshared (Transform_1_t8607 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m63394(__this, ___object, ___method, method) (( void (*) (Transform_1_t8607 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m63394_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m63395_gshared (Transform_1_t8607 * __this, int32_t ___key, TimeType_t3354  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m63395(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t8607 *, int32_t, TimeType_t3354 , const MethodInfo*))Transform_1_Invoke_m63395_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m63396_gshared (Transform_1_t8607 * __this, int32_t ___key, TimeType_t3354  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m63396(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t8607 *, int32_t, TimeType_t3354 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m63396_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m63397_gshared (Transform_1_t8607 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m63397(__this, ___result, method) (( int32_t (*) (Transform_1_t8607 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m63397_gshared)(__this, ___result, method)
