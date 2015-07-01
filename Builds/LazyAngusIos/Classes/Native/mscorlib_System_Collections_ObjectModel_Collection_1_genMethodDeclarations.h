#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t3275;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t485;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1323;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m16593_gshared (Collection_1_t3275 * __this, const MethodInfo* method);
#define Collection_1__ctor_m16593(__this, method) (( void (*) (Collection_1_t3275 *, const MethodInfo*))Collection_1__ctor_m16593_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16594_gshared (Collection_1_t3275 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16594(__this, method) (( bool (*) (Collection_1_t3275 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16594_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m16595_gshared (Collection_1_t3275 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m16595(__this, ___array, ___index, method) (( void (*) (Collection_1_t3275 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m16595_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m16596_gshared (Collection_1_t3275 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m16596(__this, method) (( Object_t * (*) (Collection_1_t3275 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m16596_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m16597_gshared (Collection_1_t3275 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m16597(__this, ___value, method) (( int32_t (*) (Collection_1_t3275 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m16597_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m16598_gshared (Collection_1_t3275 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m16598(__this, ___value, method) (( bool (*) (Collection_1_t3275 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m16598_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m16599_gshared (Collection_1_t3275 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m16599(__this, ___value, method) (( int32_t (*) (Collection_1_t3275 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m16599_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m16600_gshared (Collection_1_t3275 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m16600(__this, ___index, ___value, method) (( void (*) (Collection_1_t3275 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m16600_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m16601_gshared (Collection_1_t3275 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m16601(__this, ___value, method) (( void (*) (Collection_1_t3275 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m16601_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m16602_gshared (Collection_1_t3275 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m16602(__this, method) (( bool (*) (Collection_1_t3275 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m16602_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m16603_gshared (Collection_1_t3275 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m16603(__this, method) (( Object_t * (*) (Collection_1_t3275 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m16603_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m16604_gshared (Collection_1_t3275 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m16604(__this, method) (( bool (*) (Collection_1_t3275 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m16604_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m16605_gshared (Collection_1_t3275 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m16605(__this, method) (( bool (*) (Collection_1_t3275 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m16605_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m16606_gshared (Collection_1_t3275 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m16606(__this, ___index, method) (( Object_t * (*) (Collection_1_t3275 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m16606_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m16607_gshared (Collection_1_t3275 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m16607(__this, ___index, ___value, method) (( void (*) (Collection_1_t3275 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m16607_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m16608_gshared (Collection_1_t3275 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m16608(__this, ___item, method) (( void (*) (Collection_1_t3275 *, Object_t *, const MethodInfo*))Collection_1_Add_m16608_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m16609_gshared (Collection_1_t3275 * __this, const MethodInfo* method);
#define Collection_1_Clear_m16609(__this, method) (( void (*) (Collection_1_t3275 *, const MethodInfo*))Collection_1_Clear_m16609_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m16610_gshared (Collection_1_t3275 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m16610(__this, method) (( void (*) (Collection_1_t3275 *, const MethodInfo*))Collection_1_ClearItems_m16610_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m16611_gshared (Collection_1_t3275 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m16611(__this, ___item, method) (( bool (*) (Collection_1_t3275 *, Object_t *, const MethodInfo*))Collection_1_Contains_m16611_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m16612_gshared (Collection_1_t3275 * __this, ObjectU5BU5D_t485* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m16612(__this, ___array, ___index, method) (( void (*) (Collection_1_t3275 *, ObjectU5BU5D_t485*, int32_t, const MethodInfo*))Collection_1_CopyTo_m16612_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m16613_gshared (Collection_1_t3275 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m16613(__this, method) (( Object_t* (*) (Collection_1_t3275 *, const MethodInfo*))Collection_1_GetEnumerator_m16613_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m16614_gshared (Collection_1_t3275 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m16614(__this, ___item, method) (( int32_t (*) (Collection_1_t3275 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m16614_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m16615_gshared (Collection_1_t3275 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m16615(__this, ___index, ___item, method) (( void (*) (Collection_1_t3275 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m16615_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m16616_gshared (Collection_1_t3275 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m16616(__this, ___index, ___item, method) (( void (*) (Collection_1_t3275 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m16616_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m16617_gshared (Collection_1_t3275 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m16617(__this, ___item, method) (( bool (*) (Collection_1_t3275 *, Object_t *, const MethodInfo*))Collection_1_Remove_m16617_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m16618_gshared (Collection_1_t3275 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m16618(__this, ___index, method) (( void (*) (Collection_1_t3275 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m16618_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m16619_gshared (Collection_1_t3275 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m16619(__this, ___index, method) (( void (*) (Collection_1_t3275 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m16619_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m16620_gshared (Collection_1_t3275 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m16620(__this, method) (( int32_t (*) (Collection_1_t3275 *, const MethodInfo*))Collection_1_get_Count_m16620_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m16621_gshared (Collection_1_t3275 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m16621(__this, ___index, method) (( Object_t * (*) (Collection_1_t3275 *, int32_t, const MethodInfo*))Collection_1_get_Item_m16621_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m16622_gshared (Collection_1_t3275 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m16622(__this, ___index, ___value, method) (( void (*) (Collection_1_t3275 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m16622_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m16623_gshared (Collection_1_t3275 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m16623(__this, ___index, ___item, method) (( void (*) (Collection_1_t3275 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m16623_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m16624_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m16624(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m16624_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m16625_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m16625(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m16625_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m16626_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m16626(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m16626_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m16627_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m16627(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m16627_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m16628_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m16628(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m16628_gshared)(__this /* static, unused */, ___list, method)
