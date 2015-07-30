#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Collection_1_t8542;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t8537;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t9612;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IList_1_t8540;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void Collection_1__ctor_m62756_gshared (Collection_1_t8542 * __this, const MethodInfo* method);
#define Collection_1__ctor_m62756(__this, method) (( void (*) (Collection_1_t8542 *, const MethodInfo*))Collection_1__ctor_m62756_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62757_gshared (Collection_1_t8542 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62757(__this, method) (( bool (*) (Collection_1_t8542 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62757_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m62758_gshared (Collection_1_t8542 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m62758(__this, ___array, ___index, method) (( void (*) (Collection_1_t8542 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m62758_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m62759_gshared (Collection_1_t8542 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m62759(__this, method) (( Object_t * (*) (Collection_1_t8542 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m62759_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m62760_gshared (Collection_1_t8542 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m62760(__this, ___value, method) (( int32_t (*) (Collection_1_t8542 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m62760_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m62761_gshared (Collection_1_t8542 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m62761(__this, ___value, method) (( bool (*) (Collection_1_t8542 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m62761_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m62762_gshared (Collection_1_t8542 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m62762(__this, ___value, method) (( int32_t (*) (Collection_1_t8542 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m62762_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m62763_gshared (Collection_1_t8542 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m62763(__this, ___index, ___value, method) (( void (*) (Collection_1_t8542 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m62763_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m62764_gshared (Collection_1_t8542 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m62764(__this, ___value, method) (( void (*) (Collection_1_t8542 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m62764_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m62765_gshared (Collection_1_t8542 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m62765(__this, method) (( bool (*) (Collection_1_t8542 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m62765_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m62766_gshared (Collection_1_t8542 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m62766(__this, method) (( Object_t * (*) (Collection_1_t8542 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m62766_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m62767_gshared (Collection_1_t8542 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m62767(__this, method) (( bool (*) (Collection_1_t8542 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m62767_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m62768_gshared (Collection_1_t8542 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m62768(__this, method) (( bool (*) (Collection_1_t8542 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m62768_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m62769_gshared (Collection_1_t8542 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m62769(__this, ___index, method) (( Object_t * (*) (Collection_1_t8542 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m62769_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m62770_gshared (Collection_1_t8542 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m62770(__this, ___index, ___value, method) (( void (*) (Collection_1_t8542 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m62770_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void Collection_1_Add_m62771_gshared (Collection_1_t8542 * __this, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define Collection_1_Add_m62771(__this, ___item, method) (( void (*) (Collection_1_t8542 *, KeyValuePair_2_t3329 , const MethodInfo*))Collection_1_Add_m62771_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void Collection_1_Clear_m62772_gshared (Collection_1_t8542 * __this, const MethodInfo* method);
#define Collection_1_Clear_m62772(__this, method) (( void (*) (Collection_1_t8542 *, const MethodInfo*))Collection_1_Clear_m62772_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ClearItems()
extern "C" void Collection_1_ClearItems_m62773_gshared (Collection_1_t8542 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m62773(__this, method) (( void (*) (Collection_1_t8542 *, const MethodInfo*))Collection_1_ClearItems_m62773_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool Collection_1_Contains_m62774_gshared (Collection_1_t8542 * __this, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define Collection_1_Contains_m62774(__this, ___item, method) (( bool (*) (Collection_1_t8542 *, KeyValuePair_2_t3329 , const MethodInfo*))Collection_1_Contains_m62774_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m62775_gshared (Collection_1_t8542 * __this, KeyValuePair_2U5BU5D_t8537* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m62775(__this, ___array, ___index, method) (( void (*) (Collection_1_t8542 *, KeyValuePair_2U5BU5D_t8537*, int32_t, const MethodInfo*))Collection_1_CopyTo_m62775_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m62776_gshared (Collection_1_t8542 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m62776(__this, method) (( Object_t* (*) (Collection_1_t8542 *, const MethodInfo*))Collection_1_GetEnumerator_m62776_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m62777_gshared (Collection_1_t8542 * __this, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m62777(__this, ___item, method) (( int32_t (*) (Collection_1_t8542 *, KeyValuePair_2_t3329 , const MethodInfo*))Collection_1_IndexOf_m62777_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m62778_gshared (Collection_1_t8542 * __this, int32_t ___index, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define Collection_1_Insert_m62778(__this, ___index, ___item, method) (( void (*) (Collection_1_t8542 *, int32_t, KeyValuePair_2_t3329 , const MethodInfo*))Collection_1_Insert_m62778_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m62779_gshared (Collection_1_t8542 * __this, int32_t ___index, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m62779(__this, ___index, ___item, method) (( void (*) (Collection_1_t8542 *, int32_t, KeyValuePair_2_t3329 , const MethodInfo*))Collection_1_InsertItem_m62779_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool Collection_1_Remove_m62780_gshared (Collection_1_t8542 * __this, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define Collection_1_Remove_m62780(__this, ___item, method) (( bool (*) (Collection_1_t8542 *, KeyValuePair_2_t3329 , const MethodInfo*))Collection_1_Remove_m62780_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m62781_gshared (Collection_1_t8542 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m62781(__this, ___index, method) (( void (*) (Collection_1_t8542 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m62781_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m62782_gshared (Collection_1_t8542 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m62782(__this, ___index, method) (( void (*) (Collection_1_t8542 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m62782_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t Collection_1_get_Count_m62783_gshared (Collection_1_t8542 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m62783(__this, method) (( int32_t (*) (Collection_1_t8542 *, const MethodInfo*))Collection_1_get_Count_m62783_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3329  Collection_1_get_Item_m62784_gshared (Collection_1_t8542 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m62784(__this, ___index, method) (( KeyValuePair_2_t3329  (*) (Collection_1_t8542 *, int32_t, const MethodInfo*))Collection_1_get_Item_m62784_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m62785_gshared (Collection_1_t8542 * __this, int32_t ___index, KeyValuePair_2_t3329  ___value, const MethodInfo* method);
#define Collection_1_set_Item_m62785(__this, ___index, ___value, method) (( void (*) (Collection_1_t8542 *, int32_t, KeyValuePair_2_t3329 , const MethodInfo*))Collection_1_set_Item_m62785_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m62786_gshared (Collection_1_t8542 * __this, int32_t ___index, KeyValuePair_2_t3329  ___item, const MethodInfo* method);
#define Collection_1_SetItem_m62786(__this, ___index, ___item, method) (( void (*) (Collection_1_t8542 *, int32_t, KeyValuePair_2_t3329 , const MethodInfo*))Collection_1_SetItem_m62786_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m62787_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m62787(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m62787_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ConvertItem(System.Object)
extern "C" KeyValuePair_2_t3329  Collection_1_ConvertItem_m62788_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m62788(__this /* static, unused */, ___item, method) (( KeyValuePair_2_t3329  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m62788_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m62789_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m62789(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m62789_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m62790_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m62790(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m62790_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m62791_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m62791(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m62791_gshared)(__this /* static, unused */, ___list, method)
