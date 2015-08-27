#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t5687;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3363;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t5685;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m26627_gshared (Collection_1_t5687 * __this, const MethodInfo* method);
#define Collection_1__ctor_m26627(__this, method) (( void (*) (Collection_1_t5687 *, const MethodInfo*))Collection_1__ctor_m26627_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26628_gshared (Collection_1_t5687 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26628(__this, method) (( bool (*) (Collection_1_t5687 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26628_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m26629_gshared (Collection_1_t5687 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m26629(__this, ___array, ___index, method) (( void (*) (Collection_1_t5687 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m26629_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m26630_gshared (Collection_1_t5687 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m26630(__this, method) (( Object_t * (*) (Collection_1_t5687 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m26630_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m26631_gshared (Collection_1_t5687 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m26631(__this, ___value, method) (( int32_t (*) (Collection_1_t5687 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m26631_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m26632_gshared (Collection_1_t5687 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m26632(__this, ___value, method) (( bool (*) (Collection_1_t5687 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m26632_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m26633_gshared (Collection_1_t5687 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m26633(__this, ___value, method) (( int32_t (*) (Collection_1_t5687 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m26633_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m26634_gshared (Collection_1_t5687 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m26634(__this, ___index, ___value, method) (( void (*) (Collection_1_t5687 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m26634_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m26635_gshared (Collection_1_t5687 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m26635(__this, ___value, method) (( void (*) (Collection_1_t5687 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m26635_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m26636_gshared (Collection_1_t5687 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m26636(__this, method) (( bool (*) (Collection_1_t5687 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m26636_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m26637_gshared (Collection_1_t5687 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m26637(__this, method) (( Object_t * (*) (Collection_1_t5687 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m26637_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m26638_gshared (Collection_1_t5687 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m26638(__this, method) (( bool (*) (Collection_1_t5687 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m26638_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m26639_gshared (Collection_1_t5687 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m26639(__this, method) (( bool (*) (Collection_1_t5687 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m26639_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m26640_gshared (Collection_1_t5687 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m26640(__this, ___index, method) (( Object_t * (*) (Collection_1_t5687 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m26640_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m26641_gshared (Collection_1_t5687 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m26641(__this, ___index, ___value, method) (( void (*) (Collection_1_t5687 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m26641_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m26642_gshared (Collection_1_t5687 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m26642(__this, ___item, method) (( void (*) (Collection_1_t5687 *, int32_t, const MethodInfo*))Collection_1_Add_m26642_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m26643_gshared (Collection_1_t5687 * __this, const MethodInfo* method);
#define Collection_1_Clear_m26643(__this, method) (( void (*) (Collection_1_t5687 *, const MethodInfo*))Collection_1_Clear_m26643_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m26644_gshared (Collection_1_t5687 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m26644(__this, method) (( void (*) (Collection_1_t5687 *, const MethodInfo*))Collection_1_ClearItems_m26644_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m26645_gshared (Collection_1_t5687 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m26645(__this, ___item, method) (( bool (*) (Collection_1_t5687 *, int32_t, const MethodInfo*))Collection_1_Contains_m26645_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m26646_gshared (Collection_1_t5687 * __this, Int32U5BU5D_t484* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m26646(__this, ___array, ___index, method) (( void (*) (Collection_1_t5687 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))Collection_1_CopyTo_m26646_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m26647_gshared (Collection_1_t5687 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m26647(__this, method) (( Object_t* (*) (Collection_1_t5687 *, const MethodInfo*))Collection_1_GetEnumerator_m26647_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m26648_gshared (Collection_1_t5687 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m26648(__this, ___item, method) (( int32_t (*) (Collection_1_t5687 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m26648_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m26649_gshared (Collection_1_t5687 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m26649(__this, ___index, ___item, method) (( void (*) (Collection_1_t5687 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m26649_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m26650_gshared (Collection_1_t5687 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m26650(__this, ___index, ___item, method) (( void (*) (Collection_1_t5687 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m26650_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m26651_gshared (Collection_1_t5687 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m26651(__this, ___item, method) (( bool (*) (Collection_1_t5687 *, int32_t, const MethodInfo*))Collection_1_Remove_m26651_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m26652_gshared (Collection_1_t5687 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m26652(__this, ___index, method) (( void (*) (Collection_1_t5687 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m26652_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m26653_gshared (Collection_1_t5687 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m26653(__this, ___index, method) (( void (*) (Collection_1_t5687 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m26653_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m26654_gshared (Collection_1_t5687 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m26654(__this, method) (( int32_t (*) (Collection_1_t5687 *, const MethodInfo*))Collection_1_get_Count_m26654_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m26655_gshared (Collection_1_t5687 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m26655(__this, ___index, method) (( int32_t (*) (Collection_1_t5687 *, int32_t, const MethodInfo*))Collection_1_get_Item_m26655_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m26656_gshared (Collection_1_t5687 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m26656(__this, ___index, ___value, method) (( void (*) (Collection_1_t5687 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m26656_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m26657_gshared (Collection_1_t5687 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m26657(__this, ___index, ___item, method) (( void (*) (Collection_1_t5687 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m26657_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m26658_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m26658(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m26658_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m26659_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m26659(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m26659_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m26660_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m26660(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m26660_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m26661_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m26661(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m26661_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m26662_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m26662(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m26662_gshared)(__this /* static, unused */, ___list, method)
