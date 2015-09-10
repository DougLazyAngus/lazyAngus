#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.QuickSort`1<System.Object>
struct QuickSort_1_t6648;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t735;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t6646;
// System.Int32[]
struct Int32U5BU5D_t484;

// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" void QuickSort_1__ctor_m36545_gshared (QuickSort_1_t6648 * __this, Object_t* ___source, SortContext_1_t6646 * ___context, const MethodInfo* method);
#define QuickSort_1__ctor_m36545(__this, ___source, ___context, method) (( void (*) (QuickSort_1_t6648 *, Object_t*, SortContext_1_t6646 *, const MethodInfo*))QuickSort_1__ctor_m36545_gshared)(__this, ___source, ___context, method)
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
extern "C" Int32U5BU5D_t484* QuickSort_1_CreateIndexes_m36546_gshared (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method);
#define QuickSort_1_CreateIndexes_m36546(__this /* static, unused */, ___length, method) (( Int32U5BU5D_t484* (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))QuickSort_1_CreateIndexes_m36546_gshared)(__this /* static, unused */, ___length, method)
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
extern "C" void QuickSort_1_PerformSort_m36547_gshared (QuickSort_1_t6648 * __this, const MethodInfo* method);
#define QuickSort_1_PerformSort_m36547(__this, method) (( void (*) (QuickSort_1_t6648 *, const MethodInfo*))QuickSort_1_PerformSort_m36547_gshared)(__this, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_CompareItems_m36548_gshared (QuickSort_1_t6648 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define QuickSort_1_CompareItems_m36548(__this, ___first_index, ___second_index, method) (( int32_t (*) (QuickSort_1_t6648 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_CompareItems_m36548_gshared)(__this, ___first_index, ___second_index, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_MedianOfThree_m36549_gshared (QuickSort_1_t6648 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_MedianOfThree_m36549(__this, ___left, ___right, method) (( int32_t (*) (QuickSort_1_t6648 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_MedianOfThree_m36549_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
extern "C" void QuickSort_1_Sort_m36550_gshared (QuickSort_1_t6648 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_Sort_m36550(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t6648 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Sort_m36550_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
extern "C" void QuickSort_1_InsertionSort_m36551_gshared (QuickSort_1_t6648 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_InsertionSort_m36551(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t6648 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_InsertionSort_m36551_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
extern "C" void QuickSort_1_Swap_m36552_gshared (QuickSort_1_t6648 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_Swap_m36552(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t6648 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Swap_m36552_gshared)(__this, ___left, ___right, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" Object_t* QuickSort_1_Sort_m36553_gshared (Object_t * __this /* static, unused */, Object_t* ___source, SortContext_1_t6646 * ___context, const MethodInfo* method);
#define QuickSort_1_Sort_m36553(__this /* static, unused */, ___source, ___context, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, SortContext_1_t6646 *, const MethodInfo*))QuickSort_1_Sort_m36553_gshared)(__this /* static, unused */, ___source, ___context, method)
