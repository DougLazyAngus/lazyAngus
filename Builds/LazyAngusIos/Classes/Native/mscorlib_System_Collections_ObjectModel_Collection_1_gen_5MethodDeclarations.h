#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Byte>
struct Collection_1_t6942;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6881;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t6878;

// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::.ctor()
extern "C" void Collection_1__ctor_m40435_gshared (Collection_1_t6942 * __this, const MethodInfo* method);
#define Collection_1__ctor_m40435(__this, method) (( void (*) (Collection_1_t6942 *, const MethodInfo*))Collection_1__ctor_m40435_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40436_gshared (Collection_1_t6942 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40436(__this, method) (( bool (*) (Collection_1_t6942 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40436_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m40437_gshared (Collection_1_t6942 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m40437(__this, ___array, ___index, method) (( void (*) (Collection_1_t6942 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m40437_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m40438_gshared (Collection_1_t6942 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m40438(__this, method) (( Object_t * (*) (Collection_1_t6942 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m40438_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m40439_gshared (Collection_1_t6942 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m40439(__this, ___value, method) (( int32_t (*) (Collection_1_t6942 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m40439_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m40440_gshared (Collection_1_t6942 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m40440(__this, ___value, method) (( bool (*) (Collection_1_t6942 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m40440_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m40441_gshared (Collection_1_t6942 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m40441(__this, ___value, method) (( int32_t (*) (Collection_1_t6942 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m40441_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m40442_gshared (Collection_1_t6942 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m40442(__this, ___index, ___value, method) (( void (*) (Collection_1_t6942 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m40442_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m40443_gshared (Collection_1_t6942 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m40443(__this, ___value, method) (( void (*) (Collection_1_t6942 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m40443_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m40444_gshared (Collection_1_t6942 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m40444(__this, method) (( bool (*) (Collection_1_t6942 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m40444_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m40445_gshared (Collection_1_t6942 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m40445(__this, method) (( Object_t * (*) (Collection_1_t6942 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m40445_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m40446_gshared (Collection_1_t6942 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m40446(__this, method) (( bool (*) (Collection_1_t6942 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m40446_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m40447_gshared (Collection_1_t6942 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m40447(__this, method) (( bool (*) (Collection_1_t6942 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m40447_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m40448_gshared (Collection_1_t6942 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m40448(__this, ___index, method) (( Object_t * (*) (Collection_1_t6942 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m40448_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m40449_gshared (Collection_1_t6942 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m40449(__this, ___index, ___value, method) (( void (*) (Collection_1_t6942 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m40449_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Add(T)
extern "C" void Collection_1_Add_m40450_gshared (Collection_1_t6942 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Add_m40450(__this, ___item, method) (( void (*) (Collection_1_t6942 *, uint8_t, const MethodInfo*))Collection_1_Add_m40450_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Clear()
extern "C" void Collection_1_Clear_m40451_gshared (Collection_1_t6942 * __this, const MethodInfo* method);
#define Collection_1_Clear_m40451(__this, method) (( void (*) (Collection_1_t6942 *, const MethodInfo*))Collection_1_Clear_m40451_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::ClearItems()
extern "C" void Collection_1_ClearItems_m40452_gshared (Collection_1_t6942 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m40452(__this, method) (( void (*) (Collection_1_t6942 *, const MethodInfo*))Collection_1_ClearItems_m40452_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Contains(T)
extern "C" bool Collection_1_Contains_m40453_gshared (Collection_1_t6942 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m40453(__this, ___item, method) (( bool (*) (Collection_1_t6942 *, uint8_t, const MethodInfo*))Collection_1_Contains_m40453_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m40454_gshared (Collection_1_t6942 * __this, ByteU5BU5D_t66* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m40454(__this, ___array, ___index, method) (( void (*) (Collection_1_t6942 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))Collection_1_CopyTo_m40454_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Byte>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m40455_gshared (Collection_1_t6942 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m40455(__this, method) (( Object_t* (*) (Collection_1_t6942 *, const MethodInfo*))Collection_1_GetEnumerator_m40455_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m40456_gshared (Collection_1_t6942 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m40456(__this, ___item, method) (( int32_t (*) (Collection_1_t6942 *, uint8_t, const MethodInfo*))Collection_1_IndexOf_m40456_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m40457_gshared (Collection_1_t6942 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m40457(__this, ___index, ___item, method) (( void (*) (Collection_1_t6942 *, int32_t, uint8_t, const MethodInfo*))Collection_1_Insert_m40457_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m40458_gshared (Collection_1_t6942 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m40458(__this, ___index, ___item, method) (( void (*) (Collection_1_t6942 *, int32_t, uint8_t, const MethodInfo*))Collection_1_InsertItem_m40458_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Remove(T)
extern "C" bool Collection_1_Remove_m40459_gshared (Collection_1_t6942 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m40459(__this, ___item, method) (( bool (*) (Collection_1_t6942 *, uint8_t, const MethodInfo*))Collection_1_Remove_m40459_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m40460_gshared (Collection_1_t6942 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m40460(__this, ___index, method) (( void (*) (Collection_1_t6942 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m40460_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m40461_gshared (Collection_1_t6942 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m40461(__this, ___index, method) (( void (*) (Collection_1_t6942 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m40461_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::get_Count()
extern "C" int32_t Collection_1_get_Count_m40462_gshared (Collection_1_t6942 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m40462(__this, method) (( int32_t (*) (Collection_1_t6942 *, const MethodInfo*))Collection_1_get_Count_m40462_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t Collection_1_get_Item_m40463_gshared (Collection_1_t6942 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m40463(__this, ___index, method) (( uint8_t (*) (Collection_1_t6942 *, int32_t, const MethodInfo*))Collection_1_get_Item_m40463_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m40464_gshared (Collection_1_t6942 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m40464(__this, ___index, ___value, method) (( void (*) (Collection_1_t6942 *, int32_t, uint8_t, const MethodInfo*))Collection_1_set_Item_m40464_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m40465_gshared (Collection_1_t6942 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m40465(__this, ___index, ___item, method) (( void (*) (Collection_1_t6942 *, int32_t, uint8_t, const MethodInfo*))Collection_1_SetItem_m40465_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m40466_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m40466(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m40466_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::ConvertItem(System.Object)
extern "C" uint8_t Collection_1_ConvertItem_m40467_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m40467(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m40467_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m40468_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m40468(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m40468_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m40469_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m40469(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m40469_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m40470_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m40470(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m40470_gshared)(__this /* static, unused */, ___list, method)
