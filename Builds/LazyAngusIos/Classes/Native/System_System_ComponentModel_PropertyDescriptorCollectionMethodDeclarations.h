#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4251;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t769;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4220;
// System.String
struct String_t;
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t4550;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t799;
// System.Array
struct Array_t;
// System.Attribute[]
struct AttributeU5BU5D_t4248;

// System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[])
extern "C" void PropertyDescriptorCollection__ctor_m15875 (PropertyDescriptorCollection_t4251 * __this, PropertyDescriptorU5BU5D_t4550* ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[],System.Boolean)
extern "C" void PropertyDescriptorCollection__ctor_m15876 (PropertyDescriptorCollection_t4251 * __this, PropertyDescriptorU5BU5D_t4550* ___properties, bool ___readOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::.cctor()
extern "C" void PropertyDescriptorCollection__cctor_m15877 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Add(System.Object)
extern "C" int32_t PropertyDescriptorCollection_System_Collections_IList_Add_m15878 (PropertyDescriptorCollection_t4251 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_Add_m15879 (PropertyDescriptorCollection_t4251 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Clear()
extern "C" void PropertyDescriptorCollection_System_Collections_IList_Clear_m15880 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Clear()
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_Clear_m15881 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Contains(System.Object)
extern "C" bool PropertyDescriptorCollection_System_Collections_IList_Contains_m15882 (PropertyDescriptorCollection_t4251 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool PropertyDescriptorCollection_System_Collections_IDictionary_Contains_m15883 (PropertyDescriptorCollection_t4251 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_m15884 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_GetEnumerator_m15885 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t PropertyDescriptorCollection_System_Collections_IList_IndexOf_m15886 (PropertyDescriptorCollection_t4251 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IList_Insert_m15887 (PropertyDescriptorCollection_t4251 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.Remove(System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_Remove_m15888 (PropertyDescriptorCollection_t4251 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.Remove(System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IList_Remove_m15889 (PropertyDescriptorCollection_t4251 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void PropertyDescriptorCollection_System_Collections_IList_RemoveAt_m15890 (PropertyDescriptorCollection_t4251 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.get_IsFixedSize()
extern "C" bool PropertyDescriptorCollection_System_Collections_IList_get_IsFixedSize_m15891 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.get_IsReadOnly()
extern "C" bool PropertyDescriptorCollection_System_Collections_IList_get_IsReadOnly_m15892 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool PropertyDescriptorCollection_System_Collections_ICollection_get_IsSynchronized_m15893 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t PropertyDescriptorCollection_System_Collections_ICollection_get_Count_m15894 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_ICollection_get_SyncRoot_m15895 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_get_Keys_m15896 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Values()
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_get_Values_m15897 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IDictionary_get_Item_m15898 (PropertyDescriptorCollection_t4251 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IDictionary_set_Item_m15899 (PropertyDescriptorCollection_t4251 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * PropertyDescriptorCollection_System_Collections_IList_get_Item_m15900 (PropertyDescriptorCollection_t4251 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void PropertyDescriptorCollection_System_Collections_IList_set_Item_m15901 (PropertyDescriptorCollection_t4251 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::Add(System.ComponentModel.PropertyDescriptor)
extern "C" int32_t PropertyDescriptorCollection_Add_m15902 (PropertyDescriptorCollection_t4251 * __this, PropertyDescriptor_t4220 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::Clear()
extern "C" void PropertyDescriptorCollection_Clear_m15903 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptorCollection::Contains(System.ComponentModel.PropertyDescriptor)
extern "C" bool PropertyDescriptorCollection_Contains_m15904 (PropertyDescriptorCollection_t4251 * __this, PropertyDescriptor_t4220 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::CopyTo(System.Array,System.Int32)
extern "C" void PropertyDescriptorCollection_CopyTo_m15905 (PropertyDescriptorCollection_t4251 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::Find(System.String,System.Boolean)
extern "C" PropertyDescriptor_t4220 * PropertyDescriptorCollection_Find_m15906 (PropertyDescriptorCollection_t4251 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::GetEnumerator()
extern "C" Object_t * PropertyDescriptorCollection_GetEnumerator_m15907 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::IndexOf(System.ComponentModel.PropertyDescriptor)
extern "C" int32_t PropertyDescriptorCollection_IndexOf_m15908 (PropertyDescriptorCollection_t4251 * __this, PropertyDescriptor_t4220 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::Insert(System.Int32,System.ComponentModel.PropertyDescriptor)
extern "C" void PropertyDescriptorCollection_Insert_m15909 (PropertyDescriptorCollection_t4251 * __this, int32_t ___index, PropertyDescriptor_t4220 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::Remove(System.ComponentModel.PropertyDescriptor)
extern "C" void PropertyDescriptorCollection_Remove_m15910 (PropertyDescriptorCollection_t4251 * __this, PropertyDescriptor_t4220 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptorCollection::RemoveAt(System.Int32)
extern "C" void PropertyDescriptorCollection_RemoveAt_m15911 (PropertyDescriptorCollection_t4251 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Filter(System.Attribute[])
extern "C" PropertyDescriptorCollection_t4251 * PropertyDescriptorCollection_Filter_m15912 (PropertyDescriptorCollection_t4251 * __this, AttributeU5BU5D_t4248* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::get_Count()
extern "C" int32_t PropertyDescriptorCollection_get_Count_m15913 (PropertyDescriptorCollection_t4251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.PropertyDescriptorCollection::get_Item(System.String)
extern "C" PropertyDescriptor_t4220 * PropertyDescriptorCollection_get_Item_m15914 (PropertyDescriptorCollection_t4251 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
