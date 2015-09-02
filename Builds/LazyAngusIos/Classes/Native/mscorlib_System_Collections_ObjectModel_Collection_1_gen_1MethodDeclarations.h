#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Single>
struct Collection_1_t5747;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Single[]
struct SingleU5BU5D_t587;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6401;
// System.Collections.Generic.IList`1<System.Single>
struct IList_1_t5745;

// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::.ctor()
extern "C" void Collection_1__ctor_m27396_gshared (Collection_1_t5747 * __this, const MethodInfo* method);
#define Collection_1__ctor_m27396(__this, method) (( void (*) (Collection_1_t5747 *, const MethodInfo*))Collection_1__ctor_m27396_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27397_gshared (Collection_1_t5747 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27397(__this, method) (( bool (*) (Collection_1_t5747 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27397_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m27398_gshared (Collection_1_t5747 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m27398(__this, ___array, ___index, method) (( void (*) (Collection_1_t5747 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m27398_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m27399_gshared (Collection_1_t5747 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m27399(__this, method) (( Object_t * (*) (Collection_1_t5747 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m27399_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m27400_gshared (Collection_1_t5747 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m27400(__this, ___value, method) (( int32_t (*) (Collection_1_t5747 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m27400_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m27401_gshared (Collection_1_t5747 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m27401(__this, ___value, method) (( bool (*) (Collection_1_t5747 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m27401_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m27402_gshared (Collection_1_t5747 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m27402(__this, ___value, method) (( int32_t (*) (Collection_1_t5747 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m27402_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m27403_gshared (Collection_1_t5747 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m27403(__this, ___index, ___value, method) (( void (*) (Collection_1_t5747 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m27403_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m27404_gshared (Collection_1_t5747 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m27404(__this, ___value, method) (( void (*) (Collection_1_t5747 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m27404_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m27405_gshared (Collection_1_t5747 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m27405(__this, method) (( bool (*) (Collection_1_t5747 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m27405_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m27406_gshared (Collection_1_t5747 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m27406(__this, method) (( Object_t * (*) (Collection_1_t5747 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m27406_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m27407_gshared (Collection_1_t5747 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m27407(__this, method) (( bool (*) (Collection_1_t5747 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m27407_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m27408_gshared (Collection_1_t5747 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m27408(__this, method) (( bool (*) (Collection_1_t5747 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m27408_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m27409_gshared (Collection_1_t5747 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m27409(__this, ___index, method) (( Object_t * (*) (Collection_1_t5747 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m27409_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m27410_gshared (Collection_1_t5747 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m27410(__this, ___index, ___value, method) (( void (*) (Collection_1_t5747 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m27410_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Add(T)
extern "C" void Collection_1_Add_m27411_gshared (Collection_1_t5747 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Add_m27411(__this, ___item, method) (( void (*) (Collection_1_t5747 *, float, const MethodInfo*))Collection_1_Add_m27411_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Clear()
extern "C" void Collection_1_Clear_m27412_gshared (Collection_1_t5747 * __this, const MethodInfo* method);
#define Collection_1_Clear_m27412(__this, method) (( void (*) (Collection_1_t5747 *, const MethodInfo*))Collection_1_Clear_m27412_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::ClearItems()
extern "C" void Collection_1_ClearItems_m27413_gshared (Collection_1_t5747 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m27413(__this, method) (( void (*) (Collection_1_t5747 *, const MethodInfo*))Collection_1_ClearItems_m27413_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Contains(T)
extern "C" bool Collection_1_Contains_m27414_gshared (Collection_1_t5747 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Contains_m27414(__this, ___item, method) (( bool (*) (Collection_1_t5747 *, float, const MethodInfo*))Collection_1_Contains_m27414_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m27415_gshared (Collection_1_t5747 * __this, SingleU5BU5D_t587* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m27415(__this, ___array, ___index, method) (( void (*) (Collection_1_t5747 *, SingleU5BU5D_t587*, int32_t, const MethodInfo*))Collection_1_CopyTo_m27415_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Single>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m27416_gshared (Collection_1_t5747 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m27416(__this, method) (( Object_t* (*) (Collection_1_t5747 *, const MethodInfo*))Collection_1_GetEnumerator_m27416_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m27417_gshared (Collection_1_t5747 * __this, float ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m27417(__this, ___item, method) (( int32_t (*) (Collection_1_t5747 *, float, const MethodInfo*))Collection_1_IndexOf_m27417_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m27418_gshared (Collection_1_t5747 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_Insert_m27418(__this, ___index, ___item, method) (( void (*) (Collection_1_t5747 *, int32_t, float, const MethodInfo*))Collection_1_Insert_m27418_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m27419_gshared (Collection_1_t5747 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m27419(__this, ___index, ___item, method) (( void (*) (Collection_1_t5747 *, int32_t, float, const MethodInfo*))Collection_1_InsertItem_m27419_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Remove(T)
extern "C" bool Collection_1_Remove_m27420_gshared (Collection_1_t5747 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Remove_m27420(__this, ___item, method) (( bool (*) (Collection_1_t5747 *, float, const MethodInfo*))Collection_1_Remove_m27420_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m27421_gshared (Collection_1_t5747 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m27421(__this, ___index, method) (( void (*) (Collection_1_t5747 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m27421_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m27422_gshared (Collection_1_t5747 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m27422(__this, ___index, method) (( void (*) (Collection_1_t5747 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m27422_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::get_Count()
extern "C" int32_t Collection_1_get_Count_m27423_gshared (Collection_1_t5747 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m27423(__this, method) (( int32_t (*) (Collection_1_t5747 *, const MethodInfo*))Collection_1_get_Count_m27423_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::get_Item(System.Int32)
extern "C" float Collection_1_get_Item_m27424_gshared (Collection_1_t5747 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m27424(__this, ___index, method) (( float (*) (Collection_1_t5747 *, int32_t, const MethodInfo*))Collection_1_get_Item_m27424_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m27425_gshared (Collection_1_t5747 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define Collection_1_set_Item_m27425(__this, ___index, ___value, method) (( void (*) (Collection_1_t5747 *, int32_t, float, const MethodInfo*))Collection_1_set_Item_m27425_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m27426_gshared (Collection_1_t5747 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_SetItem_m27426(__this, ___index, ___item, method) (( void (*) (Collection_1_t5747 *, int32_t, float, const MethodInfo*))Collection_1_SetItem_m27426_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m27427_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m27427(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m27427_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::ConvertItem(System.Object)
extern "C" float Collection_1_ConvertItem_m27428_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m27428(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m27428_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m27429_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m27429(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m27429_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m27430_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m27430(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m27430_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m27431_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m27431(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m27431_gshared)(__this /* static, unused */, ___list, method)
