#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct SortSequenceContext_2_t5992;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1174;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5604;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t5991;
// System.Object[]
struct ObjectU5BU5D_t636;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortSequenceContext_2__ctor_m31086_gshared (SortSequenceContext_2_t5992 * __this, Func_2_t1174 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t5991 * ___child_context, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m31086(__this, ___selector, ___comparer, ___direction, ___child_context, method) (( void (*) (SortSequenceContext_2_t5992 *, Func_2_t1174 *, Object_t*, int32_t, SortContext_1_t5991 *, const MethodInfo*))SortSequenceContext_2__ctor_m31086_gshared)(__this, ___selector, ___comparer, ___direction, ___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
extern "C" void SortSequenceContext_2_Initialize_m31087_gshared (SortSequenceContext_2_t5992 * __this, ObjectU5BU5D_t636* ___elements, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m31087(__this, ___elements, method) (( void (*) (SortSequenceContext_2_t5992 *, ObjectU5BU5D_t636*, const MethodInfo*))SortSequenceContext_2_Initialize_m31087_gshared)(__this, ___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
extern "C" int32_t SortSequenceContext_2_Compare_m31088_gshared (SortSequenceContext_2_t5992 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m31088(__this, ___first_index, ___second_index, method) (( int32_t (*) (SortSequenceContext_2_t5992 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m31088_gshared)(__this, ___first_index, ___second_index, method)
