#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Single>
struct Collection_1_t3601;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Single[]
struct SingleU5BU5D_t450;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t4330;
// System.Collections.Generic.IList`1<System.Single>
struct IList_1_t3599;

// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::.ctor()
extern "C" void Collection_1__ctor_m21469_gshared (Collection_1_t3601 * __this, const MethodInfo* method);
#define Collection_1__ctor_m21469(__this, method) (( void (*) (Collection_1_t3601 *, const MethodInfo*))Collection_1__ctor_m21469_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21470_gshared (Collection_1_t3601 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21470(__this, method) (( bool (*) (Collection_1_t3601 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21470_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m21471_gshared (Collection_1_t3601 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m21471(__this, ___array, ___index, method) (( void (*) (Collection_1_t3601 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m21471_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m21472_gshared (Collection_1_t3601 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m21472(__this, method) (( Object_t * (*) (Collection_1_t3601 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m21472_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m21473_gshared (Collection_1_t3601 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m21473(__this, ___value, method) (( int32_t (*) (Collection_1_t3601 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m21473_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m21474_gshared (Collection_1_t3601 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m21474(__this, ___value, method) (( bool (*) (Collection_1_t3601 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m21474_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m21475_gshared (Collection_1_t3601 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m21475(__this, ___value, method) (( int32_t (*) (Collection_1_t3601 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m21475_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m21476_gshared (Collection_1_t3601 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m21476(__this, ___index, ___value, method) (( void (*) (Collection_1_t3601 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m21476_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m21477_gshared (Collection_1_t3601 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m21477(__this, ___value, method) (( void (*) (Collection_1_t3601 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m21477_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m21478_gshared (Collection_1_t3601 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m21478(__this, method) (( bool (*) (Collection_1_t3601 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m21478_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m21479_gshared (Collection_1_t3601 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m21479(__this, method) (( Object_t * (*) (Collection_1_t3601 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m21479_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m21480_gshared (Collection_1_t3601 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m21480(__this, method) (( bool (*) (Collection_1_t3601 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m21480_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m21481_gshared (Collection_1_t3601 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m21481(__this, method) (( bool (*) (Collection_1_t3601 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m21481_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m21482_gshared (Collection_1_t3601 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m21482(__this, ___index, method) (( Object_t * (*) (Collection_1_t3601 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m21482_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m21483_gshared (Collection_1_t3601 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m21483(__this, ___index, ___value, method) (( void (*) (Collection_1_t3601 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m21483_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Add(T)
extern "C" void Collection_1_Add_m21484_gshared (Collection_1_t3601 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Add_m21484(__this, ___item, method) (( void (*) (Collection_1_t3601 *, float, const MethodInfo*))Collection_1_Add_m21484_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Clear()
extern "C" void Collection_1_Clear_m21485_gshared (Collection_1_t3601 * __this, const MethodInfo* method);
#define Collection_1_Clear_m21485(__this, method) (( void (*) (Collection_1_t3601 *, const MethodInfo*))Collection_1_Clear_m21485_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::ClearItems()
extern "C" void Collection_1_ClearItems_m21486_gshared (Collection_1_t3601 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m21486(__this, method) (( void (*) (Collection_1_t3601 *, const MethodInfo*))Collection_1_ClearItems_m21486_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Contains(T)
extern "C" bool Collection_1_Contains_m21487_gshared (Collection_1_t3601 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Contains_m21487(__this, ___item, method) (( bool (*) (Collection_1_t3601 *, float, const MethodInfo*))Collection_1_Contains_m21487_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m21488_gshared (Collection_1_t3601 * __this, SingleU5BU5D_t450* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m21488(__this, ___array, ___index, method) (( void (*) (Collection_1_t3601 *, SingleU5BU5D_t450*, int32_t, const MethodInfo*))Collection_1_CopyTo_m21488_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Single>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m21489_gshared (Collection_1_t3601 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m21489(__this, method) (( Object_t* (*) (Collection_1_t3601 *, const MethodInfo*))Collection_1_GetEnumerator_m21489_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m21490_gshared (Collection_1_t3601 * __this, float ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m21490(__this, ___item, method) (( int32_t (*) (Collection_1_t3601 *, float, const MethodInfo*))Collection_1_IndexOf_m21490_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m21491_gshared (Collection_1_t3601 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_Insert_m21491(__this, ___index, ___item, method) (( void (*) (Collection_1_t3601 *, int32_t, float, const MethodInfo*))Collection_1_Insert_m21491_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m21492_gshared (Collection_1_t3601 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m21492(__this, ___index, ___item, method) (( void (*) (Collection_1_t3601 *, int32_t, float, const MethodInfo*))Collection_1_InsertItem_m21492_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Remove(T)
extern "C" bool Collection_1_Remove_m21493_gshared (Collection_1_t3601 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Remove_m21493(__this, ___item, method) (( bool (*) (Collection_1_t3601 *, float, const MethodInfo*))Collection_1_Remove_m21493_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m21494_gshared (Collection_1_t3601 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m21494(__this, ___index, method) (( void (*) (Collection_1_t3601 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m21494_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m21495_gshared (Collection_1_t3601 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m21495(__this, ___index, method) (( void (*) (Collection_1_t3601 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m21495_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::get_Count()
extern "C" int32_t Collection_1_get_Count_m21496_gshared (Collection_1_t3601 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m21496(__this, method) (( int32_t (*) (Collection_1_t3601 *, const MethodInfo*))Collection_1_get_Count_m21496_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::get_Item(System.Int32)
extern "C" float Collection_1_get_Item_m21497_gshared (Collection_1_t3601 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m21497(__this, ___index, method) (( float (*) (Collection_1_t3601 *, int32_t, const MethodInfo*))Collection_1_get_Item_m21497_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m21498_gshared (Collection_1_t3601 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define Collection_1_set_Item_m21498(__this, ___index, ___value, method) (( void (*) (Collection_1_t3601 *, int32_t, float, const MethodInfo*))Collection_1_set_Item_m21498_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m21499_gshared (Collection_1_t3601 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_SetItem_m21499(__this, ___index, ___item, method) (( void (*) (Collection_1_t3601 *, int32_t, float, const MethodInfo*))Collection_1_SetItem_m21499_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m21500_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m21500(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m21500_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::ConvertItem(System.Object)
extern "C" float Collection_1_ConvertItem_m21501_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m21501(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m21501_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m21502_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m21502(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m21502_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m21503_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m21503(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m21503_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m21504_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m21504(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m21504_gshared)(__this /* static, unused */, ___list, method)
