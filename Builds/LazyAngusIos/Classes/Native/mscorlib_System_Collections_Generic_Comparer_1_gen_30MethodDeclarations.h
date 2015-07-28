﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
struct Comparer_1_t8612;
// System.Object
struct Object_t;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.ctor()
extern "C" void Comparer_1__ctor_m63479_gshared (Comparer_1_t8612 * __this, const MethodInfo* method);
#define Comparer_1__ctor_m63479(__this, method) (( void (*) (Comparer_1_t8612 *, const MethodInfo*))Comparer_1__ctor_m63479_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.cctor()
extern "C" void Comparer_1__cctor_m63480_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1__cctor_m63480(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1__cctor_m63480_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m63481_gshared (Comparer_1_t8612 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m63481(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t8612 *, Object_t *, Object_t *, const MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m63481_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTimeOffset>::get_Default()
extern "C" Comparer_1_t8612 * Comparer_1_get_Default_m63482_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1_get_Default_m63482(__this /* static, unused */, method) (( Comparer_1_t8612 * (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1_get_Default_m63482_gshared)(__this /* static, unused */, method)