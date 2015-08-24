#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>
struct DefaultComparer_t8617;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::.ctor()
extern "C" void DefaultComparer__ctor_m63474_gshared (DefaultComparer_t8617 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63474(__this, method) (( void (*) (DefaultComparer_t8617 *, const MethodInfo*))DefaultComparer__ctor_m63474_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m63475_gshared (DefaultComparer_t8617 * __this, TimeType_t3357  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m63475(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8617 *, TimeType_t3357 , const MethodInfo*))DefaultComparer_GetHashCode_m63475_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m63476_gshared (DefaultComparer_t8617 * __this, TimeType_t3357  ___x, TimeType_t3357  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m63476(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8617 *, TimeType_t3357 , TimeType_t3357 , const MethodInfo*))DefaultComparer_Equals_m63476_gshared)(__this, ___x, ___y, method)
