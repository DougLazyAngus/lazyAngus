#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>
struct DefaultComparer_t6872;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::.ctor()
extern "C" void DefaultComparer__ctor_m42202_gshared (DefaultComparer_t6872 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m42202(__this, method) (( void (*) (DefaultComparer_t6872 *, const MethodInfo*))DefaultComparer__ctor_m42202_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m42203_gshared (DefaultComparer_t6872 * __this, ParseGeoPoint_t1248  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m42203(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6872 *, ParseGeoPoint_t1248 , const MethodInfo*))DefaultComparer_GetHashCode_m42203_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m42204_gshared (DefaultComparer_t6872 * __this, ParseGeoPoint_t1248  ___x, ParseGeoPoint_t1248  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m42204(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6872 *, ParseGeoPoint_t1248 , ParseGeoPoint_t1248 , const MethodInfo*))DefaultComparer_Equals_m42204_gshared)(__this, ___x, ___y, method)
