#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct SortSequenceContext_2_t6635;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1245;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t6201;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t6634;
// System.Object[]
struct ObjectU5BU5D_t697;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortSequenceContext_2__ctor_m36473_gshared (SortSequenceContext_2_t6635 * __this, Func_2_t1245 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t6634 * ___child_context, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m36473(__this, ___selector, ___comparer, ___direction, ___child_context, method) (( void (*) (SortSequenceContext_2_t6635 *, Func_2_t1245 *, Object_t*, int32_t, SortContext_1_t6634 *, const MethodInfo*))SortSequenceContext_2__ctor_m36473_gshared)(__this, ___selector, ___comparer, ___direction, ___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
extern "C" void SortSequenceContext_2_Initialize_m36474_gshared (SortSequenceContext_2_t6635 * __this, ObjectU5BU5D_t697* ___elements, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m36474(__this, ___elements, method) (( void (*) (SortSequenceContext_2_t6635 *, ObjectU5BU5D_t697*, const MethodInfo*))SortSequenceContext_2_Initialize_m36474_gshared)(__this, ___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
extern "C" int32_t SortSequenceContext_2_Compare_m36475_gshared (SortSequenceContext_2_t6635 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m36475(__this, ___first_index, ___second_index, method) (( int32_t (*) (SortSequenceContext_2_t6635 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m36475_gshared)(__this, ___first_index, ___second_index, method)
