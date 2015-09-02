#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>
struct DefaultComparer_t8646;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::.ctor()
extern "C" void DefaultComparer__ctor_m63806_gshared (DefaultComparer_t8646 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m63806(__this, method) (( void (*) (DefaultComparer_t8646 *, const MethodInfo*))DefaultComparer__ctor_m63806_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m63807_gshared (DefaultComparer_t8646 * __this, TimeType_t3373  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m63807(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8646 *, TimeType_t3373 , const MethodInfo*))DefaultComparer_GetHashCode_m63807_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeZoneInfo/TimeType>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m63808_gshared (DefaultComparer_t8646 * __this, TimeType_t3373  ___x, TimeType_t3373  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m63808(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8646 *, TimeType_t3373 , TimeType_t3373 , const MethodInfo*))DefaultComparer_Equals_m63808_gshared)(__this, ___x, ___y, method)
