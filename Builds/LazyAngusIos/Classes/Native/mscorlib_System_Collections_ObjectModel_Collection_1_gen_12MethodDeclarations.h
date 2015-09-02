#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Double>
struct Collection_1_t6790;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Double[]
struct DoubleU5BU5D_t4890;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6396;
// System.Collections.Generic.IList`1<System.Double>
struct IList_1_t6393;

// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::.ctor()
extern "C" void Collection_1__ctor_m41154_gshared (Collection_1_t6790 * __this, const MethodInfo* method);
#define Collection_1__ctor_m41154(__this, method) (( void (*) (Collection_1_t6790 *, const MethodInfo*))Collection_1__ctor_m41154_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41155_gshared (Collection_1_t6790 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41155(__this, method) (( bool (*) (Collection_1_t6790 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41155_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m41156_gshared (Collection_1_t6790 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m41156(__this, ___array, ___index, method) (( void (*) (Collection_1_t6790 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m41156_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m41157_gshared (Collection_1_t6790 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m41157(__this, method) (( Object_t * (*) (Collection_1_t6790 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m41157_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m41158_gshared (Collection_1_t6790 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m41158(__this, ___value, method) (( int32_t (*) (Collection_1_t6790 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m41158_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m41159_gshared (Collection_1_t6790 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m41159(__this, ___value, method) (( bool (*) (Collection_1_t6790 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m41159_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m41160_gshared (Collection_1_t6790 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m41160(__this, ___value, method) (( int32_t (*) (Collection_1_t6790 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m41160_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m41161_gshared (Collection_1_t6790 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m41161(__this, ___index, ___value, method) (( void (*) (Collection_1_t6790 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m41161_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m41162_gshared (Collection_1_t6790 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m41162(__this, ___value, method) (( void (*) (Collection_1_t6790 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m41162_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m41163_gshared (Collection_1_t6790 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m41163(__this, method) (( bool (*) (Collection_1_t6790 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m41163_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m41164_gshared (Collection_1_t6790 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m41164(__this, method) (( Object_t * (*) (Collection_1_t6790 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m41164_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m41165_gshared (Collection_1_t6790 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m41165(__this, method) (( bool (*) (Collection_1_t6790 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m41165_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m41166_gshared (Collection_1_t6790 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m41166(__this, method) (( bool (*) (Collection_1_t6790 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m41166_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m41167_gshared (Collection_1_t6790 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m41167(__this, ___index, method) (( Object_t * (*) (Collection_1_t6790 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m41167_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m41168_gshared (Collection_1_t6790 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m41168(__this, ___index, ___value, method) (( void (*) (Collection_1_t6790 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m41168_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Add(T)
extern "C" void Collection_1_Add_m41169_gshared (Collection_1_t6790 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Add_m41169(__this, ___item, method) (( void (*) (Collection_1_t6790 *, double, const MethodInfo*))Collection_1_Add_m41169_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Clear()
extern "C" void Collection_1_Clear_m41170_gshared (Collection_1_t6790 * __this, const MethodInfo* method);
#define Collection_1_Clear_m41170(__this, method) (( void (*) (Collection_1_t6790 *, const MethodInfo*))Collection_1_Clear_m41170_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::ClearItems()
extern "C" void Collection_1_ClearItems_m41171_gshared (Collection_1_t6790 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m41171(__this, method) (( void (*) (Collection_1_t6790 *, const MethodInfo*))Collection_1_ClearItems_m41171_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Contains(T)
extern "C" bool Collection_1_Contains_m41172_gshared (Collection_1_t6790 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Contains_m41172(__this, ___item, method) (( bool (*) (Collection_1_t6790 *, double, const MethodInfo*))Collection_1_Contains_m41172_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m41173_gshared (Collection_1_t6790 * __this, DoubleU5BU5D_t4890* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m41173(__this, ___array, ___index, method) (( void (*) (Collection_1_t6790 *, DoubleU5BU5D_t4890*, int32_t, const MethodInfo*))Collection_1_CopyTo_m41173_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Double>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m41174_gshared (Collection_1_t6790 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m41174(__this, method) (( Object_t* (*) (Collection_1_t6790 *, const MethodInfo*))Collection_1_GetEnumerator_m41174_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m41175_gshared (Collection_1_t6790 * __this, double ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m41175(__this, ___item, method) (( int32_t (*) (Collection_1_t6790 *, double, const MethodInfo*))Collection_1_IndexOf_m41175_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m41176_gshared (Collection_1_t6790 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_Insert_m41176(__this, ___index, ___item, method) (( void (*) (Collection_1_t6790 *, int32_t, double, const MethodInfo*))Collection_1_Insert_m41176_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m41177_gshared (Collection_1_t6790 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m41177(__this, ___index, ___item, method) (( void (*) (Collection_1_t6790 *, int32_t, double, const MethodInfo*))Collection_1_InsertItem_m41177_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Remove(T)
extern "C" bool Collection_1_Remove_m41178_gshared (Collection_1_t6790 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Remove_m41178(__this, ___item, method) (( bool (*) (Collection_1_t6790 *, double, const MethodInfo*))Collection_1_Remove_m41178_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m41179_gshared (Collection_1_t6790 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m41179(__this, ___index, method) (( void (*) (Collection_1_t6790 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m41179_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m41180_gshared (Collection_1_t6790 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m41180(__this, ___index, method) (( void (*) (Collection_1_t6790 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m41180_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::get_Count()
extern "C" int32_t Collection_1_get_Count_m41181_gshared (Collection_1_t6790 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m41181(__this, method) (( int32_t (*) (Collection_1_t6790 *, const MethodInfo*))Collection_1_get_Count_m41181_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::get_Item(System.Int32)
extern "C" double Collection_1_get_Item_m41182_gshared (Collection_1_t6790 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m41182(__this, ___index, method) (( double (*) (Collection_1_t6790 *, int32_t, const MethodInfo*))Collection_1_get_Item_m41182_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m41183_gshared (Collection_1_t6790 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define Collection_1_set_Item_m41183(__this, ___index, ___value, method) (( void (*) (Collection_1_t6790 *, int32_t, double, const MethodInfo*))Collection_1_set_Item_m41183_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m41184_gshared (Collection_1_t6790 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_SetItem_m41184(__this, ___index, ___item, method) (( void (*) (Collection_1_t6790 *, int32_t, double, const MethodInfo*))Collection_1_SetItem_m41184_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m41185_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m41185(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m41185_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::ConvertItem(System.Object)
extern "C" double Collection_1_ConvertItem_m41186_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m41186(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m41186_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m41187_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m41187(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m41187_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m41188_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m41188(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m41188_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m41189_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m41189(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m41189_gshared)(__this /* static, unused */, ___list, method)
