#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Double>
struct Collection_1_t7324;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Double[]
struct DoubleU5BU5D_t5417;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6930;
// System.Collections.Generic.IList`1<System.Double>
struct IList_1_t6927;

// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::.ctor()
extern "C" void Collection_1__ctor_m45415_gshared (Collection_1_t7324 * __this, const MethodInfo* method);
#define Collection_1__ctor_m45415(__this, method) (( void (*) (Collection_1_t7324 *, const MethodInfo*))Collection_1__ctor_m45415_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45416_gshared (Collection_1_t7324 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45416(__this, method) (( bool (*) (Collection_1_t7324 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45416_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m45417_gshared (Collection_1_t7324 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m45417(__this, ___array, ___index, method) (( void (*) (Collection_1_t7324 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m45417_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m45418_gshared (Collection_1_t7324 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m45418(__this, method) (( Object_t * (*) (Collection_1_t7324 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m45418_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m45419_gshared (Collection_1_t7324 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m45419(__this, ___value, method) (( int32_t (*) (Collection_1_t7324 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m45419_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m45420_gshared (Collection_1_t7324 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m45420(__this, ___value, method) (( bool (*) (Collection_1_t7324 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m45420_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m45421_gshared (Collection_1_t7324 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m45421(__this, ___value, method) (( int32_t (*) (Collection_1_t7324 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m45421_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m45422_gshared (Collection_1_t7324 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m45422(__this, ___index, ___value, method) (( void (*) (Collection_1_t7324 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m45422_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m45423_gshared (Collection_1_t7324 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m45423(__this, ___value, method) (( void (*) (Collection_1_t7324 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m45423_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m45424_gshared (Collection_1_t7324 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m45424(__this, method) (( bool (*) (Collection_1_t7324 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m45424_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m45425_gshared (Collection_1_t7324 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m45425(__this, method) (( Object_t * (*) (Collection_1_t7324 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m45425_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m45426_gshared (Collection_1_t7324 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m45426(__this, method) (( bool (*) (Collection_1_t7324 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m45426_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m45427_gshared (Collection_1_t7324 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m45427(__this, method) (( bool (*) (Collection_1_t7324 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m45427_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m45428_gshared (Collection_1_t7324 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m45428(__this, ___index, method) (( Object_t * (*) (Collection_1_t7324 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m45428_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m45429_gshared (Collection_1_t7324 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m45429(__this, ___index, ___value, method) (( void (*) (Collection_1_t7324 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m45429_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Add(T)
extern "C" void Collection_1_Add_m45430_gshared (Collection_1_t7324 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Add_m45430(__this, ___item, method) (( void (*) (Collection_1_t7324 *, double, const MethodInfo*))Collection_1_Add_m45430_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Clear()
extern "C" void Collection_1_Clear_m45431_gshared (Collection_1_t7324 * __this, const MethodInfo* method);
#define Collection_1_Clear_m45431(__this, method) (( void (*) (Collection_1_t7324 *, const MethodInfo*))Collection_1_Clear_m45431_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::ClearItems()
extern "C" void Collection_1_ClearItems_m45432_gshared (Collection_1_t7324 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m45432(__this, method) (( void (*) (Collection_1_t7324 *, const MethodInfo*))Collection_1_ClearItems_m45432_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Contains(T)
extern "C" bool Collection_1_Contains_m45433_gshared (Collection_1_t7324 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Contains_m45433(__this, ___item, method) (( bool (*) (Collection_1_t7324 *, double, const MethodInfo*))Collection_1_Contains_m45433_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m45434_gshared (Collection_1_t7324 * __this, DoubleU5BU5D_t5417* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m45434(__this, ___array, ___index, method) (( void (*) (Collection_1_t7324 *, DoubleU5BU5D_t5417*, int32_t, const MethodInfo*))Collection_1_CopyTo_m45434_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Double>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m45435_gshared (Collection_1_t7324 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m45435(__this, method) (( Object_t* (*) (Collection_1_t7324 *, const MethodInfo*))Collection_1_GetEnumerator_m45435_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m45436_gshared (Collection_1_t7324 * __this, double ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m45436(__this, ___item, method) (( int32_t (*) (Collection_1_t7324 *, double, const MethodInfo*))Collection_1_IndexOf_m45436_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m45437_gshared (Collection_1_t7324 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_Insert_m45437(__this, ___index, ___item, method) (( void (*) (Collection_1_t7324 *, int32_t, double, const MethodInfo*))Collection_1_Insert_m45437_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m45438_gshared (Collection_1_t7324 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m45438(__this, ___index, ___item, method) (( void (*) (Collection_1_t7324 *, int32_t, double, const MethodInfo*))Collection_1_InsertItem_m45438_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Remove(T)
extern "C" bool Collection_1_Remove_m45439_gshared (Collection_1_t7324 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Remove_m45439(__this, ___item, method) (( bool (*) (Collection_1_t7324 *, double, const MethodInfo*))Collection_1_Remove_m45439_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m45440_gshared (Collection_1_t7324 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m45440(__this, ___index, method) (( void (*) (Collection_1_t7324 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m45440_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m45441_gshared (Collection_1_t7324 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m45441(__this, ___index, method) (( void (*) (Collection_1_t7324 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m45441_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::get_Count()
extern "C" int32_t Collection_1_get_Count_m45442_gshared (Collection_1_t7324 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m45442(__this, method) (( int32_t (*) (Collection_1_t7324 *, const MethodInfo*))Collection_1_get_Count_m45442_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::get_Item(System.Int32)
extern "C" double Collection_1_get_Item_m45443_gshared (Collection_1_t7324 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m45443(__this, ___index, method) (( double (*) (Collection_1_t7324 *, int32_t, const MethodInfo*))Collection_1_get_Item_m45443_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m45444_gshared (Collection_1_t7324 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define Collection_1_set_Item_m45444(__this, ___index, ___value, method) (( void (*) (Collection_1_t7324 *, int32_t, double, const MethodInfo*))Collection_1_set_Item_m45444_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m45445_gshared (Collection_1_t7324 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_SetItem_m45445(__this, ___index, ___item, method) (( void (*) (Collection_1_t7324 *, int32_t, double, const MethodInfo*))Collection_1_SetItem_m45445_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m45446_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m45446(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m45446_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::ConvertItem(System.Object)
extern "C" double Collection_1_ConvertItem_m45447_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m45447(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m45447_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m45448_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m45448(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m45448_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m45449_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m45449(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m45449_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m45450_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m45450(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m45450_gshared)(__this /* static, unused */, ___list, method)
