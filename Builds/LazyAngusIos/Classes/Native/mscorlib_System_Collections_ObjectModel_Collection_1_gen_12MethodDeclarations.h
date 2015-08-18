#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Double>
struct Collection_1_t6754;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Double[]
struct DoubleU5BU5D_t4873;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6360;
// System.Collections.Generic.IList`1<System.Double>
struct IList_1_t6357;

// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::.ctor()
extern "C" void Collection_1__ctor_m40698_gshared (Collection_1_t6754 * __this, const MethodInfo* method);
#define Collection_1__ctor_m40698(__this, method) (( void (*) (Collection_1_t6754 *, const MethodInfo*))Collection_1__ctor_m40698_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40699_gshared (Collection_1_t6754 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40699(__this, method) (( bool (*) (Collection_1_t6754 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40699_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m40700_gshared (Collection_1_t6754 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m40700(__this, ___array, ___index, method) (( void (*) (Collection_1_t6754 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m40700_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m40701_gshared (Collection_1_t6754 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m40701(__this, method) (( Object_t * (*) (Collection_1_t6754 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m40701_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m40702_gshared (Collection_1_t6754 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m40702(__this, ___value, method) (( int32_t (*) (Collection_1_t6754 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m40702_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m40703_gshared (Collection_1_t6754 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m40703(__this, ___value, method) (( bool (*) (Collection_1_t6754 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m40703_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m40704_gshared (Collection_1_t6754 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m40704(__this, ___value, method) (( int32_t (*) (Collection_1_t6754 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m40704_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m40705_gshared (Collection_1_t6754 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m40705(__this, ___index, ___value, method) (( void (*) (Collection_1_t6754 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m40705_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m40706_gshared (Collection_1_t6754 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m40706(__this, ___value, method) (( void (*) (Collection_1_t6754 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m40706_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m40707_gshared (Collection_1_t6754 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m40707(__this, method) (( bool (*) (Collection_1_t6754 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m40707_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m40708_gshared (Collection_1_t6754 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m40708(__this, method) (( Object_t * (*) (Collection_1_t6754 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m40708_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m40709_gshared (Collection_1_t6754 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m40709(__this, method) (( bool (*) (Collection_1_t6754 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m40709_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m40710_gshared (Collection_1_t6754 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m40710(__this, method) (( bool (*) (Collection_1_t6754 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m40710_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m40711_gshared (Collection_1_t6754 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m40711(__this, ___index, method) (( Object_t * (*) (Collection_1_t6754 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m40711_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m40712_gshared (Collection_1_t6754 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m40712(__this, ___index, ___value, method) (( void (*) (Collection_1_t6754 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m40712_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Add(T)
extern "C" void Collection_1_Add_m40713_gshared (Collection_1_t6754 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Add_m40713(__this, ___item, method) (( void (*) (Collection_1_t6754 *, double, const MethodInfo*))Collection_1_Add_m40713_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Clear()
extern "C" void Collection_1_Clear_m40714_gshared (Collection_1_t6754 * __this, const MethodInfo* method);
#define Collection_1_Clear_m40714(__this, method) (( void (*) (Collection_1_t6754 *, const MethodInfo*))Collection_1_Clear_m40714_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::ClearItems()
extern "C" void Collection_1_ClearItems_m40715_gshared (Collection_1_t6754 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m40715(__this, method) (( void (*) (Collection_1_t6754 *, const MethodInfo*))Collection_1_ClearItems_m40715_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Contains(T)
extern "C" bool Collection_1_Contains_m40716_gshared (Collection_1_t6754 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Contains_m40716(__this, ___item, method) (( bool (*) (Collection_1_t6754 *, double, const MethodInfo*))Collection_1_Contains_m40716_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m40717_gshared (Collection_1_t6754 * __this, DoubleU5BU5D_t4873* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m40717(__this, ___array, ___index, method) (( void (*) (Collection_1_t6754 *, DoubleU5BU5D_t4873*, int32_t, const MethodInfo*))Collection_1_CopyTo_m40717_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Double>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m40718_gshared (Collection_1_t6754 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m40718(__this, method) (( Object_t* (*) (Collection_1_t6754 *, const MethodInfo*))Collection_1_GetEnumerator_m40718_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m40719_gshared (Collection_1_t6754 * __this, double ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m40719(__this, ___item, method) (( int32_t (*) (Collection_1_t6754 *, double, const MethodInfo*))Collection_1_IndexOf_m40719_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m40720_gshared (Collection_1_t6754 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_Insert_m40720(__this, ___index, ___item, method) (( void (*) (Collection_1_t6754 *, int32_t, double, const MethodInfo*))Collection_1_Insert_m40720_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m40721_gshared (Collection_1_t6754 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m40721(__this, ___index, ___item, method) (( void (*) (Collection_1_t6754 *, int32_t, double, const MethodInfo*))Collection_1_InsertItem_m40721_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::Remove(T)
extern "C" bool Collection_1_Remove_m40722_gshared (Collection_1_t6754 * __this, double ___item, const MethodInfo* method);
#define Collection_1_Remove_m40722(__this, ___item, method) (( bool (*) (Collection_1_t6754 *, double, const MethodInfo*))Collection_1_Remove_m40722_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m40723_gshared (Collection_1_t6754 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m40723(__this, ___index, method) (( void (*) (Collection_1_t6754 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m40723_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m40724_gshared (Collection_1_t6754 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m40724(__this, ___index, method) (( void (*) (Collection_1_t6754 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m40724_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Double>::get_Count()
extern "C" int32_t Collection_1_get_Count_m40725_gshared (Collection_1_t6754 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m40725(__this, method) (( int32_t (*) (Collection_1_t6754 *, const MethodInfo*))Collection_1_get_Count_m40725_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::get_Item(System.Int32)
extern "C" double Collection_1_get_Item_m40726_gshared (Collection_1_t6754 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m40726(__this, ___index, method) (( double (*) (Collection_1_t6754 *, int32_t, const MethodInfo*))Collection_1_get_Item_m40726_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m40727_gshared (Collection_1_t6754 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define Collection_1_set_Item_m40727(__this, ___index, ___value, method) (( void (*) (Collection_1_t6754 *, int32_t, double, const MethodInfo*))Collection_1_set_Item_m40727_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m40728_gshared (Collection_1_t6754 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define Collection_1_SetItem_m40728(__this, ___index, ___item, method) (( void (*) (Collection_1_t6754 *, int32_t, double, const MethodInfo*))Collection_1_SetItem_m40728_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m40729_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m40729(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m40729_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Double>::ConvertItem(System.Object)
extern "C" double Collection_1_ConvertItem_m40730_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m40730(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m40730_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Double>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m40731_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m40731(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m40731_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m40732_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m40732(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m40732_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Double>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m40733_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m40733(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m40733_gshared)(__this /* static, unused */, ___list, method)
