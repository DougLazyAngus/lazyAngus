#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t4219;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m29368_gshared (DefaultComparer_t4219 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29368(__this, method) (( void (*) (DefaultComparer_t4219 *, const MethodInfo*))DefaultComparer__ctor_m29368_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29369_gshared (DefaultComparer_t4219 * __this, TimeSpan_t292  ___x, TimeSpan_t292  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m29369(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4219 *, TimeSpan_t292 , TimeSpan_t292 , const MethodInfo*))DefaultComparer_Compare_m29369_gshared)(__this, ___x, ___y, method)
