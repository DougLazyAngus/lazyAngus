﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.QuickSort`1<System.Object>
struct QuickSort_1_t5984;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t652;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t5982;
// System.Int32[]
struct Int32U5BU5D_t540;

// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" void QuickSort_1__ctor_m31026_gshared (QuickSort_1_t5984 * __this, Object_t* ___source, SortContext_1_t5982 * ___context, const MethodInfo* method);
#define QuickSort_1__ctor_m31026(__this, ___source, ___context, method) (( void (*) (QuickSort_1_t5984 *, Object_t*, SortContext_1_t5982 *, const MethodInfo*))QuickSort_1__ctor_m31026_gshared)(__this, ___source, ___context, method)
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
extern "C" Int32U5BU5D_t540* QuickSort_1_CreateIndexes_m31027_gshared (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method);
#define QuickSort_1_CreateIndexes_m31027(__this /* static, unused */, ___length, method) (( Int32U5BU5D_t540* (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))QuickSort_1_CreateIndexes_m31027_gshared)(__this /* static, unused */, ___length, method)
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
extern "C" void QuickSort_1_PerformSort_m31028_gshared (QuickSort_1_t5984 * __this, const MethodInfo* method);
#define QuickSort_1_PerformSort_m31028(__this, method) (( void (*) (QuickSort_1_t5984 *, const MethodInfo*))QuickSort_1_PerformSort_m31028_gshared)(__this, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_CompareItems_m31029_gshared (QuickSort_1_t5984 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define QuickSort_1_CompareItems_m31029(__this, ___first_index, ___second_index, method) (( int32_t (*) (QuickSort_1_t5984 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_CompareItems_m31029_gshared)(__this, ___first_index, ___second_index, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_MedianOfThree_m31030_gshared (QuickSort_1_t5984 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_MedianOfThree_m31030(__this, ___left, ___right, method) (( int32_t (*) (QuickSort_1_t5984 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_MedianOfThree_m31030_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
extern "C" void QuickSort_1_Sort_m31031_gshared (QuickSort_1_t5984 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_Sort_m31031(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t5984 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Sort_m31031_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
extern "C" void QuickSort_1_InsertionSort_m31032_gshared (QuickSort_1_t5984 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_InsertionSort_m31032(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t5984 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_InsertionSort_m31032_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
extern "C" void QuickSort_1_Swap_m31033_gshared (QuickSort_1_t5984 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_Swap_m31033(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t5984 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Swap_m31033_gshared)(__this, ___left, ___right, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" Object_t* QuickSort_1_Sort_m31034_gshared (Object_t * __this /* static, unused */, Object_t* ___source, SortContext_1_t5982 * ___context, const MethodInfo* method);
#define QuickSort_1_Sort_m31034(__this /* static, unused */, ___source, ___context, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, SortContext_1_t5982 *, const MethodInfo*))QuickSort_1_Sort_m31034_gshared)(__this /* static, unused */, ___source, ___context, method)
