﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t8708;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m64377_gshared (DefaultComparer_t8708 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m64377(__this, method) (( void (*) (DefaultComparer_t8708 *, const MethodInfo*))DefaultComparer__ctor_m64377_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m64378_gshared (DefaultComparer_t8708 * __this, Guid_t74  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m64378(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t8708 *, Guid_t74 , const MethodInfo*))DefaultComparer_GetHashCode_m64378_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m64379_gshared (DefaultComparer_t8708 * __this, Guid_t74  ___x, Guid_t74  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m64379(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t8708 *, Guid_t74 , Guid_t74 , const MethodInfo*))DefaultComparer_Equals_m64379_gshared)(__this, ___x, ___y, method)
