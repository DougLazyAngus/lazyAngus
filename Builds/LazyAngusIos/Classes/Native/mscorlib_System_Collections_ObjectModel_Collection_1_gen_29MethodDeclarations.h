#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Collection_1_t8534;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t8529;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t9604;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IList_1_t8532;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void Collection_1__ctor_m62709_gshared (Collection_1_t8534 * __this, const MethodInfo* method);
#define Collection_1__ctor_m62709(__this, method) (( void (*) (Collection_1_t8534 *, const MethodInfo*))Collection_1__ctor_m62709_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62710_gshared (Collection_1_t8534 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62710(__this, method) (( bool (*) (Collection_1_t8534 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62710_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m62711_gshared (Collection_1_t8534 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m62711(__this, ___array, ___index, method) (( void (*) (Collection_1_t8534 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m62711_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m62712_gshared (Collection_1_t8534 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m62712(__this, method) (( Object_t * (*) (Collection_1_t8534 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m62712_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m62713_gshared (Collection_1_t8534 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m62713(__this, ___value, method) (( int32_t (*) (Collection_1_t8534 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m62713_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m62714_gshared (Collection_1_t8534 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m62714(__this, ___value, method) (( bool (*) (Collection_1_t8534 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m62714_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m62715_gshared (Collection_1_t8534 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m62715(__this, ___value, method) (( int32_t (*) (Collection_1_t8534 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m62715_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m62716_gshared (Collection_1_t8534 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m62716(__this, ___index, ___value, method) (( void (*) (Collection_1_t8534 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m62716_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m62717_gshared (Collection_1_t8534 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m62717(__this, ___value, method) (( void (*) (Collection_1_t8534 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m62717_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m62718_gshared (Collection_1_t8534 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m62718(__this, method) (( bool (*) (Collection_1_t8534 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m62718_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m62719_gshared (Collection_1_t8534 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m62719(__this, method) (( Object_t * (*) (Collection_1_t8534 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m62719_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m62720_gshared (Collection_1_t8534 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m62720(__this, method) (( bool (*) (Collection_1_t8534 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m62720_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m62721_gshared (Collection_1_t8534 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m62721(__this, method) (( bool (*) (Collection_1_t8534 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m62721_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m62722_gshared (Collection_1_t8534 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m62722(__this, ___index, method) (( Object_t * (*) (Collection_1_t8534 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m62722_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m62723_gshared (Collection_1_t8534 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m62723(__this, ___index, ___value, method) (( void (*) (Collection_1_t8534 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m62723_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void Collection_1_Add_m62724_gshared (Collection_1_t8534 * __this, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define Collection_1_Add_m62724(__this, ___item, method) (( void (*) (Collection_1_t8534 *, KeyValuePair_2_t3321 , const MethodInfo*))Collection_1_Add_m62724_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void Collection_1_Clear_m62725_gshared (Collection_1_t8534 * __this, const MethodInfo* method);
#define Collection_1_Clear_m62725(__this, method) (( void (*) (Collection_1_t8534 *, const MethodInfo*))Collection_1_Clear_m62725_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ClearItems()
extern "C" void Collection_1_ClearItems_m62726_gshared (Collection_1_t8534 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m62726(__this, method) (( void (*) (Collection_1_t8534 *, const MethodInfo*))Collection_1_ClearItems_m62726_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool Collection_1_Contains_m62727_gshared (Collection_1_t8534 * __this, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define Collection_1_Contains_m62727(__this, ___item, method) (( bool (*) (Collection_1_t8534 *, KeyValuePair_2_t3321 , const MethodInfo*))Collection_1_Contains_m62727_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m62728_gshared (Collection_1_t8534 * __this, KeyValuePair_2U5BU5D_t8529* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m62728(__this, ___array, ___index, method) (( void (*) (Collection_1_t8534 *, KeyValuePair_2U5BU5D_t8529*, int32_t, const MethodInfo*))Collection_1_CopyTo_m62728_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m62729_gshared (Collection_1_t8534 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m62729(__this, method) (( Object_t* (*) (Collection_1_t8534 *, const MethodInfo*))Collection_1_GetEnumerator_m62729_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m62730_gshared (Collection_1_t8534 * __this, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m62730(__this, ___item, method) (( int32_t (*) (Collection_1_t8534 *, KeyValuePair_2_t3321 , const MethodInfo*))Collection_1_IndexOf_m62730_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m62731_gshared (Collection_1_t8534 * __this, int32_t ___index, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define Collection_1_Insert_m62731(__this, ___index, ___item, method) (( void (*) (Collection_1_t8534 *, int32_t, KeyValuePair_2_t3321 , const MethodInfo*))Collection_1_Insert_m62731_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m62732_gshared (Collection_1_t8534 * __this, int32_t ___index, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m62732(__this, ___index, ___item, method) (( void (*) (Collection_1_t8534 *, int32_t, KeyValuePair_2_t3321 , const MethodInfo*))Collection_1_InsertItem_m62732_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool Collection_1_Remove_m62733_gshared (Collection_1_t8534 * __this, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define Collection_1_Remove_m62733(__this, ___item, method) (( bool (*) (Collection_1_t8534 *, KeyValuePair_2_t3321 , const MethodInfo*))Collection_1_Remove_m62733_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m62734_gshared (Collection_1_t8534 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m62734(__this, ___index, method) (( void (*) (Collection_1_t8534 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m62734_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m62735_gshared (Collection_1_t8534 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m62735(__this, ___index, method) (( void (*) (Collection_1_t8534 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m62735_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t Collection_1_get_Count_m62736_gshared (Collection_1_t8534 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m62736(__this, method) (( int32_t (*) (Collection_1_t8534 *, const MethodInfo*))Collection_1_get_Count_m62736_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3321  Collection_1_get_Item_m62737_gshared (Collection_1_t8534 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m62737(__this, ___index, method) (( KeyValuePair_2_t3321  (*) (Collection_1_t8534 *, int32_t, const MethodInfo*))Collection_1_get_Item_m62737_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m62738_gshared (Collection_1_t8534 * __this, int32_t ___index, KeyValuePair_2_t3321  ___value, const MethodInfo* method);
#define Collection_1_set_Item_m62738(__this, ___index, ___value, method) (( void (*) (Collection_1_t8534 *, int32_t, KeyValuePair_2_t3321 , const MethodInfo*))Collection_1_set_Item_m62738_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m62739_gshared (Collection_1_t8534 * __this, int32_t ___index, KeyValuePair_2_t3321  ___item, const MethodInfo* method);
#define Collection_1_SetItem_m62739(__this, ___index, ___item, method) (( void (*) (Collection_1_t8534 *, int32_t, KeyValuePair_2_t3321 , const MethodInfo*))Collection_1_SetItem_m62739_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m62740_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m62740(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m62740_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ConvertItem(System.Object)
extern "C" KeyValuePair_2_t3321  Collection_1_ConvertItem_m62741_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m62741(__this /* static, unused */, ___item, method) (( KeyValuePair_2_t3321  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m62741_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m62742_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m62742(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m62742_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m62743_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m62743(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m62743_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m62744_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m62744(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m62744_gshared)(__this /* static, unused */, ___list, method)
