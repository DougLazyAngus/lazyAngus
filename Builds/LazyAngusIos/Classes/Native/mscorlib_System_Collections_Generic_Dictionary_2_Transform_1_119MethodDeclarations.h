#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>
struct Transform_1_t8526;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_141.h"
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m62590_gshared (Transform_1_t8526 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m62590(__this, ___object, ___method, method) (( void (*) (Transform_1_t8526 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m62590_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t8516  Transform_1_Invoke_m62591_gshared (Transform_1_t8526 * __this, int32_t ___key, TimeType_t3299  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m62591(__this, ___key, ___value, method) (( KeyValuePair_2_t8516  (*) (Transform_1_t8526 *, int32_t, TimeType_t3299 , const MethodInfo*))Transform_1_Invoke_m62591_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m62592_gshared (Transform_1_t8526 * __this, int32_t ___key, TimeType_t3299  ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m62592(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t8526 *, int32_t, TimeType_t3299 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m62592_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.Generic.KeyValuePair`2<System.Int32,System.TimeZoneInfo/TimeType>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t8516  Transform_1_EndInvoke_m62593_gshared (Transform_1_t8526 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m62593(__this, ___result, method) (( KeyValuePair_2_t8516  (*) (Transform_1_t8526 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m62593_gshared)(__this, ___result, method)
