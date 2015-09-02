#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct Collection_1_t8652;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t8647;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IEnumerator_1_t9753;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct IList_1_t8650;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor()
extern "C" void Collection_1__ctor_m63909_gshared (Collection_1_t8652 * __this, const MethodInfo* method);
#define Collection_1__ctor_m63909(__this, method) (( void (*) (Collection_1_t8652 *, const MethodInfo*))Collection_1__ctor_m63909_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63910_gshared (Collection_1_t8652 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63910(__this, method) (( bool (*) (Collection_1_t8652 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63910_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m63911_gshared (Collection_1_t8652 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m63911(__this, ___array, ___index, method) (( void (*) (Collection_1_t8652 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m63911_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m63912_gshared (Collection_1_t8652 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m63912(__this, method) (( Object_t * (*) (Collection_1_t8652 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m63912_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m63913_gshared (Collection_1_t8652 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m63913(__this, ___value, method) (( int32_t (*) (Collection_1_t8652 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m63913_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m63914_gshared (Collection_1_t8652 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m63914(__this, ___value, method) (( bool (*) (Collection_1_t8652 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m63914_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m63915_gshared (Collection_1_t8652 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m63915(__this, ___value, method) (( int32_t (*) (Collection_1_t8652 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m63915_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m63916_gshared (Collection_1_t8652 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m63916(__this, ___index, ___value, method) (( void (*) (Collection_1_t8652 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m63916_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m63917_gshared (Collection_1_t8652 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m63917(__this, ___value, method) (( void (*) (Collection_1_t8652 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m63917_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m63918_gshared (Collection_1_t8652 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m63918(__this, method) (( bool (*) (Collection_1_t8652 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m63918_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m63919_gshared (Collection_1_t8652 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m63919(__this, method) (( Object_t * (*) (Collection_1_t8652 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m63919_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m63920_gshared (Collection_1_t8652 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m63920(__this, method) (( bool (*) (Collection_1_t8652 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m63920_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m63921_gshared (Collection_1_t8652 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m63921(__this, method) (( bool (*) (Collection_1_t8652 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m63921_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m63922_gshared (Collection_1_t8652 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m63922(__this, ___index, method) (( Object_t * (*) (Collection_1_t8652 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m63922_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m63923_gshared (Collection_1_t8652 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m63923(__this, ___index, ___value, method) (( void (*) (Collection_1_t8652 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m63923_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(T)
extern "C" void Collection_1_Add_m63924_gshared (Collection_1_t8652 * __this, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define Collection_1_Add_m63924(__this, ___item, method) (( void (*) (Collection_1_t8652 *, KeyValuePair_2_t3396 , const MethodInfo*))Collection_1_Add_m63924_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Clear()
extern "C" void Collection_1_Clear_m63925_gshared (Collection_1_t8652 * __this, const MethodInfo* method);
#define Collection_1_Clear_m63925(__this, method) (( void (*) (Collection_1_t8652 *, const MethodInfo*))Collection_1_Clear_m63925_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ClearItems()
extern "C" void Collection_1_ClearItems_m63926_gshared (Collection_1_t8652 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m63926(__this, method) (( void (*) (Collection_1_t8652 *, const MethodInfo*))Collection_1_ClearItems_m63926_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Contains(T)
extern "C" bool Collection_1_Contains_m63927_gshared (Collection_1_t8652 * __this, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define Collection_1_Contains_m63927(__this, ___item, method) (( bool (*) (Collection_1_t8652 *, KeyValuePair_2_t3396 , const MethodInfo*))Collection_1_Contains_m63927_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m63928_gshared (Collection_1_t8652 * __this, KeyValuePair_2U5BU5D_t8647* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m63928(__this, ___array, ___index, method) (( void (*) (Collection_1_t8652 *, KeyValuePair_2U5BU5D_t8647*, int32_t, const MethodInfo*))Collection_1_CopyTo_m63928_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m63929_gshared (Collection_1_t8652 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m63929(__this, method) (( Object_t* (*) (Collection_1_t8652 *, const MethodInfo*))Collection_1_GetEnumerator_m63929_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m63930_gshared (Collection_1_t8652 * __this, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m63930(__this, ___item, method) (( int32_t (*) (Collection_1_t8652 *, KeyValuePair_2_t3396 , const MethodInfo*))Collection_1_IndexOf_m63930_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m63931_gshared (Collection_1_t8652 * __this, int32_t ___index, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define Collection_1_Insert_m63931(__this, ___index, ___item, method) (( void (*) (Collection_1_t8652 *, int32_t, KeyValuePair_2_t3396 , const MethodInfo*))Collection_1_Insert_m63931_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m63932_gshared (Collection_1_t8652 * __this, int32_t ___index, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m63932(__this, ___index, ___item, method) (( void (*) (Collection_1_t8652 *, int32_t, KeyValuePair_2_t3396 , const MethodInfo*))Collection_1_InsertItem_m63932_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Remove(T)
extern "C" bool Collection_1_Remove_m63933_gshared (Collection_1_t8652 * __this, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define Collection_1_Remove_m63933(__this, ___item, method) (( bool (*) (Collection_1_t8652 *, KeyValuePair_2_t3396 , const MethodInfo*))Collection_1_Remove_m63933_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m63934_gshared (Collection_1_t8652 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m63934(__this, ___index, method) (( void (*) (Collection_1_t8652 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m63934_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m63935_gshared (Collection_1_t8652 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m63935(__this, ___index, method) (( void (*) (Collection_1_t8652 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m63935_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" int32_t Collection_1_get_Count_m63936_gshared (Collection_1_t8652 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m63936(__this, method) (( int32_t (*) (Collection_1_t8652 *, const MethodInfo*))Collection_1_get_Count_m63936_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3396  Collection_1_get_Item_m63937_gshared (Collection_1_t8652 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m63937(__this, ___index, method) (( KeyValuePair_2_t3396  (*) (Collection_1_t8652 *, int32_t, const MethodInfo*))Collection_1_get_Item_m63937_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m63938_gshared (Collection_1_t8652 * __this, int32_t ___index, KeyValuePair_2_t3396  ___value, const MethodInfo* method);
#define Collection_1_set_Item_m63938(__this, ___index, ___value, method) (( void (*) (Collection_1_t8652 *, int32_t, KeyValuePair_2_t3396 , const MethodInfo*))Collection_1_set_Item_m63938_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m63939_gshared (Collection_1_t8652 * __this, int32_t ___index, KeyValuePair_2_t3396  ___item, const MethodInfo* method);
#define Collection_1_SetItem_m63939(__this, ___index, ___item, method) (( void (*) (Collection_1_t8652 *, int32_t, KeyValuePair_2_t3396 , const MethodInfo*))Collection_1_SetItem_m63939_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m63940_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m63940(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m63940_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::ConvertItem(System.Object)
extern "C" KeyValuePair_2_t3396  Collection_1_ConvertItem_m63941_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m63941(__this /* static, unused */, ___item, method) (( KeyValuePair_2_t3396  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m63941_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m63942_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m63942(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m63942_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m63943_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m63943(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m63943_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m63944_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m63944(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m63944_gshared)(__this /* static, unused */, ___list, method)
