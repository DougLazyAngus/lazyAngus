#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int64>
struct Collection_1_t7232;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4573;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6927;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t6924;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::.ctor()
extern "C" void Collection_1__ctor_m44069_gshared (Collection_1_t7232 * __this, const MethodInfo* method);
#define Collection_1__ctor_m44069(__this, method) (( void (*) (Collection_1_t7232 *, const MethodInfo*))Collection_1__ctor_m44069_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44070_gshared (Collection_1_t7232 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44070(__this, method) (( bool (*) (Collection_1_t7232 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44070_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m44071_gshared (Collection_1_t7232 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m44071(__this, ___array, ___index, method) (( void (*) (Collection_1_t7232 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m44071_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m44072_gshared (Collection_1_t7232 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m44072(__this, method) (( Object_t * (*) (Collection_1_t7232 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m44072_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m44073_gshared (Collection_1_t7232 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m44073(__this, ___value, method) (( int32_t (*) (Collection_1_t7232 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m44073_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m44074_gshared (Collection_1_t7232 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m44074(__this, ___value, method) (( bool (*) (Collection_1_t7232 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m44074_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m44075_gshared (Collection_1_t7232 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m44075(__this, ___value, method) (( int32_t (*) (Collection_1_t7232 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m44075_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m44076_gshared (Collection_1_t7232 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m44076(__this, ___index, ___value, method) (( void (*) (Collection_1_t7232 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m44076_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m44077_gshared (Collection_1_t7232 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m44077(__this, ___value, method) (( void (*) (Collection_1_t7232 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m44077_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m44078_gshared (Collection_1_t7232 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m44078(__this, method) (( bool (*) (Collection_1_t7232 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m44078_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m44079_gshared (Collection_1_t7232 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m44079(__this, method) (( Object_t * (*) (Collection_1_t7232 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m44079_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m44080_gshared (Collection_1_t7232 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m44080(__this, method) (( bool (*) (Collection_1_t7232 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m44080_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m44081_gshared (Collection_1_t7232 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m44081(__this, method) (( bool (*) (Collection_1_t7232 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m44081_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m44082_gshared (Collection_1_t7232 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m44082(__this, ___index, method) (( Object_t * (*) (Collection_1_t7232 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m44082_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m44083_gshared (Collection_1_t7232 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m44083(__this, ___index, ___value, method) (( void (*) (Collection_1_t7232 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m44083_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Add(T)
extern "C" void Collection_1_Add_m44084_gshared (Collection_1_t7232 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Add_m44084(__this, ___item, method) (( void (*) (Collection_1_t7232 *, int64_t, const MethodInfo*))Collection_1_Add_m44084_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Clear()
extern "C" void Collection_1_Clear_m44085_gshared (Collection_1_t7232 * __this, const MethodInfo* method);
#define Collection_1_Clear_m44085(__this, method) (( void (*) (Collection_1_t7232 *, const MethodInfo*))Collection_1_Clear_m44085_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::ClearItems()
extern "C" void Collection_1_ClearItems_m44086_gshared (Collection_1_t7232 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m44086(__this, method) (( void (*) (Collection_1_t7232 *, const MethodInfo*))Collection_1_ClearItems_m44086_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::Contains(T)
extern "C" bool Collection_1_Contains_m44087_gshared (Collection_1_t7232 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m44087(__this, ___item, method) (( bool (*) (Collection_1_t7232 *, int64_t, const MethodInfo*))Collection_1_Contains_m44087_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m44088_gshared (Collection_1_t7232 * __this, Int64U5BU5D_t4573* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m44088(__this, ___array, ___index, method) (( void (*) (Collection_1_t7232 *, Int64U5BU5D_t4573*, int32_t, const MethodInfo*))Collection_1_CopyTo_m44088_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int64>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m44089_gshared (Collection_1_t7232 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m44089(__this, method) (( Object_t* (*) (Collection_1_t7232 *, const MethodInfo*))Collection_1_GetEnumerator_m44089_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m44090_gshared (Collection_1_t7232 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m44090(__this, ___item, method) (( int32_t (*) (Collection_1_t7232 *, int64_t, const MethodInfo*))Collection_1_IndexOf_m44090_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m44091_gshared (Collection_1_t7232 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m44091(__this, ___index, ___item, method) (( void (*) (Collection_1_t7232 *, int32_t, int64_t, const MethodInfo*))Collection_1_Insert_m44091_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m44092_gshared (Collection_1_t7232 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m44092(__this, ___index, ___item, method) (( void (*) (Collection_1_t7232 *, int32_t, int64_t, const MethodInfo*))Collection_1_InsertItem_m44092_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::Remove(T)
extern "C" bool Collection_1_Remove_m44093_gshared (Collection_1_t7232 * __this, int64_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m44093(__this, ___item, method) (( bool (*) (Collection_1_t7232 *, int64_t, const MethodInfo*))Collection_1_Remove_m44093_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m44094_gshared (Collection_1_t7232 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m44094(__this, ___index, method) (( void (*) (Collection_1_t7232 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m44094_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m44095_gshared (Collection_1_t7232 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m44095(__this, ___index, method) (( void (*) (Collection_1_t7232 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m44095_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int64>::get_Count()
extern "C" int32_t Collection_1_get_Count_m44096_gshared (Collection_1_t7232 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m44096(__this, method) (( int32_t (*) (Collection_1_t7232 *, const MethodInfo*))Collection_1_get_Count_m44096_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t Collection_1_get_Item_m44097_gshared (Collection_1_t7232 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m44097(__this, ___index, method) (( int64_t (*) (Collection_1_t7232 *, int32_t, const MethodInfo*))Collection_1_get_Item_m44097_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m44098_gshared (Collection_1_t7232 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m44098(__this, ___index, ___value, method) (( void (*) (Collection_1_t7232 *, int32_t, int64_t, const MethodInfo*))Collection_1_set_Item_m44098_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m44099_gshared (Collection_1_t7232 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m44099(__this, ___index, ___item, method) (( void (*) (Collection_1_t7232 *, int32_t, int64_t, const MethodInfo*))Collection_1_SetItem_m44099_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m44100_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m44100(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m44100_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int64>::ConvertItem(System.Object)
extern "C" int64_t Collection_1_ConvertItem_m44101_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m44101(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m44101_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int64>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m44102_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m44102(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m44102_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m44103_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m44103(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m44103_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int64>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m44104_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m44104(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m44104_gshared)(__this /* static, unused */, ___list, method)
