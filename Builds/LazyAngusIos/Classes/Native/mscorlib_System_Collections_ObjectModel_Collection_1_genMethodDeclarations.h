#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t5426;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1375;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m21686_gshared (Collection_1_t5426 * __this, const MethodInfo* method);
#define Collection_1__ctor_m21686(__this, method) (( void (*) (Collection_1_t5426 *, const MethodInfo*))Collection_1__ctor_m21686_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21687_gshared (Collection_1_t5426 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21687(__this, method) (( bool (*) (Collection_1_t5426 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21687_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m21688_gshared (Collection_1_t5426 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m21688(__this, ___array, ___index, method) (( void (*) (Collection_1_t5426 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m21688_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m21689_gshared (Collection_1_t5426 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m21689(__this, method) (( Object_t * (*) (Collection_1_t5426 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m21689_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m21690_gshared (Collection_1_t5426 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m21690(__this, ___value, method) (( int32_t (*) (Collection_1_t5426 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m21690_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m21691_gshared (Collection_1_t5426 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m21691(__this, ___value, method) (( bool (*) (Collection_1_t5426 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m21691_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m21692_gshared (Collection_1_t5426 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m21692(__this, ___value, method) (( int32_t (*) (Collection_1_t5426 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m21692_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m21693_gshared (Collection_1_t5426 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m21693(__this, ___index, ___value, method) (( void (*) (Collection_1_t5426 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m21693_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m21694_gshared (Collection_1_t5426 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m21694(__this, ___value, method) (( void (*) (Collection_1_t5426 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m21694_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m21695_gshared (Collection_1_t5426 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m21695(__this, method) (( bool (*) (Collection_1_t5426 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m21695_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m21696_gshared (Collection_1_t5426 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m21696(__this, method) (( Object_t * (*) (Collection_1_t5426 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m21696_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m21697_gshared (Collection_1_t5426 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m21697(__this, method) (( bool (*) (Collection_1_t5426 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m21697_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m21698_gshared (Collection_1_t5426 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m21698(__this, method) (( bool (*) (Collection_1_t5426 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m21698_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m21699_gshared (Collection_1_t5426 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m21699(__this, ___index, method) (( Object_t * (*) (Collection_1_t5426 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m21699_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m21700_gshared (Collection_1_t5426 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m21700(__this, ___index, ___value, method) (( void (*) (Collection_1_t5426 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m21700_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m21701_gshared (Collection_1_t5426 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m21701(__this, ___item, method) (( void (*) (Collection_1_t5426 *, Object_t *, const MethodInfo*))Collection_1_Add_m21701_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m21702_gshared (Collection_1_t5426 * __this, const MethodInfo* method);
#define Collection_1_Clear_m21702(__this, method) (( void (*) (Collection_1_t5426 *, const MethodInfo*))Collection_1_Clear_m21702_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m21703_gshared (Collection_1_t5426 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m21703(__this, method) (( void (*) (Collection_1_t5426 *, const MethodInfo*))Collection_1_ClearItems_m21703_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m21704_gshared (Collection_1_t5426 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m21704(__this, ___item, method) (( bool (*) (Collection_1_t5426 *, Object_t *, const MethodInfo*))Collection_1_Contains_m21704_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m21705_gshared (Collection_1_t5426 * __this, ObjectU5BU5D_t682* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m21705(__this, ___array, ___index, method) (( void (*) (Collection_1_t5426 *, ObjectU5BU5D_t682*, int32_t, const MethodInfo*))Collection_1_CopyTo_m21705_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m21706_gshared (Collection_1_t5426 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m21706(__this, method) (( Object_t* (*) (Collection_1_t5426 *, const MethodInfo*))Collection_1_GetEnumerator_m21706_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m21707_gshared (Collection_1_t5426 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m21707(__this, ___item, method) (( int32_t (*) (Collection_1_t5426 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m21707_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m21708_gshared (Collection_1_t5426 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m21708(__this, ___index, ___item, method) (( void (*) (Collection_1_t5426 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m21708_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m21709_gshared (Collection_1_t5426 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m21709(__this, ___index, ___item, method) (( void (*) (Collection_1_t5426 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m21709_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m21710_gshared (Collection_1_t5426 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m21710(__this, ___item, method) (( bool (*) (Collection_1_t5426 *, Object_t *, const MethodInfo*))Collection_1_Remove_m21710_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m21711_gshared (Collection_1_t5426 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m21711(__this, ___index, method) (( void (*) (Collection_1_t5426 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m21711_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m21712_gshared (Collection_1_t5426 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m21712(__this, ___index, method) (( void (*) (Collection_1_t5426 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m21712_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m21713_gshared (Collection_1_t5426 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m21713(__this, method) (( int32_t (*) (Collection_1_t5426 *, const MethodInfo*))Collection_1_get_Count_m21713_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m21714_gshared (Collection_1_t5426 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m21714(__this, ___index, method) (( Object_t * (*) (Collection_1_t5426 *, int32_t, const MethodInfo*))Collection_1_get_Item_m21714_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m21715_gshared (Collection_1_t5426 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m21715(__this, ___index, ___value, method) (( void (*) (Collection_1_t5426 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m21715_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m21716_gshared (Collection_1_t5426 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m21716(__this, ___index, ___item, method) (( void (*) (Collection_1_t5426 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m21716_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m21717_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m21717(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m21717_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m21718_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m21718(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m21718_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m21719_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m21719(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m21719_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m21720_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m21720(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m21720_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m21721_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m21721(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m21721_gshared)(__this /* static, unused */, ___list, method)
