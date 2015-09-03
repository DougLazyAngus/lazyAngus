#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Collection_1_t8132;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8127;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7797;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IList_1_t8130;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void Collection_1__ctor_m55160_gshared (Collection_1_t8132 * __this, const MethodInfo* method);
#define Collection_1__ctor_m55160(__this, method) (( void (*) (Collection_1_t8132 *, const MethodInfo*))Collection_1__ctor_m55160_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55161_gshared (Collection_1_t8132 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55161(__this, method) (( bool (*) (Collection_1_t8132 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55161_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m55162_gshared (Collection_1_t8132 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m55162(__this, ___array, ___index, method) (( void (*) (Collection_1_t8132 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m55162_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m55163_gshared (Collection_1_t8132 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m55163(__this, method) (( Object_t * (*) (Collection_1_t8132 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m55163_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m55164_gshared (Collection_1_t8132 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m55164(__this, ___value, method) (( int32_t (*) (Collection_1_t8132 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m55164_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m55165_gshared (Collection_1_t8132 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m55165(__this, ___value, method) (( bool (*) (Collection_1_t8132 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m55165_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m55166_gshared (Collection_1_t8132 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m55166(__this, ___value, method) (( int32_t (*) (Collection_1_t8132 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m55166_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m55167_gshared (Collection_1_t8132 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m55167(__this, ___index, ___value, method) (( void (*) (Collection_1_t8132 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m55167_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m55168_gshared (Collection_1_t8132 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m55168(__this, ___value, method) (( void (*) (Collection_1_t8132 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m55168_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m55169_gshared (Collection_1_t8132 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m55169(__this, method) (( bool (*) (Collection_1_t8132 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m55169_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m55170_gshared (Collection_1_t8132 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m55170(__this, method) (( Object_t * (*) (Collection_1_t8132 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m55170_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m55171_gshared (Collection_1_t8132 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m55171(__this, method) (( bool (*) (Collection_1_t8132 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m55171_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m55172_gshared (Collection_1_t8132 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m55172(__this, method) (( bool (*) (Collection_1_t8132 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m55172_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m55173_gshared (Collection_1_t8132 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m55173(__this, ___index, method) (( Object_t * (*) (Collection_1_t8132 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m55173_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m55174_gshared (Collection_1_t8132 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m55174(__this, ___index, ___value, method) (( void (*) (Collection_1_t8132 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m55174_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
extern "C" void Collection_1_Add_m55175_gshared (Collection_1_t8132 * __this, KeyValuePair_2_t6082  ___item, const MethodInfo* method);
#define Collection_1_Add_m55175(__this, ___item, method) (( void (*) (Collection_1_t8132 *, KeyValuePair_2_t6082 , const MethodInfo*))Collection_1_Add_m55175_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
extern "C" void Collection_1_Clear_m55176_gshared (Collection_1_t8132 * __this, const MethodInfo* method);
#define Collection_1_Clear_m55176(__this, method) (( void (*) (Collection_1_t8132 *, const MethodInfo*))Collection_1_Clear_m55176_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::ClearItems()
extern "C" void Collection_1_ClearItems_m55177_gshared (Collection_1_t8132 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m55177(__this, method) (( void (*) (Collection_1_t8132 *, const MethodInfo*))Collection_1_ClearItems_m55177_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
extern "C" bool Collection_1_Contains_m55178_gshared (Collection_1_t8132 * __this, KeyValuePair_2_t6082  ___item, const MethodInfo* method);
#define Collection_1_Contains_m55178(__this, ___item, method) (( bool (*) (Collection_1_t8132 *, KeyValuePair_2_t6082 , const MethodInfo*))Collection_1_Contains_m55178_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m55179_gshared (Collection_1_t8132 * __this, KeyValuePair_2U5BU5D_t8127* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m55179(__this, ___array, ___index, method) (( void (*) (Collection_1_t8132 *, KeyValuePair_2U5BU5D_t8127*, int32_t, const MethodInfo*))Collection_1_CopyTo_m55179_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m55180_gshared (Collection_1_t8132 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m55180(__this, method) (( Object_t* (*) (Collection_1_t8132 *, const MethodInfo*))Collection_1_GetEnumerator_m55180_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m55181_gshared (Collection_1_t8132 * __this, KeyValuePair_2_t6082  ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m55181(__this, ___item, method) (( int32_t (*) (Collection_1_t8132 *, KeyValuePair_2_t6082 , const MethodInfo*))Collection_1_IndexOf_m55181_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m55182_gshared (Collection_1_t8132 * __this, int32_t ___index, KeyValuePair_2_t6082  ___item, const MethodInfo* method);
#define Collection_1_Insert_m55182(__this, ___index, ___item, method) (( void (*) (Collection_1_t8132 *, int32_t, KeyValuePair_2_t6082 , const MethodInfo*))Collection_1_Insert_m55182_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m55183_gshared (Collection_1_t8132 * __this, int32_t ___index, KeyValuePair_2_t6082  ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m55183(__this, ___index, ___item, method) (( void (*) (Collection_1_t8132 *, int32_t, KeyValuePair_2_t6082 , const MethodInfo*))Collection_1_InsertItem_m55183_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
extern "C" bool Collection_1_Remove_m55184_gshared (Collection_1_t8132 * __this, KeyValuePair_2_t6082  ___item, const MethodInfo* method);
#define Collection_1_Remove_m55184(__this, ___item, method) (( bool (*) (Collection_1_t8132 *, KeyValuePair_2_t6082 , const MethodInfo*))Collection_1_Remove_m55184_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m55185_gshared (Collection_1_t8132 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m55185(__this, ___index, method) (( void (*) (Collection_1_t8132 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m55185_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m55186_gshared (Collection_1_t8132 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m55186(__this, ___index, method) (( void (*) (Collection_1_t8132 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m55186_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
extern "C" int32_t Collection_1_get_Count_m55187_gshared (Collection_1_t8132 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m55187(__this, method) (( int32_t (*) (Collection_1_t8132 *, const MethodInfo*))Collection_1_get_Count_m55187_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6082  Collection_1_get_Item_m55188_gshared (Collection_1_t8132 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m55188(__this, ___index, method) (( KeyValuePair_2_t6082  (*) (Collection_1_t8132 *, int32_t, const MethodInfo*))Collection_1_get_Item_m55188_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m55189_gshared (Collection_1_t8132 * __this, int32_t ___index, KeyValuePair_2_t6082  ___value, const MethodInfo* method);
#define Collection_1_set_Item_m55189(__this, ___index, ___value, method) (( void (*) (Collection_1_t8132 *, int32_t, KeyValuePair_2_t6082 , const MethodInfo*))Collection_1_set_Item_m55189_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m55190_gshared (Collection_1_t8132 * __this, int32_t ___index, KeyValuePair_2_t6082  ___item, const MethodInfo* method);
#define Collection_1_SetItem_m55190(__this, ___index, ___item, method) (( void (*) (Collection_1_t8132 *, int32_t, KeyValuePair_2_t6082 , const MethodInfo*))Collection_1_SetItem_m55190_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m55191_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m55191(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m55191_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::ConvertItem(System.Object)
extern "C" KeyValuePair_2_t6082  Collection_1_ConvertItem_m55192_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m55192(__this /* static, unused */, ___item, method) (( KeyValuePair_2_t6082  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m55192_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m55193_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m55193(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m55193_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m55194_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m55194(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m55194_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m55195_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m55195(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m55195_gshared)(__this /* static, unused */, ___list, method)
