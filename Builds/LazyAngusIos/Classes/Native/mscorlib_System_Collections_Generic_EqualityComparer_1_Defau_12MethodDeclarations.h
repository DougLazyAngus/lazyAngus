#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4218;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m29368_gshared (DefaultComparer_t4218 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29368(__this, method) (( void (*) (DefaultComparer_t4218 *, const MethodInfo*))DefaultComparer__ctor_m29368_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29369_gshared (DefaultComparer_t4218 * __this, Guid_t44  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m29369(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4218 *, Guid_t44 , const MethodInfo*))DefaultComparer_GetHashCode_m29369_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29370_gshared (DefaultComparer_t4218 * __this, Guid_t44  ___x, Guid_t44  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m29370(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4218 *, Guid_t44 , Guid_t44 , const MethodInfo*))DefaultComparer_Equals_m29370_gshared)(__this, ___x, ___y, method)
