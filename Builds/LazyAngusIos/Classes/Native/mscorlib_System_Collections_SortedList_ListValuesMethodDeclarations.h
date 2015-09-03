#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList/ListValues
struct ListValues_t4955;
// System.Object
struct Object_t;
// System.Collections.SortedList
struct SortedList_t4578;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void System.Collections.SortedList/ListValues::.ctor(System.Collections.SortedList)
extern "C" void ListValues__ctor_m21132 (ListValues_t4955 * __this, SortedList_t4578 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::get_Count()
extern "C" int32_t ListValues_get_Count_m21133 (ListValues_t4955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsSynchronized()
extern "C" bool ListValues_get_IsSynchronized_m21134 (ListValues_t4955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListValues::get_SyncRoot()
extern "C" Object_t * ListValues_get_SyncRoot_m21135 (ListValues_t4955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::CopyTo(System.Array,System.Int32)
extern "C" void ListValues_CopyTo_m21136 (ListValues_t4955 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsFixedSize()
extern "C" bool ListValues_get_IsFixedSize_m21137 (ListValues_t4955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsReadOnly()
extern "C" bool ListValues_get_IsReadOnly_m21138 (ListValues_t4955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListValues::get_Item(System.Int32)
extern "C" Object_t * ListValues_get_Item_m21139 (ListValues_t4955 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::set_Item(System.Int32,System.Object)
extern "C" void ListValues_set_Item_m21140 (ListValues_t4955 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::Add(System.Object)
extern "C" int32_t ListValues_Add_m21141 (ListValues_t4955 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Clear()
extern "C" void ListValues_Clear_m21142 (ListValues_t4955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::Contains(System.Object)
extern "C" bool ListValues_Contains_m21143 (ListValues_t4955 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::IndexOf(System.Object)
extern "C" int32_t ListValues_IndexOf_m21144 (ListValues_t4955 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Insert(System.Int32,System.Object)
extern "C" void ListValues_Insert_m21145 (ListValues_t4955 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Remove(System.Object)
extern "C" void ListValues_Remove_m21146 (ListValues_t4955 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::RemoveAt(System.Int32)
extern "C" void ListValues_RemoveAt_m21147 (ListValues_t4955 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList/ListValues::GetEnumerator()
extern "C" Object_t * ListValues_GetEnumerator_m21148 (ListValues_t4955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
