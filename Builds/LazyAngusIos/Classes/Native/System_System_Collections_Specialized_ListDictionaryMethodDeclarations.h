#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3718;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t772;
// System.Collections.IComparer
struct IComparer_t3320;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t4213;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern "C" void ListDictionary__ctor_m14842 (ListDictionary_t3718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern "C" void ListDictionary__ctor_m15663 (ListDictionary_t3718 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m15664 (ListDictionary_t3718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
extern "C" DictionaryNode_t4213 * ListDictionary_FindEntry_m15665 (ListDictionary_t3718 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
extern "C" DictionaryNode_t4213 * ListDictionary_FindEntry_m15666 (ListDictionary_t3718 * __this, Object_t * ___key, DictionaryNode_t4213 ** ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
extern "C" void ListDictionary_AddImpl_m15667 (ListDictionary_t3718 * __this, Object_t * ___key, Object_t * ___value, DictionaryNode_t4213 * ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern "C" int32_t ListDictionary_get_Count_m15668 (ListDictionary_t3718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
extern "C" bool ListDictionary_get_IsSynchronized_m15669 (ListDictionary_t3718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern "C" Object_t * ListDictionary_get_SyncRoot_m15670 (ListDictionary_t3718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern "C" void ListDictionary_CopyTo_m15671 (ListDictionary_t3718 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern "C" Object_t * ListDictionary_get_Item_m15672 (ListDictionary_t3718 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern "C" void ListDictionary_set_Item_m15673 (ListDictionary_t3718 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Keys()
extern "C" Object_t * ListDictionary_get_Keys_m15674 (ListDictionary_t3718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Values()
extern "C" Object_t * ListDictionary_get_Values_m15675 (ListDictionary_t3718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern "C" void ListDictionary_Add_m15676 (ListDictionary_t3718 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
extern "C" void ListDictionary_Clear_m15677 (ListDictionary_t3718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern "C" bool ListDictionary_Contains_m15678 (ListDictionary_t3718 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern "C" Object_t * ListDictionary_GetEnumerator_m15679 (ListDictionary_t3718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern "C" void ListDictionary_Remove_m15680 (ListDictionary_t3718 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
