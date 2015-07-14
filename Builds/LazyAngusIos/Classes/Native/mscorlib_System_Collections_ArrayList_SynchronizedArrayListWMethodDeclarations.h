#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct SynchronizedArrayListWrapper_t2349;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1449;
// System.Collections.ICollection
struct ICollection_t590;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.IComparer
struct IComparer_t1444;
// System.Object[]
struct ObjectU5BU5D_t531;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void SynchronizedArrayListWrapper__ctor_m12593 (SynchronizedArrayListWrapper_t2349 * __this, ArrayList_t1449 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * SynchronizedArrayListWrapper_get_Item_m12594 (SynchronizedArrayListWrapper_t2349 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void SynchronizedArrayListWrapper_set_Item_m12595 (SynchronizedArrayListWrapper_t2349 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Count()
extern "C" int32_t SynchronizedArrayListWrapper_get_Count_m12596 (SynchronizedArrayListWrapper_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsFixedSize()
extern "C" bool SynchronizedArrayListWrapper_get_IsFixedSize_m12597 (SynchronizedArrayListWrapper_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsReadOnly()
extern "C" bool SynchronizedArrayListWrapper_get_IsReadOnly_m12598 (SynchronizedArrayListWrapper_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsSynchronized()
extern "C" bool SynchronizedArrayListWrapper_get_IsSynchronized_m12599 (SynchronizedArrayListWrapper_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_SyncRoot()
extern "C" Object_t * SynchronizedArrayListWrapper_get_SyncRoot_m12600 (SynchronizedArrayListWrapper_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::Add(System.Object)
extern "C" int32_t SynchronizedArrayListWrapper_Add_m12601 (SynchronizedArrayListWrapper_t2349 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Clear()
extern "C" void SynchronizedArrayListWrapper_Clear_m12602 (SynchronizedArrayListWrapper_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::Contains(System.Object)
extern "C" bool SynchronizedArrayListWrapper_Contains_m12603 (SynchronizedArrayListWrapper_t2349 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m12604 (SynchronizedArrayListWrapper_t2349 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m12605 (SynchronizedArrayListWrapper_t2349 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m12606 (SynchronizedArrayListWrapper_t2349 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void SynchronizedArrayListWrapper_Insert_m12607 (SynchronizedArrayListWrapper_t2349 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void SynchronizedArrayListWrapper_InsertRange_m12608 (SynchronizedArrayListWrapper_t2349 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Remove(System.Object)
extern "C" void SynchronizedArrayListWrapper_Remove_m12609 (SynchronizedArrayListWrapper_t2349 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::RemoveAt(System.Int32)
extern "C" void SynchronizedArrayListWrapper_RemoveAt_m12610 (SynchronizedArrayListWrapper_t2349 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m12611 (SynchronizedArrayListWrapper_t2349 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m12612 (SynchronizedArrayListWrapper_t2349 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m12613 (SynchronizedArrayListWrapper_t2349 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/SynchronizedArrayListWrapper::GetEnumerator()
extern "C" Object_t * SynchronizedArrayListWrapper_GetEnumerator_m12614 (SynchronizedArrayListWrapper_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void SynchronizedArrayListWrapper_AddRange_m12615 (SynchronizedArrayListWrapper_t2349 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::Clone()
extern "C" Object_t * SynchronizedArrayListWrapper_Clone_m12616 (SynchronizedArrayListWrapper_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort()
extern "C" void SynchronizedArrayListWrapper_Sort_m12617 (SynchronizedArrayListWrapper_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void SynchronizedArrayListWrapper_Sort_m12618 (SynchronizedArrayListWrapper_t2349 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray()
extern "C" ObjectU5BU5D_t531* SynchronizedArrayListWrapper_ToArray_m12619 (SynchronizedArrayListWrapper_t2349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray(System.Type)
extern "C" Array_t * SynchronizedArrayListWrapper_ToArray_m12620 (SynchronizedArrayListWrapper_t2349 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
