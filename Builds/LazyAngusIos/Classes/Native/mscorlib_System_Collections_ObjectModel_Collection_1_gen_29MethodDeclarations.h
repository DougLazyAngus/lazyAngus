#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Collection_1_t9202;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t9197;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t10340;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IList_1_t9200;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void Collection_1__ctor_m68260_gshared (Collection_1_t9202 * __this, const MethodInfo* method);
#define Collection_1__ctor_m68260(__this, method) (( void (*) (Collection_1_t9202 *, const MethodInfo*))Collection_1__ctor_m68260_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68261_gshared (Collection_1_t9202 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68261(__this, method) (( bool (*) (Collection_1_t9202 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68261_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m68262_gshared (Collection_1_t9202 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m68262(__this, ___array, ___index, method) (( void (*) (Collection_1_t9202 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m68262_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m68263_gshared (Collection_1_t9202 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m68263(__this, method) (( Object_t * (*) (Collection_1_t9202 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m68263_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m68264_gshared (Collection_1_t9202 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m68264(__this, ___value, method) (( int32_t (*) (Collection_1_t9202 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m68264_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m68265_gshared (Collection_1_t9202 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m68265(__this, ___value, method) (( bool (*) (Collection_1_t9202 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m68265_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m68266_gshared (Collection_1_t9202 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m68266(__this, ___value, method) (( int32_t (*) (Collection_1_t9202 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m68266_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m68267_gshared (Collection_1_t9202 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m68267(__this, ___index, ___value, method) (( void (*) (Collection_1_t9202 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m68267_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m68268_gshared (Collection_1_t9202 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m68268(__this, ___value, method) (( void (*) (Collection_1_t9202 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m68268_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m68269_gshared (Collection_1_t9202 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m68269(__this, method) (( bool (*) (Collection_1_t9202 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m68269_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m68270_gshared (Collection_1_t9202 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m68270(__this, method) (( Object_t * (*) (Collection_1_t9202 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m68270_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m68271_gshared (Collection_1_t9202 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m68271(__this, method) (( bool (*) (Collection_1_t9202 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m68271_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m68272_gshared (Collection_1_t9202 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m68272(__this, method) (( bool (*) (Collection_1_t9202 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m68272_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m68273_gshared (Collection_1_t9202 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m68273(__this, ___index, method) (( Object_t * (*) (Collection_1_t9202 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m68273_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m68274_gshared (Collection_1_t9202 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m68274(__this, ___index, ___value, method) (( void (*) (Collection_1_t9202 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m68274_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void Collection_1_Add_m68275_gshared (Collection_1_t9202 * __this, KeyValuePair_2_t3796  ___item, const MethodInfo* method);
#define Collection_1_Add_m68275(__this, ___item, method) (( void (*) (Collection_1_t9202 *, KeyValuePair_2_t3796 , const MethodInfo*))Collection_1_Add_m68275_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void Collection_1_Clear_m68276_gshared (Collection_1_t9202 * __this, const MethodInfo* method);
#define Collection_1_Clear_m68276(__this, method) (( void (*) (Collection_1_t9202 *, const MethodInfo*))Collection_1_Clear_m68276_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ClearItems()
extern "C" void Collection_1_ClearItems_m68277_gshared (Collection_1_t9202 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m68277(__this, method) (( void (*) (Collection_1_t9202 *, const MethodInfo*))Collection_1_ClearItems_m68277_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool Collection_1_Contains_m68278_gshared (Collection_1_t9202 * __this, KeyValuePair_2_t3796  ___item, const MethodInfo* method);
#define Collection_1_Contains_m68278(__this, ___item, method) (( bool (*) (Collection_1_t9202 *, KeyValuePair_2_t3796 , const MethodInfo*))Collection_1_Contains_m68278_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m68279_gshared (Collection_1_t9202 * __this, KeyValuePair_2U5BU5D_t9197* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m68279(__this, ___array, ___index, method) (( void (*) (Collection_1_t9202 *, KeyValuePair_2U5BU5D_t9197*, int32_t, const MethodInfo*))Collection_1_CopyTo_m68279_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m68280_gshared (Collection_1_t9202 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m68280(__this, method) (( Object_t* (*) (Collection_1_t9202 *, const MethodInfo*))Collection_1_GetEnumerator_m68280_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m68281_gshared (Collection_1_t9202 * __this, KeyValuePair_2_t3796  ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m68281(__this, ___item, method) (( int32_t (*) (Collection_1_t9202 *, KeyValuePair_2_t3796 , const MethodInfo*))Collection_1_IndexOf_m68281_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m68282_gshared (Collection_1_t9202 * __this, int32_t ___index, KeyValuePair_2_t3796  ___item, const MethodInfo* method);
#define Collection_1_Insert_m68282(__this, ___index, ___item, method) (( void (*) (Collection_1_t9202 *, int32_t, KeyValuePair_2_t3796 , const MethodInfo*))Collection_1_Insert_m68282_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m68283_gshared (Collection_1_t9202 * __this, int32_t ___index, KeyValuePair_2_t3796  ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m68283(__this, ___index, ___item, method) (( void (*) (Collection_1_t9202 *, int32_t, KeyValuePair_2_t3796 , const MethodInfo*))Collection_1_InsertItem_m68283_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool Collection_1_Remove_m68284_gshared (Collection_1_t9202 * __this, KeyValuePair_2_t3796  ___item, const MethodInfo* method);
#define Collection_1_Remove_m68284(__this, ___item, method) (( bool (*) (Collection_1_t9202 *, KeyValuePair_2_t3796 , const MethodInfo*))Collection_1_Remove_m68284_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m68285_gshared (Collection_1_t9202 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m68285(__this, ___index, method) (( void (*) (Collection_1_t9202 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m68285_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m68286_gshared (Collection_1_t9202 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m68286(__this, ___index, method) (( void (*) (Collection_1_t9202 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m68286_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t Collection_1_get_Count_m68287_gshared (Collection_1_t9202 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m68287(__this, method) (( int32_t (*) (Collection_1_t9202 *, const MethodInfo*))Collection_1_get_Count_m68287_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3796  Collection_1_get_Item_m68288_gshared (Collection_1_t9202 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m68288(__this, ___index, method) (( KeyValuePair_2_t3796  (*) (Collection_1_t9202 *, int32_t, const MethodInfo*))Collection_1_get_Item_m68288_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m68289_gshared (Collection_1_t9202 * __this, int32_t ___index, KeyValuePair_2_t3796  ___value, const MethodInfo* method);
#define Collection_1_set_Item_m68289(__this, ___index, ___value, method) (( void (*) (Collection_1_t9202 *, int32_t, KeyValuePair_2_t3796 , const MethodInfo*))Collection_1_set_Item_m68289_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m68290_gshared (Collection_1_t9202 * __this, int32_t ___index, KeyValuePair_2_t3796  ___item, const MethodInfo* method);
#define Collection_1_SetItem_m68290(__this, ___index, ___item, method) (( void (*) (Collection_1_t9202 *, int32_t, KeyValuePair_2_t3796 , const MethodInfo*))Collection_1_SetItem_m68290_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m68291_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m68291(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m68291_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ConvertItem(System.Object)
extern "C" KeyValuePair_2_t3796  Collection_1_ConvertItem_m68292_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m68292(__this /* static, unused */, ___item, method) (( KeyValuePair_2_t3796  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m68292_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m68293_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m68293(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m68293_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m68294_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m68294(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m68294_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m68295_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m68295(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m68295_gshared)(__this /* static, unused */, ___list, method)
