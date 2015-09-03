#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.QuickSort`1<System.Object>
struct QuickSort_1_t6635;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t724;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t6633;
// System.Int32[]
struct Int32U5BU5D_t484;

// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" void QuickSort_1__ctor_m36463_gshared (QuickSort_1_t6635 * __this, Object_t* ___source, SortContext_1_t6633 * ___context, const MethodInfo* method);
#define QuickSort_1__ctor_m36463(__this, ___source, ___context, method) (( void (*) (QuickSort_1_t6635 *, Object_t*, SortContext_1_t6633 *, const MethodInfo*))QuickSort_1__ctor_m36463_gshared)(__this, ___source, ___context, method)
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
extern "C" Int32U5BU5D_t484* QuickSort_1_CreateIndexes_m36464_gshared (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method);
#define QuickSort_1_CreateIndexes_m36464(__this /* static, unused */, ___length, method) (( Int32U5BU5D_t484* (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))QuickSort_1_CreateIndexes_m36464_gshared)(__this /* static, unused */, ___length, method)
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
extern "C" void QuickSort_1_PerformSort_m36465_gshared (QuickSort_1_t6635 * __this, const MethodInfo* method);
#define QuickSort_1_PerformSort_m36465(__this, method) (( void (*) (QuickSort_1_t6635 *, const MethodInfo*))QuickSort_1_PerformSort_m36465_gshared)(__this, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_CompareItems_m36466_gshared (QuickSort_1_t6635 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define QuickSort_1_CompareItems_m36466(__this, ___first_index, ___second_index, method) (( int32_t (*) (QuickSort_1_t6635 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_CompareItems_m36466_gshared)(__this, ___first_index, ___second_index, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_MedianOfThree_m36467_gshared (QuickSort_1_t6635 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_MedianOfThree_m36467(__this, ___left, ___right, method) (( int32_t (*) (QuickSort_1_t6635 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_MedianOfThree_m36467_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
extern "C" void QuickSort_1_Sort_m36468_gshared (QuickSort_1_t6635 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_Sort_m36468(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t6635 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Sort_m36468_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
extern "C" void QuickSort_1_InsertionSort_m36469_gshared (QuickSort_1_t6635 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_InsertionSort_m36469(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t6635 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_InsertionSort_m36469_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
extern "C" void QuickSort_1_Swap_m36470_gshared (QuickSort_1_t6635 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_Swap_m36470(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t6635 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Swap_m36470_gshared)(__this, ___left, ___right, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" Object_t* QuickSort_1_Sort_m36471_gshared (Object_t * __this /* static, unused */, Object_t* ___source, SortContext_1_t6633 * ___context, const MethodInfo* method);
#define QuickSort_1_Sort_m36471(__this /* static, unused */, ___source, ___context, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, SortContext_1_t6633 *, const MethodInfo*))QuickSort_1_Sort_m36471_gshared)(__this /* static, unused */, ___source, ___context, method)
