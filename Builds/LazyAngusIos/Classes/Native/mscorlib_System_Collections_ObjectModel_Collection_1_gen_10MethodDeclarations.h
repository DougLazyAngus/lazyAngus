#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int64>
struct Collection_1_t6657;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4873;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6352;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t6349;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::.ctor()
extern "C" void Collection_1__ctor_m39407_gshared (Collection_1_t6657 * __this, const MethodInfo* method);
#define Collection_1__ctor_m39407(__this, method) (( void (*) (Collection_1_t6657 *, const MethodInfo*))Collection_1__ctor_m39407_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39408_gshared (Collection_1_t6657 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39408(__this, method) (( bool (*) (Collection_1_t6657 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39408_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m39409_gshared (Collection_1_t6657 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m39409(__this, ___array, ___index, method) (( void (*) (Collection_1_t6657 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m39409_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m39410_gshared (Collection_1_t6657 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m39410(__this, method) (( Object_t * (*) (Collection_1_t6657 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m39410_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m39411_gshared (Collection_1_t6657 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m39411(__this, ___value, method) (( int32_t (*) (Collection_1_t6657 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m39411_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m39412_gshared (Collection_1_t6657 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m39412(__this, ___value, method) (( bool (*) (Collection_1_t6657 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m39412_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m39413_gshared (Collection_1_t6657 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m39413(__this, ___value, method) (( int32_t (*) (Collection_1_t6657 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m39413_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m39414_gshared (Collection_1_t6657 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m39414(__this, ___index, ___value, method) (( void (*) (Collection_1_t6657 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m39414_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m39415_gshared (Collection_1_t6657 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m39415(__this, ___value, method) (( void (*) (Collection_1_t6657 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m39415_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m39416_gshared (Collection_1_t6657 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m39416(__this, method) (( bool (*) (Collection_1_t6657 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m39416_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m39417_gshared (Collection_1_t6657 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m39417(__this, method) (( Object_t * (*) (Collection_1_t6657 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m39417_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m39418_gshared (Collection_1_t6657 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m39418(__this, method) (( bool (*) (Collection_1_t6657 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m39418_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m39419_gshared (Collection_1_t6657 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m39419(__this, method) (( bool (*) (Collection_1_t6657 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m39419_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m39420_gshared (Collection_1_t6657 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m39420(__this, ___index, method) (( Object_t * (*) (Collection_1_t6657 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m39420_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m39421_gshared (Collection_1_t6657 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m39421(__this, ___index, ___value, method) (( void (*) (Collection_1_t6657 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m39421_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Add(T)
extern "C" void Collection_1_Add_m39422_gshared (Collection_1_t6657 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Add_m39422(__this, ___item, method) (( void (*) (Collection_1_t6657 *, int64_t, const MethodInfo*))Collection_1_Add_m39422_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Clear()
extern "C" void Collection_1_Clear_m39423_gshared (Collection_1_t6657 * __this, const MethodInfo* method);
#define Collection_1_Clear_m39423(__this, method) (( void (*) (Collection_1_t6657 *, const MethodInfo*))Collection_1_Clear_m39423_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::ClearItems()
extern "C" void Collection_1_ClearItems_m39424_gshared (Collection_1_t6657 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m39424(__this, method) (( void (*) (Collection_1_t6657 *, const MethodInfo*))Collection_1_ClearItems_m39424_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::Contains(T)
extern "C" bool Collection_1_Contains_m39425_gshared (Collection_1_t6657 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m39425(__this, ___item, method) (( bool (*) (Collection_1_t6657 *, int64_t, const MethodInfo*))Collection_1_Contains_m39425_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m39426_gshared (Collection_1_t6657 * __this, Int64U5BU5D_t4873* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m39426(__this, ___array, ___index, method) (( void (*) (Collection_1_t6657 *, Int64U5BU5D_t4873*, int32_t, const MethodInfo*))Collection_1_CopyTo_m39426_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int64>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m39427_gshared (Collection_1_t6657 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m39427(__this, method) (( Object_t* (*) (Collection_1_t6657 *, const MethodInfo*))Collection_1_GetEnumerator_m39427_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m39428_gshared (Collection_1_t6657 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m39428(__this, ___item, method) (( int32_t (*) (Collection_1_t6657 *, int64_t, const MethodInfo*))Collection_1_IndexOf_m39428_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m39429_gshared (Collection_1_t6657 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m39429(__this, ___index, ___item, method) (( void (*) (Collection_1_t6657 *, int32_t, int64_t, const MethodInfo*))Collection_1_Insert_m39429_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m39430_gshared (Collection_1_t6657 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m39430(__this, ___index, ___item, method) (( void (*) (Collection_1_t6657 *, int32_t, int64_t, const MethodInfo*))Collection_1_InsertItem_m39430_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::Remove(T)
extern "C" bool Collection_1_Remove_m39431_gshared (Collection_1_t6657 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m39431(__this, ___item, method) (( bool (*) (Collection_1_t6657 *, int64_t, const MethodInfo*))Collection_1_Remove_m39431_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m39432_gshared (Collection_1_t6657 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m39432(__this, ___index, method) (( void (*) (Collection_1_t6657 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m39432_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m39433_gshared (Collection_1_t6657 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m39433(__this, ___index, method) (( void (*) (Collection_1_t6657 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m39433_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::get_Count()
extern "C" int32_t Collection_1_get_Count_m39434_gshared (Collection_1_t6657 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m39434(__this, method) (( int32_t (*) (Collection_1_t6657 *, const MethodInfo*))Collection_1_get_Count_m39434_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t Collection_1_get_Item_m39435_gshared (Collection_1_t6657 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m39435(__this, ___index, method) (( int64_t (*) (Collection_1_t6657 *, int32_t, const MethodInfo*))Collection_1_get_Item_m39435_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m39436_gshared (Collection_1_t6657 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m39436(__this, ___index, ___value, method) (( void (*) (Collection_1_t6657 *, int32_t, int64_t, const MethodInfo*))Collection_1_set_Item_m39436_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m39437_gshared (Collection_1_t6657 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m39437(__this, ___index, ___item, method) (( void (*) (Collection_1_t6657 *, int32_t, int64_t, const MethodInfo*))Collection_1_SetItem_m39437_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m39438_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m39438(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m39438_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int64>::ConvertItem(System.Object)
extern "C" int64_t Collection_1_ConvertItem_m39439_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m39439(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m39439_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m39440_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m39440(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m39440_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m39441_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m39441(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m39441_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m39442_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m39442(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m39442_gshared)(__this /* static, unused */, ___list, method)
