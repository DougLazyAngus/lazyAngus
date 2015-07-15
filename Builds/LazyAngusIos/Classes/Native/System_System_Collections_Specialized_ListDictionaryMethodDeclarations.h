#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1439;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t592;
// System.Collections.IComparer
struct IComparer_t1446;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t1441;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1443;

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern "C" void ListDictionary__ctor_m6958 (ListDictionary_t1439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern "C" void ListDictionary__ctor_m6959 (ListDictionary_t1439 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m6960 (ListDictionary_t1439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
extern "C" DictionaryNode_t1441 * ListDictionary_FindEntry_m6961 (ListDictionary_t1439 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
extern "C" DictionaryNode_t1441 * ListDictionary_FindEntry_m6962 (ListDictionary_t1439 * __this, Object_t * ___key, DictionaryNode_t1441 ** ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
extern "C" void ListDictionary_AddImpl_m6963 (ListDictionary_t1439 * __this, Object_t * ___key, Object_t * ___value, DictionaryNode_t1441 * ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern "C" int32_t ListDictionary_get_Count_m6964 (ListDictionary_t1439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
extern "C" bool ListDictionary_get_IsSynchronized_m6965 (ListDictionary_t1439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern "C" Object_t * ListDictionary_get_SyncRoot_m6966 (ListDictionary_t1439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern "C" void ListDictionary_CopyTo_m6967 (ListDictionary_t1439 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern "C" Object_t * ListDictionary_get_Item_m6968 (ListDictionary_t1439 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern "C" void ListDictionary_set_Item_m6969 (ListDictionary_t1439 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Keys()
extern "C" Object_t * ListDictionary_get_Keys_m6970 (ListDictionary_t1439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern "C" void ListDictionary_Add_m6971 (ListDictionary_t1439 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
extern "C" void ListDictionary_Clear_m6972 (ListDictionary_t1439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern "C" bool ListDictionary_Contains_m6973 (ListDictionary_t1439 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern "C" Object_t * ListDictionary_GetEnumerator_m6974 (ListDictionary_t1439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern "C" void ListDictionary_Remove_m6975 (ListDictionary_t1439 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
