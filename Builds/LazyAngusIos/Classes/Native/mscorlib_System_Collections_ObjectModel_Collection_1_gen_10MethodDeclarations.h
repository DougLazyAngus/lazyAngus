#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int64>
struct Collection_1_t7225;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4566;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6920;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t6917;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::.ctor()
extern "C" void Collection_1__ctor_m44012_gshared (Collection_1_t7225 * __this, const MethodInfo* method);
#define Collection_1__ctor_m44012(__this, method) (( void (*) (Collection_1_t7225 *, const MethodInfo*))Collection_1__ctor_m44012_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44013_gshared (Collection_1_t7225 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44013(__this, method) (( bool (*) (Collection_1_t7225 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44013_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m44014_gshared (Collection_1_t7225 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m44014(__this, ___array, ___index, method) (( void (*) (Collection_1_t7225 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m44014_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m44015_gshared (Collection_1_t7225 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m44015(__this, method) (( Object_t * (*) (Collection_1_t7225 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m44015_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m44016_gshared (Collection_1_t7225 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m44016(__this, ___value, method) (( int32_t (*) (Collection_1_t7225 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m44016_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m44017_gshared (Collection_1_t7225 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m44017(__this, ___value, method) (( bool (*) (Collection_1_t7225 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m44017_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m44018_gshared (Collection_1_t7225 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m44018(__this, ___value, method) (( int32_t (*) (Collection_1_t7225 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m44018_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m44019_gshared (Collection_1_t7225 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m44019(__this, ___index, ___value, method) (( void (*) (Collection_1_t7225 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m44019_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m44020_gshared (Collection_1_t7225 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m44020(__this, ___value, method) (( void (*) (Collection_1_t7225 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m44020_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m44021_gshared (Collection_1_t7225 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m44021(__this, method) (( bool (*) (Collection_1_t7225 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m44021_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m44022_gshared (Collection_1_t7225 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m44022(__this, method) (( Object_t * (*) (Collection_1_t7225 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m44022_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m44023_gshared (Collection_1_t7225 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m44023(__this, method) (( bool (*) (Collection_1_t7225 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m44023_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m44024_gshared (Collection_1_t7225 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m44024(__this, method) (( bool (*) (Collection_1_t7225 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m44024_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m44025_gshared (Collection_1_t7225 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m44025(__this, ___index, method) (( Object_t * (*) (Collection_1_t7225 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m44025_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m44026_gshared (Collection_1_t7225 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m44026(__this, ___index, ___value, method) (( void (*) (Collection_1_t7225 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m44026_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Add(T)
extern "C" void Collection_1_Add_m44027_gshared (Collection_1_t7225 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Add_m44027(__this, ___item, method) (( void (*) (Collection_1_t7225 *, int64_t, const MethodInfo*))Collection_1_Add_m44027_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Clear()
extern "C" void Collection_1_Clear_m44028_gshared (Collection_1_t7225 * __this, const MethodInfo* method);
#define Collection_1_Clear_m44028(__this, method) (( void (*) (Collection_1_t7225 *, const MethodInfo*))Collection_1_Clear_m44028_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::ClearItems()
extern "C" void Collection_1_ClearItems_m44029_gshared (Collection_1_t7225 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m44029(__this, method) (( void (*) (Collection_1_t7225 *, const MethodInfo*))Collection_1_ClearItems_m44029_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::Contains(T)
extern "C" bool Collection_1_Contains_m44030_gshared (Collection_1_t7225 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m44030(__this, ___item, method) (( bool (*) (Collection_1_t7225 *, int64_t, const MethodInfo*))Collection_1_Contains_m44030_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m44031_gshared (Collection_1_t7225 * __this, Int64U5BU5D_t4566* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m44031(__this, ___array, ___index, method) (( void (*) (Collection_1_t7225 *, Int64U5BU5D_t4566*, int32_t, const MethodInfo*))Collection_1_CopyTo_m44031_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int64>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m44032_gshared (Collection_1_t7225 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m44032(__this, method) (( Object_t* (*) (Collection_1_t7225 *, const MethodInfo*))Collection_1_GetEnumerator_m44032_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m44033_gshared (Collection_1_t7225 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m44033(__this, ___item, method) (( int32_t (*) (Collection_1_t7225 *, int64_t, const MethodInfo*))Collection_1_IndexOf_m44033_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m44034_gshared (Collection_1_t7225 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m44034(__this, ___index, ___item, method) (( void (*) (Collection_1_t7225 *, int32_t, int64_t, const MethodInfo*))Collection_1_Insert_m44034_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m44035_gshared (Collection_1_t7225 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m44035(__this, ___index, ___item, method) (( void (*) (Collection_1_t7225 *, int32_t, int64_t, const MethodInfo*))Collection_1_InsertItem_m44035_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::Remove(T)
extern "C" bool Collection_1_Remove_m44036_gshared (Collection_1_t7225 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m44036(__this, ___item, method) (( bool (*) (Collection_1_t7225 *, int64_t, const MethodInfo*))Collection_1_Remove_m44036_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m44037_gshared (Collection_1_t7225 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m44037(__this, ___index, method) (( void (*) (Collection_1_t7225 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m44037_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m44038_gshared (Collection_1_t7225 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m44038(__this, ___index, method) (( void (*) (Collection_1_t7225 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m44038_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::get_Count()
extern "C" int32_t Collection_1_get_Count_m44039_gshared (Collection_1_t7225 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m44039(__this, method) (( int32_t (*) (Collection_1_t7225 *, const MethodInfo*))Collection_1_get_Count_m44039_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t Collection_1_get_Item_m44040_gshared (Collection_1_t7225 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m44040(__this, ___index, method) (( int64_t (*) (Collection_1_t7225 *, int32_t, const MethodInfo*))Collection_1_get_Item_m44040_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m44041_gshared (Collection_1_t7225 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m44041(__this, ___index, ___value, method) (( void (*) (Collection_1_t7225 *, int32_t, int64_t, const MethodInfo*))Collection_1_set_Item_m44041_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m44042_gshared (Collection_1_t7225 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m44042(__this, ___index, ___item, method) (( void (*) (Collection_1_t7225 *, int32_t, int64_t, const MethodInfo*))Collection_1_SetItem_m44042_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m44043_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m44043(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m44043_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int64>::ConvertItem(System.Object)
extern "C" int64_t Collection_1_ConvertItem_m44044_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m44044(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m44044_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m44045_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m44045(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m44045_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m44046_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m44046(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m44046_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m44047_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m44047(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m44047_gshared)(__this /* static, unused */, ___list, method)
