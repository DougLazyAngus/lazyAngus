#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t3330;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t541;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1378;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m16957_gshared (Collection_1_t3330 * __this, const MethodInfo* method);
#define Collection_1__ctor_m16957(__this, method) (( void (*) (Collection_1_t3330 *, const MethodInfo*))Collection_1__ctor_m16957_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16958_gshared (Collection_1_t3330 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16958(__this, method) (( bool (*) (Collection_1_t3330 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16958_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m16959_gshared (Collection_1_t3330 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m16959(__this, ___array, ___index, method) (( void (*) (Collection_1_t3330 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m16959_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m16960_gshared (Collection_1_t3330 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m16960(__this, method) (( Object_t * (*) (Collection_1_t3330 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m16960_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m16961_gshared (Collection_1_t3330 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m16961(__this, ___value, method) (( int32_t (*) (Collection_1_t3330 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m16961_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m16962_gshared (Collection_1_t3330 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m16962(__this, ___value, method) (( bool (*) (Collection_1_t3330 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m16962_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m16963_gshared (Collection_1_t3330 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m16963(__this, ___value, method) (( int32_t (*) (Collection_1_t3330 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m16963_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m16964_gshared (Collection_1_t3330 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m16964(__this, ___index, ___value, method) (( void (*) (Collection_1_t3330 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m16964_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m16965_gshared (Collection_1_t3330 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m16965(__this, ___value, method) (( void (*) (Collection_1_t3330 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m16965_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m16966_gshared (Collection_1_t3330 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m16966(__this, method) (( bool (*) (Collection_1_t3330 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m16966_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m16967_gshared (Collection_1_t3330 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m16967(__this, method) (( Object_t * (*) (Collection_1_t3330 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m16967_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m16968_gshared (Collection_1_t3330 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m16968(__this, method) (( bool (*) (Collection_1_t3330 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m16968_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m16969_gshared (Collection_1_t3330 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m16969(__this, method) (( bool (*) (Collection_1_t3330 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m16969_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m16970_gshared (Collection_1_t3330 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m16970(__this, ___index, method) (( Object_t * (*) (Collection_1_t3330 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m16970_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m16971_gshared (Collection_1_t3330 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m16971(__this, ___index, ___value, method) (( void (*) (Collection_1_t3330 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m16971_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m16972_gshared (Collection_1_t3330 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m16972(__this, ___item, method) (( void (*) (Collection_1_t3330 *, Object_t *, const MethodInfo*))Collection_1_Add_m16972_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m16973_gshared (Collection_1_t3330 * __this, const MethodInfo* method);
#define Collection_1_Clear_m16973(__this, method) (( void (*) (Collection_1_t3330 *, const MethodInfo*))Collection_1_Clear_m16973_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m16974_gshared (Collection_1_t3330 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m16974(__this, method) (( void (*) (Collection_1_t3330 *, const MethodInfo*))Collection_1_ClearItems_m16974_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m16975_gshared (Collection_1_t3330 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m16975(__this, ___item, method) (( bool (*) (Collection_1_t3330 *, Object_t *, const MethodInfo*))Collection_1_Contains_m16975_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m16976_gshared (Collection_1_t3330 * __this, ObjectU5BU5D_t541* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m16976(__this, ___array, ___index, method) (( void (*) (Collection_1_t3330 *, ObjectU5BU5D_t541*, int32_t, const MethodInfo*))Collection_1_CopyTo_m16976_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m16977_gshared (Collection_1_t3330 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m16977(__this, method) (( Object_t* (*) (Collection_1_t3330 *, const MethodInfo*))Collection_1_GetEnumerator_m16977_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m16978_gshared (Collection_1_t3330 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m16978(__this, ___item, method) (( int32_t (*) (Collection_1_t3330 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m16978_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m16979_gshared (Collection_1_t3330 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m16979(__this, ___index, ___item, method) (( void (*) (Collection_1_t3330 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m16979_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m16980_gshared (Collection_1_t3330 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m16980(__this, ___index, ___item, method) (( void (*) (Collection_1_t3330 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m16980_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m16981_gshared (Collection_1_t3330 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m16981(__this, ___item, method) (( bool (*) (Collection_1_t3330 *, Object_t *, const MethodInfo*))Collection_1_Remove_m16981_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m16982_gshared (Collection_1_t3330 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m16982(__this, ___index, method) (( void (*) (Collection_1_t3330 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m16982_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m16983_gshared (Collection_1_t3330 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m16983(__this, ___index, method) (( void (*) (Collection_1_t3330 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m16983_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m16984_gshared (Collection_1_t3330 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m16984(__this, method) (( int32_t (*) (Collection_1_t3330 *, const MethodInfo*))Collection_1_get_Count_m16984_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m16985_gshared (Collection_1_t3330 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m16985(__this, ___index, method) (( Object_t * (*) (Collection_1_t3330 *, int32_t, const MethodInfo*))Collection_1_get_Item_m16985_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m16986_gshared (Collection_1_t3330 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m16986(__this, ___index, ___value, method) (( void (*) (Collection_1_t3330 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m16986_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m16987_gshared (Collection_1_t3330 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m16987(__this, ___index, ___item, method) (( void (*) (Collection_1_t3330 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m16987_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m16988_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m16988(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m16988_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m16989_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m16989(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m16989_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m16990_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m16990(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m16990_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m16991_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m16991(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m16991_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m16992_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m16992(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m16992_gshared)(__this /* static, unused */, ___list, method)
