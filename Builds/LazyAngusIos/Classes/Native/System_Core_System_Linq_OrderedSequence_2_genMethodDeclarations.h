#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.OrderedSequence`2<System.Object,System.Object>
struct OrderedSequence_2_t5988;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t659;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1172;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5602;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t5989;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C" void OrderedSequence_2__ctor_m31063_gshared (OrderedSequence_2_t5988 * __this, Object_t* ___source, Func_2_t1172 * ___key_selector, Object_t* ___comparer, int32_t ___direction, const MethodInfo* method);
#define OrderedSequence_2__ctor_m31063(__this, ___source, ___key_selector, ___comparer, ___direction, method) (( void (*) (OrderedSequence_2_t5988 *, Object_t*, Func_2_t1172 *, Object_t*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m31063_gshared)(__this, ___source, ___key_selector, ___comparer, ___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C" SortContext_1_t5989 * OrderedSequence_2_CreateContext_m31064_gshared (OrderedSequence_2_t5988 * __this, SortContext_1_t5989 * ___current, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m31064(__this, ___current, method) (( SortContext_1_t5989 * (*) (OrderedSequence_2_t5988 *, SortContext_1_t5989 *, const MethodInfo*))OrderedSequence_2_CreateContext_m31064_gshared)(__this, ___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" Object_t* OrderedSequence_2_Sort_m31065_gshared (OrderedSequence_2_t5988 * __this, Object_t* ___source, const MethodInfo* method);
#define OrderedSequence_2_Sort_m31065(__this, ___source, method) (( Object_t* (*) (OrderedSequence_2_t5988 *, Object_t*, const MethodInfo*))OrderedSequence_2_Sort_m31065_gshared)(__this, ___source, method)
