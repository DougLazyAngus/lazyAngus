#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t8735;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m64700_gshared (DefaultComparer_t8735 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m64700(__this, method) (( void (*) (DefaultComparer_t8735 *, const MethodInfo*))DefaultComparer__ctor_m64700_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m64701_gshared (DefaultComparer_t8735 * __this, Guid_t74  ___x, Guid_t74  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m64701(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t8735 *, Guid_t74 , Guid_t74 , const MethodInfo*))DefaultComparer_Compare_m64701_gshared)(__this, ___x, ___y, method)
