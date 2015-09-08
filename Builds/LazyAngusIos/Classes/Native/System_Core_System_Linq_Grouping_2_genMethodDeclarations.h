#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Grouping`2<System.Object,System.Object>
struct Grouping_2_t6732;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t725;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;

// System.Void System.Linq.Grouping`2<System.Object,System.Object>::.ctor(K,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void Grouping_2__ctor_m37743_gshared (Grouping_2_t6732 * __this, Object_t * ___key, Object_t* ___group, const MethodInfo* method);
#define Grouping_2__ctor_m37743(__this, ___key, ___group, method) (( void (*) (Grouping_2_t6732 *, Object_t *, Object_t*, const MethodInfo*))Grouping_2__ctor_m37743_gshared)(__this, ___key, ___group, method)
// System.Collections.IEnumerator System.Linq.Grouping`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Grouping_2_System_Collections_IEnumerable_GetEnumerator_m37744_gshared (Grouping_2_t6732 * __this, const MethodInfo* method);
#define Grouping_2_System_Collections_IEnumerable_GetEnumerator_m37744(__this, method) (( Object_t * (*) (Grouping_2_t6732 *, const MethodInfo*))Grouping_2_System_Collections_IEnumerable_GetEnumerator_m37744_gshared)(__this, method)
// K System.Linq.Grouping`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * Grouping_2_get_Key_m37745_gshared (Grouping_2_t6732 * __this, const MethodInfo* method);
#define Grouping_2_get_Key_m37745(__this, method) (( Object_t * (*) (Grouping_2_t6732 *, const MethodInfo*))Grouping_2_get_Key_m37745_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Linq.Grouping`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* Grouping_2_GetEnumerator_m37746_gshared (Grouping_2_t6732 * __this, const MethodInfo* method);
#define Grouping_2_GetEnumerator_m37746(__this, method) (( Object_t* (*) (Grouping_2_t6732 *, const MethodInfo*))Grouping_2_GetEnumerator_m37746_gshared)(__this, method)
