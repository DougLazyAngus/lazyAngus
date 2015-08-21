#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
struct GenericEqualityComparer_1_t8671;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m64086_gshared (GenericEqualityComparer_1_t8671 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m64086(__this, method) (( void (*) (GenericEqualityComparer_1_t8671 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m64086_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m64087_gshared (GenericEqualityComparer_1_t8671 * __this, Object_t * ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m64087(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t8671 *, Object_t *, const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m64087_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m64088_gshared (GenericEqualityComparer_1_t8671 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m64088(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t8671 *, Object_t *, Object_t *, const MethodInfo*))GenericEqualityComparer_1_Equals_m64088_gshared)(__this, ___x, ___y, method)
