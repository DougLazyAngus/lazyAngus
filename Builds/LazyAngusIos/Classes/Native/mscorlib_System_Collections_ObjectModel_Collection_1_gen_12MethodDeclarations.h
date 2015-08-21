#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Double>
struct Collection_1_t6758;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Double[]
struct DoubleU5BU5D_t4871;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6364;
// System.Collections.Generic.IList`1<System.Double>
struct IList_1_t6361;

// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::.ctor()
extern "C" void Collection_1__ctor_m40790_gshared (Collection_1_t6758 * __this, const MethodInfo* method);
#define Collection_1__ctor_m40790(__this, method) (( void (*) (Collection_1_t6758 *, const MethodInfo*))Collection_1__ctor_m40790_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40791_gshared (Collection_1_t6758 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40791(__this, method) (( bool (*) (Collection_1_t6758 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40791_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m40792_gshared (Collection_1_t6758 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m40792(__this, ___array, ___index, method) (( void (*) (Collection_1_t6758 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m40792_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m40793_gshared (Collection_1_t6758 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m40793(__this, method) (( Object_t * (*) (Collection_1_t6758 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m40793_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m40794_gshared (Collection_1_t6758 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m40794(__this, ___value, method) (( int32_t (*) (Collection_1_t6758 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m40794_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m40795_gshared (Collection_1_t6758 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m40795(__this, ___value, method) (( bool (*) (Collection_1_t6758 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m40795_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m40796_gshared (Collection_1_t6758 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m40796(__this, ___value, method) (( int32_t (*) (Collection_1_t6758 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m40796_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m40797_gshared (Collection_1_t6758 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m40797(__this, ___index, ___value, method) (( void (*) (Collection_1_t6758 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m40797_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m40798_gshared (Collection_1_t6758 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m40798(__this, ___value, method) (( void (*) (Collection_1_t6758 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m40798_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m40799_gshared (Collection_1_t6758 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m40799(__this, method) (( bool (*) (Collection_1_t6758 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m40799_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m40800_gshared (Collection_1_t6758 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m40800(__this, method) (( Object_t * (*) (Collection_1_t6758 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m40800_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m40801_gshared (Collection_1_t6758 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m40801(__this, method) (( bool (*) (Collection_1_t6758 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m40801_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m40802_gshared (Collection_1_t6758 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m40802(__this, method) (( bool (*) (Collection_1_t6758 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m40802_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m40803_gshared (Collection_1_t6758 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m40803(__this, ___index, method) (( Object_t * (*) (Collection_1_t6758 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m40803_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m40804_gshared (Collection_1_t6758 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m40804(__this, ___index, ___value, method) (( void (*) (Collection_1_t6758 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m40804_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Add(T)
extern "C" void Collection_1_Add_m40805_gshared (Collection_1_t6758 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Add_m40805(__this, ___item, method) (( void (*) (Collection_1_t6758 *, double, const MethodInfo*))Collection_1_Add_m40805_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Clear()
extern "C" void Collection_1_Clear_m40806_gshared (Collection_1_t6758 * __this, const MethodInfo* method);
#define Collection_1_Clear_m40806(__this, method) (( void (*) (Collection_1_t6758 *, const MethodInfo*))Collection_1_Clear_m40806_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::ClearItems()
extern "C" void Collection_1_ClearItems_m40807_gshared (Collection_1_t6758 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m40807(__this, method) (( void (*) (Collection_1_t6758 *, const MethodInfo*))Collection_1_ClearItems_m40807_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Contains(T)
extern "C" bool Collection_1_Contains_m40808_gshared (Collection_1_t6758 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Contains_m40808(__this, ___item, method) (( bool (*) (Collection_1_t6758 *, double, const MethodInfo*))Collection_1_Contains_m40808_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m40809_gshared (Collection_1_t6758 * __this, DoubleU5BU5D_t4871* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m40809(__this, ___array, ___index, method) (( void (*) (Collection_1_t6758 *, DoubleU5BU5D_t4871*, int32_t, const MethodInfo*))Collection_1_CopyTo_m40809_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Double>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m40810_gshared (Collection_1_t6758 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m40810(__this, method) (( Object_t* (*) (Collection_1_t6758 *, const MethodInfo*))Collection_1_GetEnumerator_m40810_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m40811_gshared (Collection_1_t6758 * __this, double ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m40811(__this, ___item, method) (( int32_t (*) (Collection_1_t6758 *, double, const MethodInfo*))Collection_1_IndexOf_m40811_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m40812_gshared (Collection_1_t6758 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_Insert_m40812(__this, ___index, ___item, method) (( void (*) (Collection_1_t6758 *, int32_t, double, const MethodInfo*))Collection_1_Insert_m40812_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m40813_gshared (Collection_1_t6758 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m40813(__this, ___index, ___item, method) (( void (*) (Collection_1_t6758 *, int32_t, double, const MethodInfo*))Collection_1_InsertItem_m40813_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Remove(T)
extern "C" bool Collection_1_Remove_m40814_gshared (Collection_1_t6758 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Remove_m40814(__this, ___item, method) (( bool (*) (Collection_1_t6758 *, double, const MethodInfo*))Collection_1_Remove_m40814_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m40815_gshared (Collection_1_t6758 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m40815(__this, ___index, method) (( void (*) (Collection_1_t6758 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m40815_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m40816_gshared (Collection_1_t6758 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m40816(__this, ___index, method) (( void (*) (Collection_1_t6758 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m40816_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::get_Count()
extern "C" int32_t Collection_1_get_Count_m40817_gshared (Collection_1_t6758 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m40817(__this, method) (( int32_t (*) (Collection_1_t6758 *, const MethodInfo*))Collection_1_get_Count_m40817_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::get_Item(System.Int32)
extern "C" double Collection_1_get_Item_m40818_gshared (Collection_1_t6758 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m40818(__this, ___index, method) (( double (*) (Collection_1_t6758 *, int32_t, const MethodInfo*))Collection_1_get_Item_m40818_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m40819_gshared (Collection_1_t6758 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define Collection_1_set_Item_m40819(__this, ___index, ___value, method) (( void (*) (Collection_1_t6758 *, int32_t, double, const MethodInfo*))Collection_1_set_Item_m40819_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m40820_gshared (Collection_1_t6758 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_SetItem_m40820(__this, ___index, ___item, method) (( void (*) (Collection_1_t6758 *, int32_t, double, const MethodInfo*))Collection_1_SetItem_m40820_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m40821_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m40821(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m40821_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::ConvertItem(System.Object)
extern "C" double Collection_1_ConvertItem_m40822_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m40822(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m40822_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m40823_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m40823(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m40823_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m40824_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m40824(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m40824_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m40825_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m40825(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m40825_gshared)(__this /* static, unused */, ___list, method)
