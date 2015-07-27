#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t3376;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t582;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1423;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m17509_gshared (Collection_1_t3376 * __this, const MethodInfo* method);
#define Collection_1__ctor_m17509(__this, method) (( void (*) (Collection_1_t3376 *, const MethodInfo*))Collection_1__ctor_m17509_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17510_gshared (Collection_1_t3376 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17510(__this, method) (( bool (*) (Collection_1_t3376 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17510_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m17511_gshared (Collection_1_t3376 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m17511(__this, ___array, ___index, method) (( void (*) (Collection_1_t3376 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m17511_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m17512_gshared (Collection_1_t3376 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m17512(__this, method) (( Object_t * (*) (Collection_1_t3376 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m17512_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m17513_gshared (Collection_1_t3376 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m17513(__this, ___value, method) (( int32_t (*) (Collection_1_t3376 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m17513_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m17514_gshared (Collection_1_t3376 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m17514(__this, ___value, method) (( bool (*) (Collection_1_t3376 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m17514_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m17515_gshared (Collection_1_t3376 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m17515(__this, ___value, method) (( int32_t (*) (Collection_1_t3376 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m17515_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m17516_gshared (Collection_1_t3376 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m17516(__this, ___index, ___value, method) (( void (*) (Collection_1_t3376 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m17516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m17517_gshared (Collection_1_t3376 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m17517(__this, ___value, method) (( void (*) (Collection_1_t3376 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m17517_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m17518_gshared (Collection_1_t3376 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m17518(__this, method) (( bool (*) (Collection_1_t3376 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m17518_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m17519_gshared (Collection_1_t3376 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m17519(__this, method) (( Object_t * (*) (Collection_1_t3376 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m17519_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m17520_gshared (Collection_1_t3376 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m17520(__this, method) (( bool (*) (Collection_1_t3376 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m17520_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m17521_gshared (Collection_1_t3376 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m17521(__this, method) (( bool (*) (Collection_1_t3376 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m17521_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m17522_gshared (Collection_1_t3376 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m17522(__this, ___index, method) (( Object_t * (*) (Collection_1_t3376 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m17522_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m17523_gshared (Collection_1_t3376 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m17523(__this, ___index, ___value, method) (( void (*) (Collection_1_t3376 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m17523_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m17524_gshared (Collection_1_t3376 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m17524(__this, ___item, method) (( void (*) (Collection_1_t3376 *, Object_t *, const MethodInfo*))Collection_1_Add_m17524_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m17525_gshared (Collection_1_t3376 * __this, const MethodInfo* method);
#define Collection_1_Clear_m17525(__this, method) (( void (*) (Collection_1_t3376 *, const MethodInfo*))Collection_1_Clear_m17525_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m17526_gshared (Collection_1_t3376 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m17526(__this, method) (( void (*) (Collection_1_t3376 *, const MethodInfo*))Collection_1_ClearItems_m17526_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m17527_gshared (Collection_1_t3376 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m17527(__this, ___item, method) (( bool (*) (Collection_1_t3376 *, Object_t *, const MethodInfo*))Collection_1_Contains_m17527_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m17528_gshared (Collection_1_t3376 * __this, ObjectU5BU5D_t582* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m17528(__this, ___array, ___index, method) (( void (*) (Collection_1_t3376 *, ObjectU5BU5D_t582*, int32_t, const MethodInfo*))Collection_1_CopyTo_m17528_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m17529_gshared (Collection_1_t3376 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m17529(__this, method) (( Object_t* (*) (Collection_1_t3376 *, const MethodInfo*))Collection_1_GetEnumerator_m17529_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m17530_gshared (Collection_1_t3376 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m17530(__this, ___item, method) (( int32_t (*) (Collection_1_t3376 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m17530_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m17531_gshared (Collection_1_t3376 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m17531(__this, ___index, ___item, method) (( void (*) (Collection_1_t3376 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m17531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m17532_gshared (Collection_1_t3376 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m17532(__this, ___index, ___item, method) (( void (*) (Collection_1_t3376 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m17532_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m17533_gshared (Collection_1_t3376 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m17533(__this, ___item, method) (( bool (*) (Collection_1_t3376 *, Object_t *, const MethodInfo*))Collection_1_Remove_m17533_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m17534_gshared (Collection_1_t3376 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m17534(__this, ___index, method) (( void (*) (Collection_1_t3376 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m17534_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m17535_gshared (Collection_1_t3376 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m17535(__this, ___index, method) (( void (*) (Collection_1_t3376 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m17535_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m17536_gshared (Collection_1_t3376 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m17536(__this, method) (( int32_t (*) (Collection_1_t3376 *, const MethodInfo*))Collection_1_get_Count_m17536_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m17537_gshared (Collection_1_t3376 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m17537(__this, ___index, method) (( Object_t * (*) (Collection_1_t3376 *, int32_t, const MethodInfo*))Collection_1_get_Item_m17537_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m17538_gshared (Collection_1_t3376 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m17538(__this, ___index, ___value, method) (( void (*) (Collection_1_t3376 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m17538_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m17539_gshared (Collection_1_t3376 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m17539(__this, ___index, ___item, method) (( void (*) (Collection_1_t3376 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m17539_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m17540_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m17540(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m17540_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m17541_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m17541(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m17541_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m17542_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m17542(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m17542_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m17543_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m17543(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m17543_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m17544_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m17544(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m17544_gshared)(__this /* static, unused */, ___list, method)
