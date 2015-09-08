#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList/ListValues
struct ListValues_t4959;
// System.Object
struct Object_t;
// System.Collections.SortedList
struct SortedList_t4582;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void System.Collections.SortedList/ListValues::.ctor(System.Collections.SortedList)
extern "C" void ListValues__ctor_m21145 (ListValues_t4959 * __this, SortedList_t4582 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::get_Count()
extern "C" int32_t ListValues_get_Count_m21146 (ListValues_t4959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsSynchronized()
extern "C" bool ListValues_get_IsSynchronized_m21147 (ListValues_t4959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListValues::get_SyncRoot()
extern "C" Object_t * ListValues_get_SyncRoot_m21148 (ListValues_t4959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::CopyTo(System.Array,System.Int32)
extern "C" void ListValues_CopyTo_m21149 (ListValues_t4959 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsFixedSize()
extern "C" bool ListValues_get_IsFixedSize_m21150 (ListValues_t4959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsReadOnly()
extern "C" bool ListValues_get_IsReadOnly_m21151 (ListValues_t4959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListValues::get_Item(System.Int32)
extern "C" Object_t * ListValues_get_Item_m21152 (ListValues_t4959 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::set_Item(System.Int32,System.Object)
extern "C" void ListValues_set_Item_m21153 (ListValues_t4959 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::Add(System.Object)
extern "C" int32_t ListValues_Add_m21154 (ListValues_t4959 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Clear()
extern "C" void ListValues_Clear_m21155 (ListValues_t4959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::Contains(System.Object)
extern "C" bool ListValues_Contains_m21156 (ListValues_t4959 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::IndexOf(System.Object)
extern "C" int32_t ListValues_IndexOf_m21157 (ListValues_t4959 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Insert(System.Int32,System.Object)
extern "C" void ListValues_Insert_m21158 (ListValues_t4959 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Remove(System.Object)
extern "C" void ListValues_Remove_m21159 (ListValues_t4959 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::RemoveAt(System.Int32)
extern "C" void ListValues_RemoveAt_m21160 (ListValues_t4959 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList/ListValues::GetEnumerator()
extern "C" Object_t * ListValues_GetEnumerator_m21161 (ListValues_t4959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
