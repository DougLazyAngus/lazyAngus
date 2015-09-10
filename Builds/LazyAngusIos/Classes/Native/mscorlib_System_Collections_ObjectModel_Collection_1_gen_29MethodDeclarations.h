#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Collection_1_t9214;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t9209;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t10352;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IList_1_t9212;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void Collection_1__ctor_m68329_gshared (Collection_1_t9214 * __this, const MethodInfo* method);
#define Collection_1__ctor_m68329(__this, method) (( void (*) (Collection_1_t9214 *, const MethodInfo*))Collection_1__ctor_m68329_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68330_gshared (Collection_1_t9214 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68330(__this, method) (( bool (*) (Collection_1_t9214 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68330_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m68331_gshared (Collection_1_t9214 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m68331(__this, ___array, ___index, method) (( void (*) (Collection_1_t9214 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m68331_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m68332_gshared (Collection_1_t9214 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m68332(__this, method) (( Object_t * (*) (Collection_1_t9214 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m68332_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m68333_gshared (Collection_1_t9214 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m68333(__this, ___value, method) (( int32_t (*) (Collection_1_t9214 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m68333_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m68334_gshared (Collection_1_t9214 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m68334(__this, ___value, method) (( bool (*) (Collection_1_t9214 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m68334_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m68335_gshared (Collection_1_t9214 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m68335(__this, ___value, method) (( int32_t (*) (Collection_1_t9214 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m68335_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m68336_gshared (Collection_1_t9214 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m68336(__this, ___index, ___value, method) (( void (*) (Collection_1_t9214 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m68336_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m68337_gshared (Collection_1_t9214 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m68337(__this, ___value, method) (( void (*) (Collection_1_t9214 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m68337_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m68338_gshared (Collection_1_t9214 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m68338(__this, method) (( bool (*) (Collection_1_t9214 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m68338_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m68339_gshared (Collection_1_t9214 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m68339(__this, method) (( Object_t * (*) (Collection_1_t9214 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m68339_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m68340_gshared (Collection_1_t9214 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m68340(__this, method) (( bool (*) (Collection_1_t9214 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m68340_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m68341_gshared (Collection_1_t9214 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m68341(__this, method) (( bool (*) (Collection_1_t9214 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m68341_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m68342_gshared (Collection_1_t9214 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m68342(__this, ___index, method) (( Object_t * (*) (Collection_1_t9214 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m68342_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m68343_gshared (Collection_1_t9214 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m68343(__this, ___index, ___value, method) (( void (*) (Collection_1_t9214 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m68343_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void Collection_1_Add_m68344_gshared (Collection_1_t9214 * __this, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define Collection_1_Add_m68344(__this, ___item, method) (( void (*) (Collection_1_t9214 *, KeyValuePair_2_t3806 , const MethodInfo*))Collection_1_Add_m68344_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void Collection_1_Clear_m68345_gshared (Collection_1_t9214 * __this, const MethodInfo* method);
#define Collection_1_Clear_m68345(__this, method) (( void (*) (Collection_1_t9214 *, const MethodInfo*))Collection_1_Clear_m68345_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ClearItems()
extern "C" void Collection_1_ClearItems_m68346_gshared (Collection_1_t9214 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m68346(__this, method) (( void (*) (Collection_1_t9214 *, const MethodInfo*))Collection_1_ClearItems_m68346_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool Collection_1_Contains_m68347_gshared (Collection_1_t9214 * __this, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define Collection_1_Contains_m68347(__this, ___item, method) (( bool (*) (Collection_1_t9214 *, KeyValuePair_2_t3806 , const MethodInfo*))Collection_1_Contains_m68347_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m68348_gshared (Collection_1_t9214 * __this, KeyValuePair_2U5BU5D_t9209* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m68348(__this, ___array, ___index, method) (( void (*) (Collection_1_t9214 *, KeyValuePair_2U5BU5D_t9209*, int32_t, const MethodInfo*))Collection_1_CopyTo_m68348_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m68349_gshared (Collection_1_t9214 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m68349(__this, method) (( Object_t* (*) (Collection_1_t9214 *, const MethodInfo*))Collection_1_GetEnumerator_m68349_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m68350_gshared (Collection_1_t9214 * __this, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m68350(__this, ___item, method) (( int32_t (*) (Collection_1_t9214 *, KeyValuePair_2_t3806 , const MethodInfo*))Collection_1_IndexOf_m68350_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m68351_gshared (Collection_1_t9214 * __this, int32_t ___index, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define Collection_1_Insert_m68351(__this, ___index, ___item, method) (( void (*) (Collection_1_t9214 *, int32_t, KeyValuePair_2_t3806 , const MethodInfo*))Collection_1_Insert_m68351_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m68352_gshared (Collection_1_t9214 * __this, int32_t ___index, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m68352(__this, ___index, ___item, method) (( void (*) (Collection_1_t9214 *, int32_t, KeyValuePair_2_t3806 , const MethodInfo*))Collection_1_InsertItem_m68352_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool Collection_1_Remove_m68353_gshared (Collection_1_t9214 * __this, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define Collection_1_Remove_m68353(__this, ___item, method) (( bool (*) (Collection_1_t9214 *, KeyValuePair_2_t3806 , const MethodInfo*))Collection_1_Remove_m68353_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m68354_gshared (Collection_1_t9214 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m68354(__this, ___index, method) (( void (*) (Collection_1_t9214 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m68354_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m68355_gshared (Collection_1_t9214 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m68355(__this, ___index, method) (( void (*) (Collection_1_t9214 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m68355_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t Collection_1_get_Count_m68356_gshared (Collection_1_t9214 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m68356(__this, method) (( int32_t (*) (Collection_1_t9214 *, const MethodInfo*))Collection_1_get_Count_m68356_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3806  Collection_1_get_Item_m68357_gshared (Collection_1_t9214 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m68357(__this, ___index, method) (( KeyValuePair_2_t3806  (*) (Collection_1_t9214 *, int32_t, const MethodInfo*))Collection_1_get_Item_m68357_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m68358_gshared (Collection_1_t9214 * __this, int32_t ___index, KeyValuePair_2_t3806  ___value, const MethodInfo* method);
#define Collection_1_set_Item_m68358(__this, ___index, ___value, method) (( void (*) (Collection_1_t9214 *, int32_t, KeyValuePair_2_t3806 , const MethodInfo*))Collection_1_set_Item_m68358_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m68359_gshared (Collection_1_t9214 * __this, int32_t ___index, KeyValuePair_2_t3806  ___item, const MethodInfo* method);
#define Collection_1_SetItem_m68359(__this, ___index, ___item, method) (( void (*) (Collection_1_t9214 *, int32_t, KeyValuePair_2_t3806 , const MethodInfo*))Collection_1_SetItem_m68359_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m68360_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m68360(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m68360_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ConvertItem(System.Object)
extern "C" KeyValuePair_2_t3806  Collection_1_ConvertItem_m68361_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m68361(__this /* static, unused */, ___item, method) (( KeyValuePair_2_t3806  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m68361_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m68362_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m68362(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m68362_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m68363_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m68363(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m68363_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m68364_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m68364(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m68364_gshared)(__this /* static, unused */, ___list, method)
