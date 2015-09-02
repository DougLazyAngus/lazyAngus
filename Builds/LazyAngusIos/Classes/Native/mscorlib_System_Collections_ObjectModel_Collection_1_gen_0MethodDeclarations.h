#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t5703;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3379;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t5701;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m26756_gshared (Collection_1_t5703 * __this, const MethodInfo* method);
#define Collection_1__ctor_m26756(__this, method) (( void (*) (Collection_1_t5703 *, const MethodInfo*))Collection_1__ctor_m26756_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26757_gshared (Collection_1_t5703 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26757(__this, method) (( bool (*) (Collection_1_t5703 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26757_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m26758_gshared (Collection_1_t5703 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m26758(__this, ___array, ___index, method) (( void (*) (Collection_1_t5703 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m26758_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m26759_gshared (Collection_1_t5703 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m26759(__this, method) (( Object_t * (*) (Collection_1_t5703 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m26759_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m26760_gshared (Collection_1_t5703 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m26760(__this, ___value, method) (( int32_t (*) (Collection_1_t5703 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m26760_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m26761_gshared (Collection_1_t5703 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m26761(__this, ___value, method) (( bool (*) (Collection_1_t5703 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m26761_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m26762_gshared (Collection_1_t5703 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m26762(__this, ___value, method) (( int32_t (*) (Collection_1_t5703 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m26762_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m26763_gshared (Collection_1_t5703 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m26763(__this, ___index, ___value, method) (( void (*) (Collection_1_t5703 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m26763_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m26764_gshared (Collection_1_t5703 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m26764(__this, ___value, method) (( void (*) (Collection_1_t5703 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m26764_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m26765_gshared (Collection_1_t5703 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m26765(__this, method) (( bool (*) (Collection_1_t5703 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m26765_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m26766_gshared (Collection_1_t5703 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m26766(__this, method) (( Object_t * (*) (Collection_1_t5703 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m26766_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m26767_gshared (Collection_1_t5703 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m26767(__this, method) (( bool (*) (Collection_1_t5703 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m26767_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m26768_gshared (Collection_1_t5703 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m26768(__this, method) (( bool (*) (Collection_1_t5703 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m26768_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m26769_gshared (Collection_1_t5703 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m26769(__this, ___index, method) (( Object_t * (*) (Collection_1_t5703 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m26769_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m26770_gshared (Collection_1_t5703 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m26770(__this, ___index, ___value, method) (( void (*) (Collection_1_t5703 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m26770_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m26771_gshared (Collection_1_t5703 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m26771(__this, ___item, method) (( void (*) (Collection_1_t5703 *, int32_t, const MethodInfo*))Collection_1_Add_m26771_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m26772_gshared (Collection_1_t5703 * __this, const MethodInfo* method);
#define Collection_1_Clear_m26772(__this, method) (( void (*) (Collection_1_t5703 *, const MethodInfo*))Collection_1_Clear_m26772_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m26773_gshared (Collection_1_t5703 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m26773(__this, method) (( void (*) (Collection_1_t5703 *, const MethodInfo*))Collection_1_ClearItems_m26773_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m26774_gshared (Collection_1_t5703 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m26774(__this, ___item, method) (( bool (*) (Collection_1_t5703 *, int32_t, const MethodInfo*))Collection_1_Contains_m26774_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m26775_gshared (Collection_1_t5703 * __this, Int32U5BU5D_t484* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m26775(__this, ___array, ___index, method) (( void (*) (Collection_1_t5703 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))Collection_1_CopyTo_m26775_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m26776_gshared (Collection_1_t5703 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m26776(__this, method) (( Object_t* (*) (Collection_1_t5703 *, const MethodInfo*))Collection_1_GetEnumerator_m26776_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m26777_gshared (Collection_1_t5703 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m26777(__this, ___item, method) (( int32_t (*) (Collection_1_t5703 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m26777_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m26778_gshared (Collection_1_t5703 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m26778(__this, ___index, ___item, method) (( void (*) (Collection_1_t5703 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m26778_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m26779_gshared (Collection_1_t5703 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m26779(__this, ___index, ___item, method) (( void (*) (Collection_1_t5703 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m26779_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m26780_gshared (Collection_1_t5703 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m26780(__this, ___item, method) (( bool (*) (Collection_1_t5703 *, int32_t, const MethodInfo*))Collection_1_Remove_m26780_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m26781_gshared (Collection_1_t5703 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m26781(__this, ___index, method) (( void (*) (Collection_1_t5703 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m26781_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m26782_gshared (Collection_1_t5703 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m26782(__this, ___index, method) (( void (*) (Collection_1_t5703 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m26782_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m26783_gshared (Collection_1_t5703 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m26783(__this, method) (( int32_t (*) (Collection_1_t5703 *, const MethodInfo*))Collection_1_get_Count_m26783_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m26784_gshared (Collection_1_t5703 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m26784(__this, ___index, method) (( int32_t (*) (Collection_1_t5703 *, int32_t, const MethodInfo*))Collection_1_get_Item_m26784_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m26785_gshared (Collection_1_t5703 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m26785(__this, ___index, ___value, method) (( void (*) (Collection_1_t5703 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m26785_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m26786_gshared (Collection_1_t5703 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m26786(__this, ___index, ___item, method) (( void (*) (Collection_1_t5703 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m26786_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m26787_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m26787(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m26787_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m26788_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m26788(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m26788_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m26789_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m26789(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m26789_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m26790_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m26790(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m26790_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m26791_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m26791(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m26791_gshared)(__this /* static, unused */, ___list, method)
