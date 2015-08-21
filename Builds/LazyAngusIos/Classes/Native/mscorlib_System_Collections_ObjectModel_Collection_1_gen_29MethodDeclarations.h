#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Collection_1_t8620;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t8615;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t9713;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IList_1_t8618;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void Collection_1__ctor_m63545_gshared (Collection_1_t8620 * __this, const MethodInfo* method);
#define Collection_1__ctor_m63545(__this, method) (( void (*) (Collection_1_t8620 *, const MethodInfo*))Collection_1__ctor_m63545_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63546_gshared (Collection_1_t8620 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63546(__this, method) (( bool (*) (Collection_1_t8620 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63546_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m63547_gshared (Collection_1_t8620 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m63547(__this, ___array, ___index, method) (( void (*) (Collection_1_t8620 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m63547_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m63548_gshared (Collection_1_t8620 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m63548(__this, method) (( Object_t * (*) (Collection_1_t8620 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m63548_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m63549_gshared (Collection_1_t8620 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m63549(__this, ___value, method) (( int32_t (*) (Collection_1_t8620 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m63549_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m63550_gshared (Collection_1_t8620 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m63550(__this, ___value, method) (( bool (*) (Collection_1_t8620 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m63550_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m63551_gshared (Collection_1_t8620 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m63551(__this, ___value, method) (( int32_t (*) (Collection_1_t8620 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m63551_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m63552_gshared (Collection_1_t8620 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m63552(__this, ___index, ___value, method) (( void (*) (Collection_1_t8620 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m63552_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m63553_gshared (Collection_1_t8620 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m63553(__this, ___value, method) (( void (*) (Collection_1_t8620 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m63553_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m63554_gshared (Collection_1_t8620 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m63554(__this, method) (( bool (*) (Collection_1_t8620 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m63554_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m63555_gshared (Collection_1_t8620 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m63555(__this, method) (( Object_t * (*) (Collection_1_t8620 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m63555_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m63556_gshared (Collection_1_t8620 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m63556(__this, method) (( bool (*) (Collection_1_t8620 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m63556_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m63557_gshared (Collection_1_t8620 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m63557(__this, method) (( bool (*) (Collection_1_t8620 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m63557_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m63558_gshared (Collection_1_t8620 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m63558(__this, ___index, method) (( Object_t * (*) (Collection_1_t8620 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m63558_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m63559_gshared (Collection_1_t8620 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m63559(__this, ___index, ___value, method) (( void (*) (Collection_1_t8620 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m63559_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void Collection_1_Add_m63560_gshared (Collection_1_t8620 * __this, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define Collection_1_Add_m63560(__this, ___item, method) (( void (*) (Collection_1_t8620 *, KeyValuePair_2_t3377 , const MethodInfo*))Collection_1_Add_m63560_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void Collection_1_Clear_m63561_gshared (Collection_1_t8620 * __this, const MethodInfo* method);
#define Collection_1_Clear_m63561(__this, method) (( void (*) (Collection_1_t8620 *, const MethodInfo*))Collection_1_Clear_m63561_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ClearItems()
extern "C" void Collection_1_ClearItems_m63562_gshared (Collection_1_t8620 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m63562(__this, method) (( void (*) (Collection_1_t8620 *, const MethodInfo*))Collection_1_ClearItems_m63562_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool Collection_1_Contains_m63563_gshared (Collection_1_t8620 * __this, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define Collection_1_Contains_m63563(__this, ___item, method) (( bool (*) (Collection_1_t8620 *, KeyValuePair_2_t3377 , const MethodInfo*))Collection_1_Contains_m63563_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m63564_gshared (Collection_1_t8620 * __this, KeyValuePair_2U5BU5D_t8615* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m63564(__this, ___array, ___index, method) (( void (*) (Collection_1_t8620 *, KeyValuePair_2U5BU5D_t8615*, int32_t, const MethodInfo*))Collection_1_CopyTo_m63564_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m63565_gshared (Collection_1_t8620 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m63565(__this, method) (( Object_t* (*) (Collection_1_t8620 *, const MethodInfo*))Collection_1_GetEnumerator_m63565_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m63566_gshared (Collection_1_t8620 * __this, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m63566(__this, ___item, method) (( int32_t (*) (Collection_1_t8620 *, KeyValuePair_2_t3377 , const MethodInfo*))Collection_1_IndexOf_m63566_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m63567_gshared (Collection_1_t8620 * __this, int32_t ___index, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define Collection_1_Insert_m63567(__this, ___index, ___item, method) (( void (*) (Collection_1_t8620 *, int32_t, KeyValuePair_2_t3377 , const MethodInfo*))Collection_1_Insert_m63567_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m63568_gshared (Collection_1_t8620 * __this, int32_t ___index, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m63568(__this, ___index, ___item, method) (( void (*) (Collection_1_t8620 *, int32_t, KeyValuePair_2_t3377 , const MethodInfo*))Collection_1_InsertItem_m63568_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool Collection_1_Remove_m63569_gshared (Collection_1_t8620 * __this, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define Collection_1_Remove_m63569(__this, ___item, method) (( bool (*) (Collection_1_t8620 *, KeyValuePair_2_t3377 , const MethodInfo*))Collection_1_Remove_m63569_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m63570_gshared (Collection_1_t8620 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m63570(__this, ___index, method) (( void (*) (Collection_1_t8620 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m63570_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m63571_gshared (Collection_1_t8620 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m63571(__this, ___index, method) (( void (*) (Collection_1_t8620 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m63571_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t Collection_1_get_Count_m63572_gshared (Collection_1_t8620 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m63572(__this, method) (( int32_t (*) (Collection_1_t8620 *, const MethodInfo*))Collection_1_get_Count_m63572_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3377  Collection_1_get_Item_m63573_gshared (Collection_1_t8620 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m63573(__this, ___index, method) (( KeyValuePair_2_t3377  (*) (Collection_1_t8620 *, int32_t, const MethodInfo*))Collection_1_get_Item_m63573_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m63574_gshared (Collection_1_t8620 * __this, int32_t ___index, KeyValuePair_2_t3377  ___value, const MethodInfo* method);
#define Collection_1_set_Item_m63574(__this, ___index, ___value, method) (( void (*) (Collection_1_t8620 *, int32_t, KeyValuePair_2_t3377 , const MethodInfo*))Collection_1_set_Item_m63574_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m63575_gshared (Collection_1_t8620 * __this, int32_t ___index, KeyValuePair_2_t3377  ___item, const MethodInfo* method);
#define Collection_1_SetItem_m63575(__this, ___index, ___item, method) (( void (*) (Collection_1_t8620 *, int32_t, KeyValuePair_2_t3377 , const MethodInfo*))Collection_1_SetItem_m63575_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m63576_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m63576(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m63576_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ConvertItem(System.Object)
extern "C" KeyValuePair_2_t3377  Collection_1_ConvertItem_m63577_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m63577(__this /* static, unused */, ___item, method) (( KeyValuePair_2_t3377  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m63577_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m63578_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m63578(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m63578_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m63579_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m63579(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m63579_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m63580_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m63580(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m63580_gshared)(__this /* static, unused */, ___list, method)
