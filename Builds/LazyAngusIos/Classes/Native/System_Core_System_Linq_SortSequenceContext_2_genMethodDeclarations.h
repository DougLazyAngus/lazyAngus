#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct SortSequenceContext_2_t6065;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1227;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5650;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t6064;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortSequenceContext_2__ctor_m31777_gshared (SortSequenceContext_2_t6065 * __this, Func_2_t1227 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t6064 * ___child_context, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m31777(__this, ___selector, ___comparer, ___direction, ___child_context, method) (( void (*) (SortSequenceContext_2_t6065 *, Func_2_t1227 *, Object_t*, int32_t, SortContext_1_t6064 *, const MethodInfo*))SortSequenceContext_2__ctor_m31777_gshared)(__this, ___selector, ___comparer, ___direction, ___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
extern "C" void SortSequenceContext_2_Initialize_m31778_gshared (SortSequenceContext_2_t6065 * __this, ObjectU5BU5D_t682* ___elements, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m31778(__this, ___elements, method) (( void (*) (SortSequenceContext_2_t6065 *, ObjectU5BU5D_t682*, const MethodInfo*))SortSequenceContext_2_Initialize_m31778_gshared)(__this, ___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
extern "C" int32_t SortSequenceContext_2_Compare_m31779_gshared (SortSequenceContext_2_t6065 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m31779(__this, ___first_index, ___second_index, method) (( int32_t (*) (SortSequenceContext_2_t6065 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m31779_gshared)(__this, ___first_index, ___second_index, method)
