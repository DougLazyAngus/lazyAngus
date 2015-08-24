#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Double>
struct Collection_1_t6761;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Double[]
struct DoubleU5BU5D_t4874;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6367;
// System.Collections.Generic.IList`1<System.Double>
struct IList_1_t6364;

// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::.ctor()
extern "C" void Collection_1__ctor_m40822_gshared (Collection_1_t6761 * __this, const MethodInfo* method);
#define Collection_1__ctor_m40822(__this, method) (( void (*) (Collection_1_t6761 *, const MethodInfo*))Collection_1__ctor_m40822_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40823_gshared (Collection_1_t6761 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40823(__this, method) (( bool (*) (Collection_1_t6761 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40823_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m40824_gshared (Collection_1_t6761 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m40824(__this, ___array, ___index, method) (( void (*) (Collection_1_t6761 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m40824_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m40825_gshared (Collection_1_t6761 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m40825(__this, method) (( Object_t * (*) (Collection_1_t6761 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m40825_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m40826_gshared (Collection_1_t6761 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m40826(__this, ___value, method) (( int32_t (*) (Collection_1_t6761 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m40826_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m40827_gshared (Collection_1_t6761 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m40827(__this, ___value, method) (( bool (*) (Collection_1_t6761 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m40827_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m40828_gshared (Collection_1_t6761 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m40828(__this, ___value, method) (( int32_t (*) (Collection_1_t6761 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m40828_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m40829_gshared (Collection_1_t6761 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m40829(__this, ___index, ___value, method) (( void (*) (Collection_1_t6761 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m40829_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m40830_gshared (Collection_1_t6761 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m40830(__this, ___value, method) (( void (*) (Collection_1_t6761 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m40830_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m40831_gshared (Collection_1_t6761 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m40831(__this, method) (( bool (*) (Collection_1_t6761 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m40831_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m40832_gshared (Collection_1_t6761 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m40832(__this, method) (( Object_t * (*) (Collection_1_t6761 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m40832_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m40833_gshared (Collection_1_t6761 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m40833(__this, method) (( bool (*) (Collection_1_t6761 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m40833_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m40834_gshared (Collection_1_t6761 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m40834(__this, method) (( bool (*) (Collection_1_t6761 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m40834_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m40835_gshared (Collection_1_t6761 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m40835(__this, ___index, method) (( Object_t * (*) (Collection_1_t6761 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m40835_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m40836_gshared (Collection_1_t6761 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m40836(__this, ___index, ___value, method) (( void (*) (Collection_1_t6761 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m40836_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Add(T)
extern "C" void Collection_1_Add_m40837_gshared (Collection_1_t6761 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Add_m40837(__this, ___item, method) (( void (*) (Collection_1_t6761 *, double, const MethodInfo*))Collection_1_Add_m40837_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Clear()
extern "C" void Collection_1_Clear_m40838_gshared (Collection_1_t6761 * __this, const MethodInfo* method);
#define Collection_1_Clear_m40838(__this, method) (( void (*) (Collection_1_t6761 *, const MethodInfo*))Collection_1_Clear_m40838_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::ClearItems()
extern "C" void Collection_1_ClearItems_m40839_gshared (Collection_1_t6761 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m40839(__this, method) (( void (*) (Collection_1_t6761 *, const MethodInfo*))Collection_1_ClearItems_m40839_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Contains(T)
extern "C" bool Collection_1_Contains_m40840_gshared (Collection_1_t6761 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Contains_m40840(__this, ___item, method) (( bool (*) (Collection_1_t6761 *, double, const MethodInfo*))Collection_1_Contains_m40840_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m40841_gshared (Collection_1_t6761 * __this, DoubleU5BU5D_t4874* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m40841(__this, ___array, ___index, method) (( void (*) (Collection_1_t6761 *, DoubleU5BU5D_t4874*, int32_t, const MethodInfo*))Collection_1_CopyTo_m40841_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Double>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m40842_gshared (Collection_1_t6761 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m40842(__this, method) (( Object_t* (*) (Collection_1_t6761 *, const MethodInfo*))Collection_1_GetEnumerator_m40842_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m40843_gshared (Collection_1_t6761 * __this, double ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m40843(__this, ___item, method) (( int32_t (*) (Collection_1_t6761 *, double, const MethodInfo*))Collection_1_IndexOf_m40843_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m40844_gshared (Collection_1_t6761 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_Insert_m40844(__this, ___index, ___item, method) (( void (*) (Collection_1_t6761 *, int32_t, double, const MethodInfo*))Collection_1_Insert_m40844_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m40845_gshared (Collection_1_t6761 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m40845(__this, ___index, ___item, method) (( void (*) (Collection_1_t6761 *, int32_t, double, const MethodInfo*))Collection_1_InsertItem_m40845_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Remove(T)
extern "C" bool Collection_1_Remove_m40846_gshared (Collection_1_t6761 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Remove_m40846(__this, ___item, method) (( bool (*) (Collection_1_t6761 *, double, const MethodInfo*))Collection_1_Remove_m40846_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m40847_gshared (Collection_1_t6761 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m40847(__this, ___index, method) (( void (*) (Collection_1_t6761 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m40847_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m40848_gshared (Collection_1_t6761 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m40848(__this, ___index, method) (( void (*) (Collection_1_t6761 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m40848_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::get_Count()
extern "C" int32_t Collection_1_get_Count_m40849_gshared (Collection_1_t6761 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m40849(__this, method) (( int32_t (*) (Collection_1_t6761 *, const MethodInfo*))Collection_1_get_Count_m40849_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::get_Item(System.Int32)
extern "C" double Collection_1_get_Item_m40850_gshared (Collection_1_t6761 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m40850(__this, ___index, method) (( double (*) (Collection_1_t6761 *, int32_t, const MethodInfo*))Collection_1_get_Item_m40850_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m40851_gshared (Collection_1_t6761 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define Collection_1_set_Item_m40851(__this, ___index, ___value, method) (( void (*) (Collection_1_t6761 *, int32_t, double, const MethodInfo*))Collection_1_set_Item_m40851_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m40852_gshared (Collection_1_t6761 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_SetItem_m40852(__this, ___index, ___item, method) (( void (*) (Collection_1_t6761 *, int32_t, double, const MethodInfo*))Collection_1_SetItem_m40852_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m40853_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m40853(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m40853_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::ConvertItem(System.Object)
extern "C" double Collection_1_ConvertItem_m40854_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m40854(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m40854_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m40855_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m40855(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m40855_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m40856_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m40856(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m40856_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m40857_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m40857(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m40857_gshared)(__this /* static, unused */, ___list, method)
