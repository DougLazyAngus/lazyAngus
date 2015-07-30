#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Double>
struct Collection_1_t6680;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Double[]
struct DoubleU5BU5D_t4825;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6286;
// System.Collections.Generic.IList`1<System.Double>
struct IList_1_t6283;

// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::.ctor()
extern "C" void Collection_1__ctor_m40001_gshared (Collection_1_t6680 * __this, const MethodInfo* method);
#define Collection_1__ctor_m40001(__this, method) (( void (*) (Collection_1_t6680 *, const MethodInfo*))Collection_1__ctor_m40001_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40002_gshared (Collection_1_t6680 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40002(__this, method) (( bool (*) (Collection_1_t6680 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40002_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m40003_gshared (Collection_1_t6680 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m40003(__this, ___array, ___index, method) (( void (*) (Collection_1_t6680 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m40003_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m40004_gshared (Collection_1_t6680 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m40004(__this, method) (( Object_t * (*) (Collection_1_t6680 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m40004_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m40005_gshared (Collection_1_t6680 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m40005(__this, ___value, method) (( int32_t (*) (Collection_1_t6680 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m40005_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m40006_gshared (Collection_1_t6680 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m40006(__this, ___value, method) (( bool (*) (Collection_1_t6680 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m40006_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m40007_gshared (Collection_1_t6680 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m40007(__this, ___value, method) (( int32_t (*) (Collection_1_t6680 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m40007_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m40008_gshared (Collection_1_t6680 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m40008(__this, ___index, ___value, method) (( void (*) (Collection_1_t6680 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m40008_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m40009_gshared (Collection_1_t6680 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m40009(__this, ___value, method) (( void (*) (Collection_1_t6680 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m40009_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m40010_gshared (Collection_1_t6680 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m40010(__this, method) (( bool (*) (Collection_1_t6680 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m40010_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m40011_gshared (Collection_1_t6680 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m40011(__this, method) (( Object_t * (*) (Collection_1_t6680 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m40011_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m40012_gshared (Collection_1_t6680 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m40012(__this, method) (( bool (*) (Collection_1_t6680 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m40012_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m40013_gshared (Collection_1_t6680 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m40013(__this, method) (( bool (*) (Collection_1_t6680 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m40013_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m40014_gshared (Collection_1_t6680 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m40014(__this, ___index, method) (( Object_t * (*) (Collection_1_t6680 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m40014_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m40015_gshared (Collection_1_t6680 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m40015(__this, ___index, ___value, method) (( void (*) (Collection_1_t6680 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m40015_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Add(T)
extern "C" void Collection_1_Add_m40016_gshared (Collection_1_t6680 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Add_m40016(__this, ___item, method) (( void (*) (Collection_1_t6680 *, double, const MethodInfo*))Collection_1_Add_m40016_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Clear()
extern "C" void Collection_1_Clear_m40017_gshared (Collection_1_t6680 * __this, const MethodInfo* method);
#define Collection_1_Clear_m40017(__this, method) (( void (*) (Collection_1_t6680 *, const MethodInfo*))Collection_1_Clear_m40017_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::ClearItems()
extern "C" void Collection_1_ClearItems_m40018_gshared (Collection_1_t6680 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m40018(__this, method) (( void (*) (Collection_1_t6680 *, const MethodInfo*))Collection_1_ClearItems_m40018_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Contains(T)
extern "C" bool Collection_1_Contains_m40019_gshared (Collection_1_t6680 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Contains_m40019(__this, ___item, method) (( bool (*) (Collection_1_t6680 *, double, const MethodInfo*))Collection_1_Contains_m40019_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m40020_gshared (Collection_1_t6680 * __this, DoubleU5BU5D_t4825* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m40020(__this, ___array, ___index, method) (( void (*) (Collection_1_t6680 *, DoubleU5BU5D_t4825*, int32_t, const MethodInfo*))Collection_1_CopyTo_m40020_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Double>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m40021_gshared (Collection_1_t6680 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m40021(__this, method) (( Object_t* (*) (Collection_1_t6680 *, const MethodInfo*))Collection_1_GetEnumerator_m40021_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m40022_gshared (Collection_1_t6680 * __this, double ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m40022(__this, ___item, method) (( int32_t (*) (Collection_1_t6680 *, double, const MethodInfo*))Collection_1_IndexOf_m40022_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m40023_gshared (Collection_1_t6680 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_Insert_m40023(__this, ___index, ___item, method) (( void (*) (Collection_1_t6680 *, int32_t, double, const MethodInfo*))Collection_1_Insert_m40023_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m40024_gshared (Collection_1_t6680 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m40024(__this, ___index, ___item, method) (( void (*) (Collection_1_t6680 *, int32_t, double, const MethodInfo*))Collection_1_InsertItem_m40024_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Remove(T)
extern "C" bool Collection_1_Remove_m40025_gshared (Collection_1_t6680 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Remove_m40025(__this, ___item, method) (( bool (*) (Collection_1_t6680 *, double, const MethodInfo*))Collection_1_Remove_m40025_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m40026_gshared (Collection_1_t6680 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m40026(__this, ___index, method) (( void (*) (Collection_1_t6680 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m40026_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m40027_gshared (Collection_1_t6680 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m40027(__this, ___index, method) (( void (*) (Collection_1_t6680 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m40027_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::get_Count()
extern "C" int32_t Collection_1_get_Count_m40028_gshared (Collection_1_t6680 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m40028(__this, method) (( int32_t (*) (Collection_1_t6680 *, const MethodInfo*))Collection_1_get_Count_m40028_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::get_Item(System.Int32)
extern "C" double Collection_1_get_Item_m40029_gshared (Collection_1_t6680 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m40029(__this, ___index, method) (( double (*) (Collection_1_t6680 *, int32_t, const MethodInfo*))Collection_1_get_Item_m40029_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m40030_gshared (Collection_1_t6680 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define Collection_1_set_Item_m40030(__this, ___index, ___value, method) (( void (*) (Collection_1_t6680 *, int32_t, double, const MethodInfo*))Collection_1_set_Item_m40030_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m40031_gshared (Collection_1_t6680 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_SetItem_m40031(__this, ___index, ___item, method) (( void (*) (Collection_1_t6680 *, int32_t, double, const MethodInfo*))Collection_1_SetItem_m40031_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m40032_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m40032(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m40032_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::ConvertItem(System.Object)
extern "C" double Collection_1_ConvertItem_m40033_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m40033(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m40033_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m40034_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m40034(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m40034_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m40035_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m40035(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m40035_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m40036_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m40036(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m40036_gshared)(__this /* static, unused */, ___list, method)
