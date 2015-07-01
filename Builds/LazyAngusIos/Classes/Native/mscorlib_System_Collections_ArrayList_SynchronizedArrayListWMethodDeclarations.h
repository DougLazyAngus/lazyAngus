#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct SynchronizedArrayListWrapper_t2304;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1404;
// System.Collections.ICollection
struct ICollection_t547;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.IComparer
struct IComparer_t1399;
// System.Object[]
struct ObjectU5BU5D_t485;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void SynchronizedArrayListWrapper__ctor_m12290 (SynchronizedArrayListWrapper_t2304 * __this, ArrayList_t1404 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * SynchronizedArrayListWrapper_get_Item_m12291 (SynchronizedArrayListWrapper_t2304 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void SynchronizedArrayListWrapper_set_Item_m12292 (SynchronizedArrayListWrapper_t2304 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Count()
extern "C" int32_t SynchronizedArrayListWrapper_get_Count_m12293 (SynchronizedArrayListWrapper_t2304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsFixedSize()
extern "C" bool SynchronizedArrayListWrapper_get_IsFixedSize_m12294 (SynchronizedArrayListWrapper_t2304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsReadOnly()
extern "C" bool SynchronizedArrayListWrapper_get_IsReadOnly_m12295 (SynchronizedArrayListWrapper_t2304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsSynchronized()
extern "C" bool SynchronizedArrayListWrapper_get_IsSynchronized_m12296 (SynchronizedArrayListWrapper_t2304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_SyncRoot()
extern "C" Object_t * SynchronizedArrayListWrapper_get_SyncRoot_m12297 (SynchronizedArrayListWrapper_t2304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::Add(System.Object)
extern "C" int32_t SynchronizedArrayListWrapper_Add_m12298 (SynchronizedArrayListWrapper_t2304 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Clear()
extern "C" void SynchronizedArrayListWrapper_Clear_m12299 (SynchronizedArrayListWrapper_t2304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::Contains(System.Object)
extern "C" bool SynchronizedArrayListWrapper_Contains_m12300 (SynchronizedArrayListWrapper_t2304 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m12301 (SynchronizedArrayListWrapper_t2304 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m12302 (SynchronizedArrayListWrapper_t2304 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m12303 (SynchronizedArrayListWrapper_t2304 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void SynchronizedArrayListWrapper_Insert_m12304 (SynchronizedArrayListWrapper_t2304 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void SynchronizedArrayListWrapper_InsertRange_m12305 (SynchronizedArrayListWrapper_t2304 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Remove(System.Object)
extern "C" void SynchronizedArrayListWrapper_Remove_m12306 (SynchronizedArrayListWrapper_t2304 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::RemoveAt(System.Int32)
extern "C" void SynchronizedArrayListWrapper_RemoveAt_m12307 (SynchronizedArrayListWrapper_t2304 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m12308 (SynchronizedArrayListWrapper_t2304 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m12309 (SynchronizedArrayListWrapper_t2304 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m12310 (SynchronizedArrayListWrapper_t2304 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/SynchronizedArrayListWrapper::GetEnumerator()
extern "C" Object_t * SynchronizedArrayListWrapper_GetEnumerator_m12311 (SynchronizedArrayListWrapper_t2304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void SynchronizedArrayListWrapper_AddRange_m12312 (SynchronizedArrayListWrapper_t2304 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::Clone()
extern "C" Object_t * SynchronizedArrayListWrapper_Clone_m12313 (SynchronizedArrayListWrapper_t2304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort()
extern "C" void SynchronizedArrayListWrapper_Sort_m12314 (SynchronizedArrayListWrapper_t2304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void SynchronizedArrayListWrapper_Sort_m12315 (SynchronizedArrayListWrapper_t2304 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray()
extern "C" ObjectU5BU5D_t485* SynchronizedArrayListWrapper_ToArray_m12316 (SynchronizedArrayListWrapper_t2304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray(System.Type)
extern "C" Array_t * SynchronizedArrayListWrapper_ToArray_m12317 (SynchronizedArrayListWrapper_t2304 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
