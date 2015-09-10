#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Double>
struct Collection_1_t7336;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Double[]
struct DoubleU5BU5D_t5427;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6942;
// System.Collections.Generic.IList`1<System.Double>
struct IList_1_t6939;

// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::.ctor()
extern "C" void Collection_1__ctor_m45484_gshared (Collection_1_t7336 * __this, const MethodInfo* method);
#define Collection_1__ctor_m45484(__this, method) (( void (*) (Collection_1_t7336 *, const MethodInfo*))Collection_1__ctor_m45484_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45485_gshared (Collection_1_t7336 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45485(__this, method) (( bool (*) (Collection_1_t7336 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45485_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m45486_gshared (Collection_1_t7336 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m45486(__this, ___array, ___index, method) (( void (*) (Collection_1_t7336 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m45486_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m45487_gshared (Collection_1_t7336 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m45487(__this, method) (( Object_t * (*) (Collection_1_t7336 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m45487_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m45488_gshared (Collection_1_t7336 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m45488(__this, ___value, method) (( int32_t (*) (Collection_1_t7336 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m45488_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m45489_gshared (Collection_1_t7336 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m45489(__this, ___value, method) (( bool (*) (Collection_1_t7336 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m45489_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m45490_gshared (Collection_1_t7336 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m45490(__this, ___value, method) (( int32_t (*) (Collection_1_t7336 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m45490_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m45491_gshared (Collection_1_t7336 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m45491(__this, ___index, ___value, method) (( void (*) (Collection_1_t7336 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m45491_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m45492_gshared (Collection_1_t7336 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m45492(__this, ___value, method) (( void (*) (Collection_1_t7336 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m45492_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m45493_gshared (Collection_1_t7336 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m45493(__this, method) (( bool (*) (Collection_1_t7336 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m45493_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m45494_gshared (Collection_1_t7336 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m45494(__this, method) (( Object_t * (*) (Collection_1_t7336 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m45494_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m45495_gshared (Collection_1_t7336 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m45495(__this, method) (( bool (*) (Collection_1_t7336 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m45495_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m45496_gshared (Collection_1_t7336 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m45496(__this, method) (( bool (*) (Collection_1_t7336 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m45496_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m45497_gshared (Collection_1_t7336 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m45497(__this, ___index, method) (( Object_t * (*) (Collection_1_t7336 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m45497_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m45498_gshared (Collection_1_t7336 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m45498(__this, ___index, ___value, method) (( void (*) (Collection_1_t7336 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m45498_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Add(T)
extern "C" void Collection_1_Add_m45499_gshared (Collection_1_t7336 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Add_m45499(__this, ___item, method) (( void (*) (Collection_1_t7336 *, double, const MethodInfo*))Collection_1_Add_m45499_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Clear()
extern "C" void Collection_1_Clear_m45500_gshared (Collection_1_t7336 * __this, const MethodInfo* method);
#define Collection_1_Clear_m45500(__this, method) (( void (*) (Collection_1_t7336 *, const MethodInfo*))Collection_1_Clear_m45500_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::ClearItems()
extern "C" void Collection_1_ClearItems_m45501_gshared (Collection_1_t7336 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m45501(__this, method) (( void (*) (Collection_1_t7336 *, const MethodInfo*))Collection_1_ClearItems_m45501_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Contains(T)
extern "C" bool Collection_1_Contains_m45502_gshared (Collection_1_t7336 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Contains_m45502(__this, ___item, method) (( bool (*) (Collection_1_t7336 *, double, const MethodInfo*))Collection_1_Contains_m45502_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m45503_gshared (Collection_1_t7336 * __this, DoubleU5BU5D_t5427* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m45503(__this, ___array, ___index, method) (( void (*) (Collection_1_t7336 *, DoubleU5BU5D_t5427*, int32_t, const MethodInfo*))Collection_1_CopyTo_m45503_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Double>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m45504_gshared (Collection_1_t7336 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m45504(__this, method) (( Object_t* (*) (Collection_1_t7336 *, const MethodInfo*))Collection_1_GetEnumerator_m45504_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m45505_gshared (Collection_1_t7336 * __this, double ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m45505(__this, ___item, method) (( int32_t (*) (Collection_1_t7336 *, double, const MethodInfo*))Collection_1_IndexOf_m45505_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m45506_gshared (Collection_1_t7336 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_Insert_m45506(__this, ___index, ___item, method) (( void (*) (Collection_1_t7336 *, int32_t, double, const MethodInfo*))Collection_1_Insert_m45506_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m45507_gshared (Collection_1_t7336 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m45507(__this, ___index, ___item, method) (( void (*) (Collection_1_t7336 *, int32_t, double, const MethodInfo*))Collection_1_InsertItem_m45507_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Remove(T)
extern "C" bool Collection_1_Remove_m45508_gshared (Collection_1_t7336 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Remove_m45508(__this, ___item, method) (( bool (*) (Collection_1_t7336 *, double, const MethodInfo*))Collection_1_Remove_m45508_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m45509_gshared (Collection_1_t7336 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m45509(__this, ___index, method) (( void (*) (Collection_1_t7336 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m45509_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m45510_gshared (Collection_1_t7336 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m45510(__this, ___index, method) (( void (*) (Collection_1_t7336 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m45510_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::get_Count()
extern "C" int32_t Collection_1_get_Count_m45511_gshared (Collection_1_t7336 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m45511(__this, method) (( int32_t (*) (Collection_1_t7336 *, const MethodInfo*))Collection_1_get_Count_m45511_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::get_Item(System.Int32)
extern "C" double Collection_1_get_Item_m45512_gshared (Collection_1_t7336 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m45512(__this, ___index, method) (( double (*) (Collection_1_t7336 *, int32_t, const MethodInfo*))Collection_1_get_Item_m45512_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m45513_gshared (Collection_1_t7336 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define Collection_1_set_Item_m45513(__this, ___index, ___value, method) (( void (*) (Collection_1_t7336 *, int32_t, double, const MethodInfo*))Collection_1_set_Item_m45513_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m45514_gshared (Collection_1_t7336 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_SetItem_m45514(__this, ___index, ___item, method) (( void (*) (Collection_1_t7336 *, int32_t, double, const MethodInfo*))Collection_1_SetItem_m45514_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m45515_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m45515(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m45515_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::ConvertItem(System.Object)
extern "C" double Collection_1_ConvertItem_m45516_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m45516(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m45516_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m45517_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m45517(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m45517_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m45518_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m45518(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m45518_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m45519_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m45519(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m45519_gshared)(__this /* static, unused */, ___list, method)
