#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4209;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m29324_gshared (DefaultComparer_t4209 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m29324(__this, method) (( void (*) (DefaultComparer_t4209 *, const MethodInfo*))DefaultComparer__ctor_m29324_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m29325_gshared (DefaultComparer_t4209 * __this, DateTime_t247  ___x, DateTime_t247  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m29325(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4209 *, DateTime_t247 , DateTime_t247 , const MethodInfo*))DefaultComparer_Compare_m29325_gshared)(__this, ___x, ___y, method)
