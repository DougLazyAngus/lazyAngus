#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.OrderedSequence`2<System.Object,System.Object>
struct OrderedSequence_2_t5991;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t660;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1175;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5605;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t5992;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C" void OrderedSequence_2__ctor_m31086_gshared (OrderedSequence_2_t5991 * __this, Object_t* ___source, Func_2_t1175 * ___key_selector, Object_t* ___comparer, int32_t ___direction, const MethodInfo* method);
#define OrderedSequence_2__ctor_m31086(__this, ___source, ___key_selector, ___comparer, ___direction, method) (( void (*) (OrderedSequence_2_t5991 *, Object_t*, Func_2_t1175 *, Object_t*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m31086_gshared)(__this, ___source, ___key_selector, ___comparer, ___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C" SortContext_1_t5992 * OrderedSequence_2_CreateContext_m31087_gshared (OrderedSequence_2_t5991 * __this, SortContext_1_t5992 * ___current, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m31087(__this, ___current, method) (( SortContext_1_t5992 * (*) (OrderedSequence_2_t5991 *, SortContext_1_t5992 *, const MethodInfo*))OrderedSequence_2_CreateContext_m31087_gshared)(__this, ___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" Object_t* OrderedSequence_2_Sort_m31088_gshared (OrderedSequence_2_t5991 * __this, Object_t* ___source, const MethodInfo* method);
#define OrderedSequence_2_Sort_m31088(__this, ___source, method) (( Object_t* (*) (OrderedSequence_2_t5991 *, Object_t*, const MethodInfo*))OrderedSequence_2_Sort_m31088_gshared)(__this, ___source, method)
