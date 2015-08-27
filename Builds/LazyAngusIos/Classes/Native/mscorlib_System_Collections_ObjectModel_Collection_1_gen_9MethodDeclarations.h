﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.UInt32>
struct Collection_1_t6610;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.UInt32[]
struct UInt32U5BU5D_t3218;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6346;
// System.Collections.Generic.IList`1<System.UInt32>
struct IList_1_t6342;

// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::.ctor()
extern "C" void Collection_1__ctor_m38824_gshared (Collection_1_t6610 * __this, const MethodInfo* method);
#define Collection_1__ctor_m38824(__this, method) (( void (*) (Collection_1_t6610 *, const MethodInfo*))Collection_1__ctor_m38824_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38825_gshared (Collection_1_t6610 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38825(__this, method) (( bool (*) (Collection_1_t6610 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38825_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m38826_gshared (Collection_1_t6610 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m38826(__this, ___array, ___index, method) (( void (*) (Collection_1_t6610 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m38826_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m38827_gshared (Collection_1_t6610 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m38827(__this, method) (( Object_t * (*) (Collection_1_t6610 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m38827_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m38828_gshared (Collection_1_t6610 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m38828(__this, ___value, method) (( int32_t (*) (Collection_1_t6610 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m38828_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m38829_gshared (Collection_1_t6610 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m38829(__this, ___value, method) (( bool (*) (Collection_1_t6610 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m38829_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m38830_gshared (Collection_1_t6610 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m38830(__this, ___value, method) (( int32_t (*) (Collection_1_t6610 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m38830_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m38831_gshared (Collection_1_t6610 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m38831(__this, ___index, ___value, method) (( void (*) (Collection_1_t6610 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m38831_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m38832_gshared (Collection_1_t6610 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m38832(__this, ___value, method) (( void (*) (Collection_1_t6610 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m38832_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m38833_gshared (Collection_1_t6610 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m38833(__this, method) (( bool (*) (Collection_1_t6610 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m38833_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m38834_gshared (Collection_1_t6610 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m38834(__this, method) (( Object_t * (*) (Collection_1_t6610 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m38834_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m38835_gshared (Collection_1_t6610 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m38835(__this, method) (( bool (*) (Collection_1_t6610 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m38835_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m38836_gshared (Collection_1_t6610 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m38836(__this, method) (( bool (*) (Collection_1_t6610 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m38836_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m38837_gshared (Collection_1_t6610 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m38837(__this, ___index, method) (( Object_t * (*) (Collection_1_t6610 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m38837_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m38838_gshared (Collection_1_t6610 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m38838(__this, ___index, ___value, method) (( void (*) (Collection_1_t6610 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m38838_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::Add(T)
extern "C" void Collection_1_Add_m38839_gshared (Collection_1_t6610 * __this, uint32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m38839(__this, ___item, method) (( void (*) (Collection_1_t6610 *, uint32_t, const MethodInfo*))Collection_1_Add_m38839_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::Clear()
extern "C" void Collection_1_Clear_m38840_gshared (Collection_1_t6610 * __this, const MethodInfo* method);
#define Collection_1_Clear_m38840(__this, method) (( void (*) (Collection_1_t6610 *, const MethodInfo*))Collection_1_Clear_m38840_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::ClearItems()
extern "C" void Collection_1_ClearItems_m38841_gshared (Collection_1_t6610 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m38841(__this, method) (( void (*) (Collection_1_t6610 *, const MethodInfo*))Collection_1_ClearItems_m38841_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt32>::Contains(T)
extern "C" bool Collection_1_Contains_m38842_gshared (Collection_1_t6610 * __this, uint32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m38842(__this, ___item, method) (( bool (*) (Collection_1_t6610 *, uint32_t, const MethodInfo*))Collection_1_Contains_m38842_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m38843_gshared (Collection_1_t6610 * __this, UInt32U5BU5D_t3218* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m38843(__this, ___array, ___index, method) (( void (*) (Collection_1_t6610 *, UInt32U5BU5D_t3218*, int32_t, const MethodInfo*))Collection_1_CopyTo_m38843_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.UInt32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m38844_gshared (Collection_1_t6610 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m38844(__this, method) (( Object_t* (*) (Collection_1_t6610 *, const MethodInfo*))Collection_1_GetEnumerator_m38844_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.UInt32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m38845_gshared (Collection_1_t6610 * __this, uint32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m38845(__this, ___item, method) (( int32_t (*) (Collection_1_t6610 *, uint32_t, const MethodInfo*))Collection_1_IndexOf_m38845_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m38846_gshared (Collection_1_t6610 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m38846(__this, ___index, ___item, method) (( void (*) (Collection_1_t6610 *, int32_t, uint32_t, const MethodInfo*))Collection_1_Insert_m38846_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m38847_gshared (Collection_1_t6610 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m38847(__this, ___index, ___item, method) (( void (*) (Collection_1_t6610 *, int32_t, uint32_t, const MethodInfo*))Collection_1_InsertItem_m38847_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt32>::Remove(T)
extern "C" bool Collection_1_Remove_m38848_gshared (Collection_1_t6610 * __this, uint32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m38848(__this, ___item, method) (( bool (*) (Collection_1_t6610 *, uint32_t, const MethodInfo*))Collection_1_Remove_m38848_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m38849_gshared (Collection_1_t6610 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m38849(__this, ___index, method) (( void (*) (Collection_1_t6610 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m38849_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m38850_gshared (Collection_1_t6610 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m38850(__this, ___index, method) (( void (*) (Collection_1_t6610 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m38850_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.UInt32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m38851_gshared (Collection_1_t6610 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m38851(__this, method) (( int32_t (*) (Collection_1_t6610 *, const MethodInfo*))Collection_1_get_Count_m38851_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.UInt32>::get_Item(System.Int32)
extern "C" uint32_t Collection_1_get_Item_m38852_gshared (Collection_1_t6610 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m38852(__this, ___index, method) (( uint32_t (*) (Collection_1_t6610 *, int32_t, const MethodInfo*))Collection_1_get_Item_m38852_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m38853_gshared (Collection_1_t6610 * __this, int32_t ___index, uint32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m38853(__this, ___index, ___value, method) (( void (*) (Collection_1_t6610 *, int32_t, uint32_t, const MethodInfo*))Collection_1_set_Item_m38853_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m38854_gshared (Collection_1_t6610 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m38854(__this, ___index, ___item, method) (( void (*) (Collection_1_t6610 *, int32_t, uint32_t, const MethodInfo*))Collection_1_SetItem_m38854_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m38855_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m38855(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m38855_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.UInt32>::ConvertItem(System.Object)
extern "C" uint32_t Collection_1_ConvertItem_m38856_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m38856(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m38856_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m38857_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m38857(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m38857_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m38858_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m38858(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m38858_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m38859_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m38859(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m38859_gshared)(__this /* static, unused */, ___list, method)
