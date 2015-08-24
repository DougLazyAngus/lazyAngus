#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Collection_1_t8623;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t8618;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t9716;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IList_1_t8621;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void Collection_1__ctor_m63577_gshared (Collection_1_t8623 * __this, const MethodInfo* method);
#define Collection_1__ctor_m63577(__this, method) (( void (*) (Collection_1_t8623 *, const MethodInfo*))Collection_1__ctor_m63577_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63578_gshared (Collection_1_t8623 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63578(__this, method) (( bool (*) (Collection_1_t8623 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63578_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m63579_gshared (Collection_1_t8623 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m63579(__this, ___array, ___index, method) (( void (*) (Collection_1_t8623 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m63579_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m63580_gshared (Collection_1_t8623 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m63580(__this, method) (( Object_t * (*) (Collection_1_t8623 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m63580_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m63581_gshared (Collection_1_t8623 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m63581(__this, ___value, method) (( int32_t (*) (Collection_1_t8623 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m63581_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m63582_gshared (Collection_1_t8623 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m63582(__this, ___value, method) (( bool (*) (Collection_1_t8623 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m63582_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m63583_gshared (Collection_1_t8623 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m63583(__this, ___value, method) (( int32_t (*) (Collection_1_t8623 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m63583_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m63584_gshared (Collection_1_t8623 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m63584(__this, ___index, ___value, method) (( void (*) (Collection_1_t8623 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m63584_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m63585_gshared (Collection_1_t8623 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m63585(__this, ___value, method) (( void (*) (Collection_1_t8623 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m63585_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m63586_gshared (Collection_1_t8623 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m63586(__this, method) (( bool (*) (Collection_1_t8623 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m63586_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m63587_gshared (Collection_1_t8623 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m63587(__this, method) (( Object_t * (*) (Collection_1_t8623 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m63587_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m63588_gshared (Collection_1_t8623 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m63588(__this, method) (( bool (*) (Collection_1_t8623 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m63588_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m63589_gshared (Collection_1_t8623 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m63589(__this, method) (( bool (*) (Collection_1_t8623 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m63589_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m63590_gshared (Collection_1_t8623 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m63590(__this, ___index, method) (( Object_t * (*) (Collection_1_t8623 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m63590_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m63591_gshared (Collection_1_t8623 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m63591(__this, ___index, ___value, method) (( void (*) (Collection_1_t8623 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m63591_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void Collection_1_Add_m63592_gshared (Collection_1_t8623 * __this, KeyValuePair_2_t3380  ___item, const MethodInfo* method);
#define Collection_1_Add_m63592(__this, ___item, method) (( void (*) (Collection_1_t8623 *, KeyValuePair_2_t3380 , const MethodInfo*))Collection_1_Add_m63592_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void Collection_1_Clear_m63593_gshared (Collection_1_t8623 * __this, const MethodInfo* method);
#define Collection_1_Clear_m63593(__this, method) (( void (*) (Collection_1_t8623 *, const MethodInfo*))Collection_1_Clear_m63593_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ClearItems()
extern "C" void Collection_1_ClearItems_m63594_gshared (Collection_1_t8623 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m63594(__this, method) (( void (*) (Collection_1_t8623 *, const MethodInfo*))Collection_1_ClearItems_m63594_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool Collection_1_Contains_m63595_gshared (Collection_1_t8623 * __this, KeyValuePair_2_t3380  ___item, const MethodInfo* method);
#define Collection_1_Contains_m63595(__this, ___item, method) (( bool (*) (Collection_1_t8623 *, KeyValuePair_2_t3380 , const MethodInfo*))Collection_1_Contains_m63595_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m63596_gshared (Collection_1_t8623 * __this, KeyValuePair_2U5BU5D_t8618* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m63596(__this, ___array, ___index, method) (( void (*) (Collection_1_t8623 *, KeyValuePair_2U5BU5D_t8618*, int32_t, const MethodInfo*))Collection_1_CopyTo_m63596_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m63597_gshared (Collection_1_t8623 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m63597(__this, method) (( Object_t* (*) (Collection_1_t8623 *, const MethodInfo*))Collection_1_GetEnumerator_m63597_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m63598_gshared (Collection_1_t8623 * __this, KeyValuePair_2_t3380  ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m63598(__this, ___item, method) (( int32_t (*) (Collection_1_t8623 *, KeyValuePair_2_t3380 , const MethodInfo*))Collection_1_IndexOf_m63598_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m63599_gshared (Collection_1_t8623 * __this, int32_t ___index, KeyValuePair_2_t3380  ___item, const MethodInfo* method);
#define Collection_1_Insert_m63599(__this, ___index, ___item, method) (( void (*) (Collection_1_t8623 *, int32_t, KeyValuePair_2_t3380 , const MethodInfo*))Collection_1_Insert_m63599_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m63600_gshared (Collection_1_t8623 * __this, int32_t ___index, KeyValuePair_2_t3380  ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m63600(__this, ___index, ___item, method) (( void (*) (Collection_1_t8623 *, int32_t, KeyValuePair_2_t3380 , const MethodInfo*))Collection_1_InsertItem_m63600_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool Collection_1_Remove_m63601_gshared (Collection_1_t8623 * __this, KeyValuePair_2_t3380  ___item, const MethodInfo* method);
#define Collection_1_Remove_m63601(__this, ___item, method) (( bool (*) (Collection_1_t8623 *, KeyValuePair_2_t3380 , const MethodInfo*))Collection_1_Remove_m63601_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m63602_gshared (Collection_1_t8623 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m63602(__this, ___index, method) (( void (*) (Collection_1_t8623 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m63602_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m63603_gshared (Collection_1_t8623 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m63603(__this, ___index, method) (( void (*) (Collection_1_t8623 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m63603_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t Collection_1_get_Count_m63604_gshared (Collection_1_t8623 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m63604(__this, method) (( int32_t (*) (Collection_1_t8623 *, const MethodInfo*))Collection_1_get_Count_m63604_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3380  Collection_1_get_Item_m63605_gshared (Collection_1_t8623 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m63605(__this, ___index, method) (( KeyValuePair_2_t3380  (*) (Collection_1_t8623 *, int32_t, const MethodInfo*))Collection_1_get_Item_m63605_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m63606_gshared (Collection_1_t8623 * __this, int32_t ___index, KeyValuePair_2_t3380  ___value, const MethodInfo* method);
#define Collection_1_set_Item_m63606(__this, ___index, ___value, method) (( void (*) (Collection_1_t8623 *, int32_t, KeyValuePair_2_t3380 , const MethodInfo*))Collection_1_set_Item_m63606_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m63607_gshared (Collection_1_t8623 * __this, int32_t ___index, KeyValuePair_2_t3380  ___item, const MethodInfo* method);
#define Collection_1_SetItem_m63607(__this, ___index, ___item, method) (( void (*) (Collection_1_t8623 *, int32_t, KeyValuePair_2_t3380 , const MethodInfo*))Collection_1_SetItem_m63607_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m63608_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m63608(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m63608_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ConvertItem(System.Object)
extern "C" KeyValuePair_2_t3380  Collection_1_ConvertItem_m63609_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m63609(__this /* static, unused */, ___item, method) (( KeyValuePair_2_t3380  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m63609_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m63610_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m63610(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m63610_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m63611_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m63611(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m63611_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m63612_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m63612(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m63612_gshared)(__this /* static, unused */, ___list, method)
