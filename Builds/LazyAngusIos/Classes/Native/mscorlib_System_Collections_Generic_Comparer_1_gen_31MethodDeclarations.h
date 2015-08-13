#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.Guid>
struct Comparer_1_t8698;
// System.Object
struct Object_t;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
extern "C" void Comparer_1__ctor_m64243_gshared (Comparer_1_t8698 * __this, const MethodInfo* method);
#define Comparer_1__ctor_m64243(__this, method) (( void (*) (Comparer_1_t8698 *, const MethodInfo*))Comparer_1__ctor_m64243_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
extern "C" void Comparer_1__cctor_m64244_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1__cctor_m64244(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1__cctor_m64244_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m64245_gshared (Comparer_1_t8698 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m64245(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t8698 *, Object_t *, Object_t *, const MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m64245_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
extern "C" Comparer_1_t8698 * Comparer_1_get_Default_m64246_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1_get_Default_m64246(__this /* static, unused */, method) (( Comparer_1_t8698 * (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1_get_Default_m64246_gshared)(__this /* static, unused */, method)
