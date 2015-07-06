#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t3297;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t509;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1345;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m16741_gshared (Collection_1_t3297 * __this, const MethodInfo* method);
#define Collection_1__ctor_m16741(__this, method) (( void (*) (Collection_1_t3297 *, const MethodInfo*))Collection_1__ctor_m16741_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16742_gshared (Collection_1_t3297 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16742(__this, method) (( bool (*) (Collection_1_t3297 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16742_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m16743_gshared (Collection_1_t3297 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m16743(__this, ___array, ___index, method) (( void (*) (Collection_1_t3297 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m16743_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m16744_gshared (Collection_1_t3297 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m16744(__this, method) (( Object_t * (*) (Collection_1_t3297 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m16744_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m16745_gshared (Collection_1_t3297 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m16745(__this, ___value, method) (( int32_t (*) (Collection_1_t3297 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m16745_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m16746_gshared (Collection_1_t3297 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m16746(__this, ___value, method) (( bool (*) (Collection_1_t3297 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m16746_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m16747_gshared (Collection_1_t3297 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m16747(__this, ___value, method) (( int32_t (*) (Collection_1_t3297 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m16747_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m16748_gshared (Collection_1_t3297 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m16748(__this, ___index, ___value, method) (( void (*) (Collection_1_t3297 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m16748_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m16749_gshared (Collection_1_t3297 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m16749(__this, ___value, method) (( void (*) (Collection_1_t3297 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m16749_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m16750_gshared (Collection_1_t3297 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m16750(__this, method) (( bool (*) (Collection_1_t3297 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m16750_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m16751_gshared (Collection_1_t3297 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m16751(__this, method) (( Object_t * (*) (Collection_1_t3297 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m16751_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m16752_gshared (Collection_1_t3297 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m16752(__this, method) (( bool (*) (Collection_1_t3297 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m16752_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m16753_gshared (Collection_1_t3297 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m16753(__this, method) (( bool (*) (Collection_1_t3297 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m16753_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m16754_gshared (Collection_1_t3297 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m16754(__this, ___index, method) (( Object_t * (*) (Collection_1_t3297 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m16754_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m16755_gshared (Collection_1_t3297 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m16755(__this, ___index, ___value, method) (( void (*) (Collection_1_t3297 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m16755_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m16756_gshared (Collection_1_t3297 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m16756(__this, ___item, method) (( void (*) (Collection_1_t3297 *, Object_t *, const MethodInfo*))Collection_1_Add_m16756_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m16757_gshared (Collection_1_t3297 * __this, const MethodInfo* method);
#define Collection_1_Clear_m16757(__this, method) (( void (*) (Collection_1_t3297 *, const MethodInfo*))Collection_1_Clear_m16757_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m16758_gshared (Collection_1_t3297 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m16758(__this, method) (( void (*) (Collection_1_t3297 *, const MethodInfo*))Collection_1_ClearItems_m16758_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m16759_gshared (Collection_1_t3297 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m16759(__this, ___item, method) (( bool (*) (Collection_1_t3297 *, Object_t *, const MethodInfo*))Collection_1_Contains_m16759_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m16760_gshared (Collection_1_t3297 * __this, ObjectU5BU5D_t509* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m16760(__this, ___array, ___index, method) (( void (*) (Collection_1_t3297 *, ObjectU5BU5D_t509*, int32_t, const MethodInfo*))Collection_1_CopyTo_m16760_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m16761_gshared (Collection_1_t3297 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m16761(__this, method) (( Object_t* (*) (Collection_1_t3297 *, const MethodInfo*))Collection_1_GetEnumerator_m16761_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m16762_gshared (Collection_1_t3297 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m16762(__this, ___item, method) (( int32_t (*) (Collection_1_t3297 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m16762_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m16763_gshared (Collection_1_t3297 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m16763(__this, ___index, ___item, method) (( void (*) (Collection_1_t3297 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m16763_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m16764_gshared (Collection_1_t3297 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m16764(__this, ___index, ___item, method) (( void (*) (Collection_1_t3297 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m16764_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m16765_gshared (Collection_1_t3297 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m16765(__this, ___item, method) (( bool (*) (Collection_1_t3297 *, Object_t *, const MethodInfo*))Collection_1_Remove_m16765_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m16766_gshared (Collection_1_t3297 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m16766(__this, ___index, method) (( void (*) (Collection_1_t3297 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m16766_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m16767_gshared (Collection_1_t3297 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m16767(__this, ___index, method) (( void (*) (Collection_1_t3297 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m16767_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m16768_gshared (Collection_1_t3297 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m16768(__this, method) (( int32_t (*) (Collection_1_t3297 *, const MethodInfo*))Collection_1_get_Count_m16768_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m16769_gshared (Collection_1_t3297 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m16769(__this, ___index, method) (( Object_t * (*) (Collection_1_t3297 *, int32_t, const MethodInfo*))Collection_1_get_Item_m16769_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m16770_gshared (Collection_1_t3297 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m16770(__this, ___index, ___value, method) (( void (*) (Collection_1_t3297 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m16770_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m16771_gshared (Collection_1_t3297 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m16771(__this, ___index, ___item, method) (( void (*) (Collection_1_t3297 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m16771_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m16772_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m16772(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m16772_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m16773_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m16773(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m16773_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m16774_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m16774(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m16774_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m16775_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m16775(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m16775_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m16776_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m16776(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m16776_gshared)(__this /* static, unused */, ___list, method)
