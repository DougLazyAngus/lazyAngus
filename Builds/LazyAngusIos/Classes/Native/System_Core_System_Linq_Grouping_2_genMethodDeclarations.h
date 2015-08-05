#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Grouping`2<System.Object,System.Object>
struct Grouping_2_t6091;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t661;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;

// System.Void System.Linq.Grouping`2<System.Object,System.Object>::.ctor(K,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void Grouping_2__ctor_m32364_gshared (Grouping_2_t6091 * __this, Object_t * ___key, Object_t* ___group, const MethodInfo* method);
#define Grouping_2__ctor_m32364(__this, ___key, ___group, method) (( void (*) (Grouping_2_t6091 *, Object_t *, Object_t*, const MethodInfo*))Grouping_2__ctor_m32364_gshared)(__this, ___key, ___group, method)
// System.Collections.IEnumerator System.Linq.Grouping`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Grouping_2_System_Collections_IEnumerable_GetEnumerator_m32365_gshared (Grouping_2_t6091 * __this, const MethodInfo* method);
#define Grouping_2_System_Collections_IEnumerable_GetEnumerator_m32365(__this, method) (( Object_t * (*) (Grouping_2_t6091 *, const MethodInfo*))Grouping_2_System_Collections_IEnumerable_GetEnumerator_m32365_gshared)(__this, method)
// K System.Linq.Grouping`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * Grouping_2_get_Key_m32366_gshared (Grouping_2_t6091 * __this, const MethodInfo* method);
#define Grouping_2_get_Key_m32366(__this, method) (( Object_t * (*) (Grouping_2_t6091 *, const MethodInfo*))Grouping_2_get_Key_m32366_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Linq.Grouping`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* Grouping_2_GetEnumerator_m32367_gshared (Grouping_2_t6091 * __this, const MethodInfo* method);
#define Grouping_2_GetEnumerator_m32367(__this, method) (( Object_t* (*) (Grouping_2_t6091 *, const MethodInfo*))Grouping_2_GetEnumerator_m32367_gshared)(__this, method)
