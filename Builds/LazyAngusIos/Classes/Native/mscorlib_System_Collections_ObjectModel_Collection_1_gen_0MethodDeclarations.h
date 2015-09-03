#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t6236;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3792;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t6234;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m30972_gshared (Collection_1_t6236 * __this, const MethodInfo* method);
#define Collection_1__ctor_m30972(__this, method) (( void (*) (Collection_1_t6236 *, const MethodInfo*))Collection_1__ctor_m30972_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30973_gshared (Collection_1_t6236 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30973(__this, method) (( bool (*) (Collection_1_t6236 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30973_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m30974_gshared (Collection_1_t6236 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m30974(__this, ___array, ___index, method) (( void (*) (Collection_1_t6236 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m30974_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m30975_gshared (Collection_1_t6236 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m30975(__this, method) (( Object_t * (*) (Collection_1_t6236 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m30975_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m30976_gshared (Collection_1_t6236 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m30976(__this, ___value, method) (( int32_t (*) (Collection_1_t6236 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m30976_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m30977_gshared (Collection_1_t6236 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m30977(__this, ___value, method) (( bool (*) (Collection_1_t6236 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m30977_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m30978_gshared (Collection_1_t6236 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m30978(__this, ___value, method) (( int32_t (*) (Collection_1_t6236 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m30978_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m30979_gshared (Collection_1_t6236 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m30979(__this, ___index, ___value, method) (( void (*) (Collection_1_t6236 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m30979_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m30980_gshared (Collection_1_t6236 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m30980(__this, ___value, method) (( void (*) (Collection_1_t6236 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m30980_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m30981_gshared (Collection_1_t6236 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m30981(__this, method) (( bool (*) (Collection_1_t6236 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m30981_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m30982_gshared (Collection_1_t6236 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m30982(__this, method) (( Object_t * (*) (Collection_1_t6236 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m30982_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m30983_gshared (Collection_1_t6236 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m30983(__this, method) (( bool (*) (Collection_1_t6236 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m30983_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m30984_gshared (Collection_1_t6236 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m30984(__this, method) (( bool (*) (Collection_1_t6236 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m30984_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m30985_gshared (Collection_1_t6236 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m30985(__this, ___index, method) (( Object_t * (*) (Collection_1_t6236 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m30985_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m30986_gshared (Collection_1_t6236 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m30986(__this, ___index, ___value, method) (( void (*) (Collection_1_t6236 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m30986_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m30987_gshared (Collection_1_t6236 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m30987(__this, ___item, method) (( void (*) (Collection_1_t6236 *, int32_t, const MethodInfo*))Collection_1_Add_m30987_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m30988_gshared (Collection_1_t6236 * __this, const MethodInfo* method);
#define Collection_1_Clear_m30988(__this, method) (( void (*) (Collection_1_t6236 *, const MethodInfo*))Collection_1_Clear_m30988_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m30989_gshared (Collection_1_t6236 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m30989(__this, method) (( void (*) (Collection_1_t6236 *, const MethodInfo*))Collection_1_ClearItems_m30989_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m30990_gshared (Collection_1_t6236 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m30990(__this, ___item, method) (( bool (*) (Collection_1_t6236 *, int32_t, const MethodInfo*))Collection_1_Contains_m30990_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m30991_gshared (Collection_1_t6236 * __this, Int32U5BU5D_t484* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m30991(__this, ___array, ___index, method) (( void (*) (Collection_1_t6236 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))Collection_1_CopyTo_m30991_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m30992_gshared (Collection_1_t6236 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m30992(__this, method) (( Object_t* (*) (Collection_1_t6236 *, const MethodInfo*))Collection_1_GetEnumerator_m30992_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m30993_gshared (Collection_1_t6236 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m30993(__this, ___item, method) (( int32_t (*) (Collection_1_t6236 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m30993_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m30994_gshared (Collection_1_t6236 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m30994(__this, ___index, ___item, method) (( void (*) (Collection_1_t6236 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m30994_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m30995_gshared (Collection_1_t6236 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m30995(__this, ___index, ___item, method) (( void (*) (Collection_1_t6236 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m30995_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m30996_gshared (Collection_1_t6236 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m30996(__this, ___item, method) (( bool (*) (Collection_1_t6236 *, int32_t, const MethodInfo*))Collection_1_Remove_m30996_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m30997_gshared (Collection_1_t6236 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m30997(__this, ___index, method) (( void (*) (Collection_1_t6236 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m30997_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m30998_gshared (Collection_1_t6236 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m30998(__this, ___index, method) (( void (*) (Collection_1_t6236 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m30998_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m30999_gshared (Collection_1_t6236 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m30999(__this, method) (( int32_t (*) (Collection_1_t6236 *, const MethodInfo*))Collection_1_get_Count_m30999_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m31000_gshared (Collection_1_t6236 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m31000(__this, ___index, method) (( int32_t (*) (Collection_1_t6236 *, int32_t, const MethodInfo*))Collection_1_get_Item_m31000_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m31001_gshared (Collection_1_t6236 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m31001(__this, ___index, ___value, method) (( void (*) (Collection_1_t6236 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m31001_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m31002_gshared (Collection_1_t6236 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m31002(__this, ___index, ___item, method) (( void (*) (Collection_1_t6236 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m31002_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m31003_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m31003(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m31003_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m31004_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m31004(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m31004_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m31005_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m31005(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m31005_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m31006_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m31006(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m31006_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m31007_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m31007(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m31007_gshared)(__this /* static, unused */, ___list, method)
