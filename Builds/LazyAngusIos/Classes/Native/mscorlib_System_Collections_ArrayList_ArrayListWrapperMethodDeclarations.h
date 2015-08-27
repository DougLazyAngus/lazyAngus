#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t4434;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t699;
// System.Collections.ICollection
struct ICollection_t755;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.IComparer
struct IComparer_t3962;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void ArrayListWrapper__ctor_m16822 (ArrayListWrapper_t4434 * __this, ArrayList_t699 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * ArrayListWrapper_get_Item_m16823 (ArrayListWrapper_t4434 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void ArrayListWrapper_set_Item_m16824 (ArrayListWrapper_t4434 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
extern "C" int32_t ArrayListWrapper_get_Count_m16825 (ArrayListWrapper_t4434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Capacity()
extern "C" int32_t ArrayListWrapper_get_Capacity_m16826 (ArrayListWrapper_t4434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Capacity(System.Int32)
extern "C" void ArrayListWrapper_set_Capacity_m16827 (ArrayListWrapper_t4434 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsFixedSize()
extern "C" bool ArrayListWrapper_get_IsFixedSize_m16828 (ArrayListWrapper_t4434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
extern "C" bool ArrayListWrapper_get_IsReadOnly_m16829 (ArrayListWrapper_t4434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
extern "C" bool ArrayListWrapper_get_IsSynchronized_m16830 (ArrayListWrapper_t4434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
extern "C" Object_t * ArrayListWrapper_get_SyncRoot_m16831 (ArrayListWrapper_t4434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
extern "C" int32_t ArrayListWrapper_Add_m16832 (ArrayListWrapper_t4434 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
extern "C" void ArrayListWrapper_Clear_m16833 (ArrayListWrapper_t4434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
extern "C" bool ArrayListWrapper_Contains_m16834 (ArrayListWrapper_t4434 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
extern "C" int32_t ArrayListWrapper_IndexOf_m16835 (ArrayListWrapper_t4434 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C" int32_t ArrayListWrapper_IndexOf_m16836 (ArrayListWrapper_t4434 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t ArrayListWrapper_IndexOf_m16837 (ArrayListWrapper_t4434 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void ArrayListWrapper_Insert_m16838 (ArrayListWrapper_t4434 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void ArrayListWrapper_InsertRange_m16839 (ArrayListWrapper_t4434 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
extern "C" void ArrayListWrapper_Remove_m16840 (ArrayListWrapper_t4434 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
extern "C" void ArrayListWrapper_RemoveAt_m16841 (ArrayListWrapper_t4434 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
extern "C" void ArrayListWrapper_CopyTo_m16842 (ArrayListWrapper_t4434 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C" void ArrayListWrapper_CopyTo_m16843 (ArrayListWrapper_t4434 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void ArrayListWrapper_CopyTo_m16844 (ArrayListWrapper_t4434 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
extern "C" Object_t * ArrayListWrapper_GetEnumerator_m16845 (ArrayListWrapper_t4434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void ArrayListWrapper_AddRange_m16846 (ArrayListWrapper_t4434 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::Clone()
extern "C" Object_t * ArrayListWrapper_Clone_m16847 (ArrayListWrapper_t4434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
extern "C" void ArrayListWrapper_Sort_m16848 (ArrayListWrapper_t4434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void ArrayListWrapper_Sort_m16849 (ArrayListWrapper_t4434 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
extern "C" ObjectU5BU5D_t683* ArrayListWrapper_ToArray_m16850 (ArrayListWrapper_t4434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
extern "C" Array_t * ArrayListWrapper_ToArray_m16851 (ArrayListWrapper_t4434 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
