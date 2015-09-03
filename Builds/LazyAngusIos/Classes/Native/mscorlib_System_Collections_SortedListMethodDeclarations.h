#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList
struct SortedList_t4578;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t768;
// System.Collections.IComparer
struct IComparer_t3316;
// System.Collections.IDictionary
struct IDictionary_t699;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Array
struct Array_t;
// System.Collections.SortedList/EnumeratorMode
#include "mscorlib_System_Collections_SortedList_EnumeratorMode.h"

// System.Void System.Collections.SortedList::.ctor()
extern "C" void SortedList__ctor_m21149 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Int32)
extern "C" void SortedList__ctor_m18116 (SortedList_t4578 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
extern "C" void SortedList__ctor_m21150 (SortedList_t4578 * __this, Object_t * ___comparer, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IDictionary,System.Collections.IComparer)
extern "C" void SortedList__ctor_m21151 (SortedList_t4578 * __this, Object_t * ___d, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
extern "C" void SortedList__cctor_m21152 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SortedList_System_Collections_IEnumerable_GetEnumerator_m21153 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
extern "C" int32_t SortedList_get_Count_m21154 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsSynchronized()
extern "C" bool SortedList_get_IsSynchronized_m21155 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
extern "C" Object_t * SortedList_get_SyncRoot_m21156 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
extern "C" bool SortedList_get_IsFixedSize_m21157 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
extern "C" bool SortedList_get_IsReadOnly_m21158 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.SortedList::get_Keys()
extern "C" Object_t * SortedList_get_Keys_m21159 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.SortedList::get_Values()
extern "C" Object_t * SortedList_get_Values_m21160 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
extern "C" Object_t * SortedList_get_Item_m21161 (SortedList_t4578 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
extern "C" void SortedList_set_Item_m21162 (SortedList_t4578 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
extern "C" int32_t SortedList_get_Capacity_m21163 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Capacity(System.Int32)
extern "C" void SortedList_set_Capacity_m21164 (SortedList_t4578 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
extern "C" void SortedList_Add_m21165 (SortedList_t4578 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Clear()
extern "C" void SortedList_Clear_m21166 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
extern "C" bool SortedList_Contains_m21167 (SortedList_t4578 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
extern "C" Object_t * SortedList_GetEnumerator_m21168 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
extern "C" void SortedList_Remove_m21169 (SortedList_t4578 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
extern "C" void SortedList_CopyTo_m21170 (SortedList_t4578 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::Clone()
extern "C" Object_t * SortedList_Clone_m21171 (SortedList_t4578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
extern "C" void SortedList_RemoveAt_m21172 (SortedList_t4578 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
extern "C" int32_t SortedList_IndexOfKey_m21173 (SortedList_t4578 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfValue(System.Object)
extern "C" int32_t SortedList_IndexOfValue_m21174 (SortedList_t4578 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsKey(System.Object)
extern "C" bool SortedList_ContainsKey_m21175 (SortedList_t4578 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsValue(System.Object)
extern "C" bool SortedList_ContainsValue_m21176 (SortedList_t4578 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
extern "C" Object_t * SortedList_GetByIndex_m21177 (SortedList_t4578 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetKey(System.Int32)
extern "C" Object_t * SortedList_GetKey_m21178 (SortedList_t4578 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
extern "C" void SortedList_EnsureCapacity_m21179 (SortedList_t4578 * __this, int32_t ___n, int32_t ___free, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
extern "C" void SortedList_PutImpl_m21180 (SortedList_t4578 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
extern "C" Object_t * SortedList_GetImpl_m21181 (SortedList_t4578 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
extern "C" void SortedList_InitTable_m21182 (SortedList_t4578 * __this, int32_t ___capacity, bool ___forceSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyToArray(System.Array,System.Int32,System.Collections.SortedList/EnumeratorMode)
extern "C" void SortedList_CopyToArray_m21183 (SortedList_t4578 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
extern "C" int32_t SortedList_Find_m21184 (SortedList_t4578 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
