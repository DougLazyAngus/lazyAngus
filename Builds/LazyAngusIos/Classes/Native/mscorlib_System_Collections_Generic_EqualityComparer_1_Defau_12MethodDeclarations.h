﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4143;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m28297_gshared (DefaultComparer_t4143 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28297(__this, method) (( void (*) (DefaultComparer_t4143 *, const MethodInfo*))DefaultComparer__ctor_m28297_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28298_gshared (DefaultComparer_t4143 * __this, Guid_t44  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28298(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4143 *, Guid_t44 , const MethodInfo*))DefaultComparer_GetHashCode_m28298_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28299_gshared (DefaultComparer_t4143 * __this, Guid_t44  ___x, Guid_t44  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28299(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4143 *, Guid_t44 , Guid_t44 , const MethodInfo*))DefaultComparer_Equals_m28299_gshared)(__this, ___x, ___y, method)
