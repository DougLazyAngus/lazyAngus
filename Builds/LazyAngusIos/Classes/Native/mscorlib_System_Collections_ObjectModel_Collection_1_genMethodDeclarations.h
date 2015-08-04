#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t5380;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t636;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1324;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m21428_gshared (Collection_1_t5380 * __this, const MethodInfo* method);
#define Collection_1__ctor_m21428(__this, method) (( void (*) (Collection_1_t5380 *, const MethodInfo*))Collection_1__ctor_m21428_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21429_gshared (Collection_1_t5380 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21429(__this, method) (( bool (*) (Collection_1_t5380 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21429_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m21430_gshared (Collection_1_t5380 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m21430(__this, ___array, ___index, method) (( void (*) (Collection_1_t5380 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m21430_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m21431_gshared (Collection_1_t5380 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m21431(__this, method) (( Object_t * (*) (Collection_1_t5380 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m21431_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m21432_gshared (Collection_1_t5380 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m21432(__this, ___value, method) (( int32_t (*) (Collection_1_t5380 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m21432_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m21433_gshared (Collection_1_t5380 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m21433(__this, ___value, method) (( bool (*) (Collection_1_t5380 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m21433_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m21434_gshared (Collection_1_t5380 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m21434(__this, ___value, method) (( int32_t (*) (Collection_1_t5380 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m21434_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m21435_gshared (Collection_1_t5380 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m21435(__this, ___index, ___value, method) (( void (*) (Collection_1_t5380 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m21435_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m21436_gshared (Collection_1_t5380 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m21436(__this, ___value, method) (( void (*) (Collection_1_t5380 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m21436_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m21437_gshared (Collection_1_t5380 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m21437(__this, method) (( bool (*) (Collection_1_t5380 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m21437_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m21438_gshared (Collection_1_t5380 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m21438(__this, method) (( Object_t * (*) (Collection_1_t5380 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m21438_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m21439_gshared (Collection_1_t5380 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m21439(__this, method) (( bool (*) (Collection_1_t5380 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m21439_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m21440_gshared (Collection_1_t5380 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m21440(__this, method) (( bool (*) (Collection_1_t5380 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m21440_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m21441_gshared (Collection_1_t5380 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m21441(__this, ___index, method) (( Object_t * (*) (Collection_1_t5380 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m21441_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m21442_gshared (Collection_1_t5380 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m21442(__this, ___index, ___value, method) (( void (*) (Collection_1_t5380 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m21442_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m21443_gshared (Collection_1_t5380 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m21443(__this, ___item, method) (( void (*) (Collection_1_t5380 *, Object_t *, const MethodInfo*))Collection_1_Add_m21443_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m21444_gshared (Collection_1_t5380 * __this, const MethodInfo* method);
#define Collection_1_Clear_m21444(__this, method) (( void (*) (Collection_1_t5380 *, const MethodInfo*))Collection_1_Clear_m21444_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m21445_gshared (Collection_1_t5380 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m21445(__this, method) (( void (*) (Collection_1_t5380 *, const MethodInfo*))Collection_1_ClearItems_m21445_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m21446_gshared (Collection_1_t5380 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m21446(__this, ___item, method) (( bool (*) (Collection_1_t5380 *, Object_t *, const MethodInfo*))Collection_1_Contains_m21446_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m21447_gshared (Collection_1_t5380 * __this, ObjectU5BU5D_t636* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m21447(__this, ___array, ___index, method) (( void (*) (Collection_1_t5380 *, ObjectU5BU5D_t636*, int32_t, const MethodInfo*))Collection_1_CopyTo_m21447_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m21448_gshared (Collection_1_t5380 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m21448(__this, method) (( Object_t* (*) (Collection_1_t5380 *, const MethodInfo*))Collection_1_GetEnumerator_m21448_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m21449_gshared (Collection_1_t5380 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m21449(__this, ___item, method) (( int32_t (*) (Collection_1_t5380 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m21449_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m21450_gshared (Collection_1_t5380 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m21450(__this, ___index, ___item, method) (( void (*) (Collection_1_t5380 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m21450_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m21451_gshared (Collection_1_t5380 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m21451(__this, ___index, ___item, method) (( void (*) (Collection_1_t5380 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m21451_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m21452_gshared (Collection_1_t5380 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m21452(__this, ___item, method) (( bool (*) (Collection_1_t5380 *, Object_t *, const MethodInfo*))Collection_1_Remove_m21452_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m21453_gshared (Collection_1_t5380 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m21453(__this, ___index, method) (( void (*) (Collection_1_t5380 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m21453_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m21454_gshared (Collection_1_t5380 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m21454(__this, ___index, method) (( void (*) (Collection_1_t5380 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m21454_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m21455_gshared (Collection_1_t5380 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m21455(__this, method) (( int32_t (*) (Collection_1_t5380 *, const MethodInfo*))Collection_1_get_Count_m21455_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m21456_gshared (Collection_1_t5380 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m21456(__this, ___index, method) (( Object_t * (*) (Collection_1_t5380 *, int32_t, const MethodInfo*))Collection_1_get_Item_m21456_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m21457_gshared (Collection_1_t5380 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m21457(__this, ___index, ___value, method) (( void (*) (Collection_1_t5380 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m21457_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m21458_gshared (Collection_1_t5380 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m21458(__this, ___index, ___item, method) (( void (*) (Collection_1_t5380 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m21458_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m21459_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m21459(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m21459_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m21460_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m21460(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m21460_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m21461_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m21461(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m21461_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m21462_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m21462(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m21462_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m21463_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m21463(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m21463_gshared)(__this /* static, unused */, ___list, method)
