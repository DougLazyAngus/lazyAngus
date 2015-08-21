#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>
struct DefaultComparer_t6869;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::.ctor()
extern "C" void DefaultComparer__ctor_m42170_gshared (DefaultComparer_t6869 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m42170(__this, method) (( void (*) (DefaultComparer_t6869 *, const MethodInfo*))DefaultComparer__ctor_m42170_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m42171_gshared (DefaultComparer_t6869 * __this, ParseGeoPoint_t1245  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m42171(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6869 *, ParseGeoPoint_t1245 , const MethodInfo*))DefaultComparer_GetHashCode_m42171_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m42172_gshared (DefaultComparer_t6869 * __this, ParseGeoPoint_t1245  ___x, ParseGeoPoint_t1245  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m42172(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6869 *, ParseGeoPoint_t1245 , ParseGeoPoint_t1245 , const MethodInfo*))DefaultComparer_Equals_m42172_gshared)(__this, ___x, ___y, method)
