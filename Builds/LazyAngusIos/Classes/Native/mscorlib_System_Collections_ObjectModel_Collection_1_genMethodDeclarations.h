#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t5987;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1403;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m26094_gshared (Collection_1_t5987 * __this, const MethodInfo* method);
#define Collection_1__ctor_m26094(__this, method) (( void (*) (Collection_1_t5987 *, const MethodInfo*))Collection_1__ctor_m26094_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26095_gshared (Collection_1_t5987 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26095(__this, method) (( bool (*) (Collection_1_t5987 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26095_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m26096_gshared (Collection_1_t5987 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m26096(__this, ___array, ___index, method) (( void (*) (Collection_1_t5987 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m26096_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m26097_gshared (Collection_1_t5987 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m26097(__this, method) (( Object_t * (*) (Collection_1_t5987 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m26097_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m26098_gshared (Collection_1_t5987 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m26098(__this, ___value, method) (( int32_t (*) (Collection_1_t5987 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m26098_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m26099_gshared (Collection_1_t5987 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m26099(__this, ___value, method) (( bool (*) (Collection_1_t5987 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m26099_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m26100_gshared (Collection_1_t5987 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m26100(__this, ___value, method) (( int32_t (*) (Collection_1_t5987 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m26100_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m26101_gshared (Collection_1_t5987 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m26101(__this, ___index, ___value, method) (( void (*) (Collection_1_t5987 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m26101_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m26102_gshared (Collection_1_t5987 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m26102(__this, ___value, method) (( void (*) (Collection_1_t5987 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m26102_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m26103_gshared (Collection_1_t5987 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m26103(__this, method) (( bool (*) (Collection_1_t5987 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m26103_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m26104_gshared (Collection_1_t5987 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m26104(__this, method) (( Object_t * (*) (Collection_1_t5987 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m26104_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m26105_gshared (Collection_1_t5987 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m26105(__this, method) (( bool (*) (Collection_1_t5987 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m26105_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m26106_gshared (Collection_1_t5987 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m26106(__this, method) (( bool (*) (Collection_1_t5987 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m26106_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m26107_gshared (Collection_1_t5987 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m26107(__this, ___index, method) (( Object_t * (*) (Collection_1_t5987 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m26107_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m26108_gshared (Collection_1_t5987 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m26108(__this, ___index, ___value, method) (( void (*) (Collection_1_t5987 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m26108_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m26109_gshared (Collection_1_t5987 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m26109(__this, ___item, method) (( void (*) (Collection_1_t5987 *, Object_t *, const MethodInfo*))Collection_1_Add_m26109_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m26110_gshared (Collection_1_t5987 * __this, const MethodInfo* method);
#define Collection_1_Clear_m26110(__this, method) (( void (*) (Collection_1_t5987 *, const MethodInfo*))Collection_1_Clear_m26110_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m26111_gshared (Collection_1_t5987 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m26111(__this, method) (( void (*) (Collection_1_t5987 *, const MethodInfo*))Collection_1_ClearItems_m26111_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m26112_gshared (Collection_1_t5987 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m26112(__this, ___item, method) (( bool (*) (Collection_1_t5987 *, Object_t *, const MethodInfo*))Collection_1_Contains_m26112_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m26113_gshared (Collection_1_t5987 * __this, ObjectU5BU5D_t707* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m26113(__this, ___array, ___index, method) (( void (*) (Collection_1_t5987 *, ObjectU5BU5D_t707*, int32_t, const MethodInfo*))Collection_1_CopyTo_m26113_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m26114_gshared (Collection_1_t5987 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m26114(__this, method) (( Object_t* (*) (Collection_1_t5987 *, const MethodInfo*))Collection_1_GetEnumerator_m26114_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m26115_gshared (Collection_1_t5987 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m26115(__this, ___item, method) (( int32_t (*) (Collection_1_t5987 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m26115_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m26116_gshared (Collection_1_t5987 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m26116(__this, ___index, ___item, method) (( void (*) (Collection_1_t5987 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m26116_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m26117_gshared (Collection_1_t5987 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m26117(__this, ___index, ___item, method) (( void (*) (Collection_1_t5987 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m26117_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m26118_gshared (Collection_1_t5987 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m26118(__this, ___item, method) (( bool (*) (Collection_1_t5987 *, Object_t *, const MethodInfo*))Collection_1_Remove_m26118_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m26119_gshared (Collection_1_t5987 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m26119(__this, ___index, method) (( void (*) (Collection_1_t5987 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m26119_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m26120_gshared (Collection_1_t5987 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m26120(__this, ___index, method) (( void (*) (Collection_1_t5987 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m26120_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m26121_gshared (Collection_1_t5987 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m26121(__this, method) (( int32_t (*) (Collection_1_t5987 *, const MethodInfo*))Collection_1_get_Count_m26121_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m26122_gshared (Collection_1_t5987 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m26122(__this, ___index, method) (( Object_t * (*) (Collection_1_t5987 *, int32_t, const MethodInfo*))Collection_1_get_Item_m26122_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m26123_gshared (Collection_1_t5987 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m26123(__this, ___index, ___value, method) (( void (*) (Collection_1_t5987 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m26123_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m26124_gshared (Collection_1_t5987 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m26124(__this, ___index, ___item, method) (( void (*) (Collection_1_t5987 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m26124_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m26125_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m26125(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m26125_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m26126_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m26126(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m26126_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m26127_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m26127(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m26127_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m26128_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m26128(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m26128_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m26129_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m26129(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m26129_gshared)(__this /* static, unused */, ___list, method)
