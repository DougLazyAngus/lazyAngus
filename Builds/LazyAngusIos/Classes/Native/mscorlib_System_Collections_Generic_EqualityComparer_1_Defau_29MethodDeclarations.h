#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>
struct DefaultComparer_t9201;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::.ctor()
extern "C" void DefaultComparer__ctor_m68169_gshared (DefaultComparer_t9201 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m68169(__this, method) (( void (*) (DefaultComparer_t9201 *, const MethodInfo*))DefaultComparer__ctor_m68169_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m68170_gshared (DefaultComparer_t9201 * __this, TimeType_t3755  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m68170(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t9201 *, TimeType_t3755 , const MethodInfo*))DefaultComparer_GetHashCode_m68170_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m68171_gshared (DefaultComparer_t9201 * __this, TimeType_t3755  ___x, TimeType_t3755  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m68171(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t9201 *, TimeType_t3755 , TimeType_t3755 , const MethodInfo*))DefaultComparer_Equals_m68171_gshared)(__this, ___x, ___y, method)
