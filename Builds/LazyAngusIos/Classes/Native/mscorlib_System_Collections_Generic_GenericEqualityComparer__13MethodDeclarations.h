﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
struct GenericEqualityComparer_1_t8585;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m63251_gshared (GenericEqualityComparer_1_t8585 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m63251(__this, method) (( void (*) (GenericEqualityComparer_1_t8585 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m63251_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m63252_gshared (GenericEqualityComparer_1_t8585 * __this, Object_t * ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m63252(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t8585 *, Object_t *, const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m63252_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m63253_gshared (GenericEqualityComparer_1_t8585 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m63253(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t8585 *, Object_t *, Object_t *, const MethodInfo*))GenericEqualityComparer_1_Equals_m63253_gshared)(__this, ___x, ___y, method)