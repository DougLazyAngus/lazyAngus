#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int64>
struct Collection_1_t7219;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4562;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6914;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t6911;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::.ctor()
extern "C" void Collection_1__ctor_m43987_gshared (Collection_1_t7219 * __this, const MethodInfo* method);
#define Collection_1__ctor_m43987(__this, method) (( void (*) (Collection_1_t7219 *, const MethodInfo*))Collection_1__ctor_m43987_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43988_gshared (Collection_1_t7219 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43988(__this, method) (( bool (*) (Collection_1_t7219 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43988_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m43989_gshared (Collection_1_t7219 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m43989(__this, ___array, ___index, method) (( void (*) (Collection_1_t7219 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m43989_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m43990_gshared (Collection_1_t7219 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m43990(__this, method) (( Object_t * (*) (Collection_1_t7219 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m43990_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m43991_gshared (Collection_1_t7219 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m43991(__this, ___value, method) (( int32_t (*) (Collection_1_t7219 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m43991_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m43992_gshared (Collection_1_t7219 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m43992(__this, ___value, method) (( bool (*) (Collection_1_t7219 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m43992_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m43993_gshared (Collection_1_t7219 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m43993(__this, ___value, method) (( int32_t (*) (Collection_1_t7219 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m43993_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m43994_gshared (Collection_1_t7219 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m43994(__this, ___index, ___value, method) (( void (*) (Collection_1_t7219 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m43994_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m43995_gshared (Collection_1_t7219 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m43995(__this, ___value, method) (( void (*) (Collection_1_t7219 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m43995_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m43996_gshared (Collection_1_t7219 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m43996(__this, method) (( bool (*) (Collection_1_t7219 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m43996_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m43997_gshared (Collection_1_t7219 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m43997(__this, method) (( Object_t * (*) (Collection_1_t7219 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m43997_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m43998_gshared (Collection_1_t7219 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m43998(__this, method) (( bool (*) (Collection_1_t7219 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m43998_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m43999_gshared (Collection_1_t7219 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m43999(__this, method) (( bool (*) (Collection_1_t7219 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m43999_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m44000_gshared (Collection_1_t7219 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m44000(__this, ___index, method) (( Object_t * (*) (Collection_1_t7219 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m44000_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m44001_gshared (Collection_1_t7219 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m44001(__this, ___index, ___value, method) (( void (*) (Collection_1_t7219 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m44001_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Add(T)
extern "C" void Collection_1_Add_m44002_gshared (Collection_1_t7219 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Add_m44002(__this, ___item, method) (( void (*) (Collection_1_t7219 *, int64_t, const MethodInfo*))Collection_1_Add_m44002_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Clear()
extern "C" void Collection_1_Clear_m44003_gshared (Collection_1_t7219 * __this, const MethodInfo* method);
#define Collection_1_Clear_m44003(__this, method) (( void (*) (Collection_1_t7219 *, const MethodInfo*))Collection_1_Clear_m44003_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::ClearItems()
extern "C" void Collection_1_ClearItems_m44004_gshared (Collection_1_t7219 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m44004(__this, method) (( void (*) (Collection_1_t7219 *, const MethodInfo*))Collection_1_ClearItems_m44004_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::Contains(T)
extern "C" bool Collection_1_Contains_m44005_gshared (Collection_1_t7219 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m44005(__this, ___item, method) (( bool (*) (Collection_1_t7219 *, int64_t, const MethodInfo*))Collection_1_Contains_m44005_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m44006_gshared (Collection_1_t7219 * __this, Int64U5BU5D_t4562* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m44006(__this, ___array, ___index, method) (( void (*) (Collection_1_t7219 *, Int64U5BU5D_t4562*, int32_t, const MethodInfo*))Collection_1_CopyTo_m44006_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int64>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m44007_gshared (Collection_1_t7219 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m44007(__this, method) (( Object_t* (*) (Collection_1_t7219 *, const MethodInfo*))Collection_1_GetEnumerator_m44007_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m44008_gshared (Collection_1_t7219 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m44008(__this, ___item, method) (( int32_t (*) (Collection_1_t7219 *, int64_t, const MethodInfo*))Collection_1_IndexOf_m44008_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m44009_gshared (Collection_1_t7219 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m44009(__this, ___index, ___item, method) (( void (*) (Collection_1_t7219 *, int32_t, int64_t, const MethodInfo*))Collection_1_Insert_m44009_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m44010_gshared (Collection_1_t7219 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m44010(__this, ___index, ___item, method) (( void (*) (Collection_1_t7219 *, int32_t, int64_t, const MethodInfo*))Collection_1_InsertItem_m44010_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::Remove(T)
extern "C" bool Collection_1_Remove_m44011_gshared (Collection_1_t7219 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m44011(__this, ___item, method) (( bool (*) (Collection_1_t7219 *, int64_t, const MethodInfo*))Collection_1_Remove_m44011_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m44012_gshared (Collection_1_t7219 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m44012(__this, ___index, method) (( void (*) (Collection_1_t7219 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m44012_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m44013_gshared (Collection_1_t7219 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m44013(__this, ___index, method) (( void (*) (Collection_1_t7219 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m44013_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::get_Count()
extern "C" int32_t Collection_1_get_Count_m44014_gshared (Collection_1_t7219 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m44014(__this, method) (( int32_t (*) (Collection_1_t7219 *, const MethodInfo*))Collection_1_get_Count_m44014_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t Collection_1_get_Item_m44015_gshared (Collection_1_t7219 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m44015(__this, ___index, method) (( int64_t (*) (Collection_1_t7219 *, int32_t, const MethodInfo*))Collection_1_get_Item_m44015_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m44016_gshared (Collection_1_t7219 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m44016(__this, ___index, ___value, method) (( void (*) (Collection_1_t7219 *, int32_t, int64_t, const MethodInfo*))Collection_1_set_Item_m44016_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m44017_gshared (Collection_1_t7219 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m44017(__this, ___index, ___item, method) (( void (*) (Collection_1_t7219 *, int32_t, int64_t, const MethodInfo*))Collection_1_SetItem_m44017_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m44018_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m44018(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m44018_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int64>::ConvertItem(System.Object)
extern "C" int64_t Collection_1_ConvertItem_m44019_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m44019(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m44019_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m44020_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m44020(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m44020_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m44021_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m44021(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m44021_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m44022_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m44022(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m44022_gshared)(__this /* static, unused */, ___list, method)
