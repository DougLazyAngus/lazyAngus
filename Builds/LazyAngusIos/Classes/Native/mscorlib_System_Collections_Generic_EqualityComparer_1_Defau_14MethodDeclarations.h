#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>
struct DefaultComparer_t6793;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::.ctor()
extern "C" void DefaultComparer__ctor_m41397_gshared (DefaultComparer_t6793 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m41397(__this, method) (( void (*) (DefaultComparer_t6793 *, const MethodInfo*))DefaultComparer__ctor_m41397_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m41398_gshared (DefaultComparer_t6793 * __this, ParseGeoPoint_t1194  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m41398(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6793 *, ParseGeoPoint_t1194 , const MethodInfo*))DefaultComparer_GetHashCode_m41398_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Parse.ParseGeoPoint>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m41399_gshared (DefaultComparer_t6793 * __this, ParseGeoPoint_t1194  ___x, ParseGeoPoint_t1194  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m41399(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6793 *, ParseGeoPoint_t1194 , ParseGeoPoint_t1194 , const MethodInfo*))DefaultComparer_Equals_m41399_gshared)(__this, ___x, ___y, method)
