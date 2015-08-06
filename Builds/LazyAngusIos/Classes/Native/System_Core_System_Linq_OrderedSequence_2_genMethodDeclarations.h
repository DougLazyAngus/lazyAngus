#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.OrderedSequence`2<System.Object,System.Object>
struct OrderedSequence_2_t5990;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t659;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1174;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5604;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t5991;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C" void OrderedSequence_2__ctor_m31079_gshared (OrderedSequence_2_t5990 * __this, Object_t* ___source, Func_2_t1174 * ___key_selector, Object_t* ___comparer, int32_t ___direction, const MethodInfo* method);
#define OrderedSequence_2__ctor_m31079(__this, ___source, ___key_selector, ___comparer, ___direction, method) (( void (*) (OrderedSequence_2_t5990 *, Object_t*, Func_2_t1174 *, Object_t*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m31079_gshared)(__this, ___source, ___key_selector, ___comparer, ___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C" SortContext_1_t5991 * OrderedSequence_2_CreateContext_m31080_gshared (OrderedSequence_2_t5990 * __this, SortContext_1_t5991 * ___current, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m31080(__this, ___current, method) (( SortContext_1_t5991 * (*) (OrderedSequence_2_t5990 *, SortContext_1_t5991 *, const MethodInfo*))OrderedSequence_2_CreateContext_m31080_gshared)(__this, ___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" Object_t* OrderedSequence_2_Sort_m31081_gshared (OrderedSequence_2_t5990 * __this, Object_t* ___source, const MethodInfo* method);
#define OrderedSequence_2_Sort_m31081(__this, ___source, method) (( Object_t* (*) (OrderedSequence_2_t5990 *, Object_t*, const MethodInfo*))OrderedSequence_2_Sort_m31081_gshared)(__this, ___source, method)
