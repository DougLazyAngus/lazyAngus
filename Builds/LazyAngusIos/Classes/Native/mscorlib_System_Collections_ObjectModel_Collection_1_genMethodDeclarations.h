#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t3320;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t531;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1368;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m16896_gshared (Collection_1_t3320 * __this, const MethodInfo* method);
#define Collection_1__ctor_m16896(__this, method) (( void (*) (Collection_1_t3320 *, const MethodInfo*))Collection_1__ctor_m16896_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16897_gshared (Collection_1_t3320 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16897(__this, method) (( bool (*) (Collection_1_t3320 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16897_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m16898_gshared (Collection_1_t3320 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m16898(__this, ___array, ___index, method) (( void (*) (Collection_1_t3320 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m16898_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m16899_gshared (Collection_1_t3320 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m16899(__this, method) (( Object_t * (*) (Collection_1_t3320 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m16899_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m16900_gshared (Collection_1_t3320 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m16900(__this, ___value, method) (( int32_t (*) (Collection_1_t3320 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m16900_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m16901_gshared (Collection_1_t3320 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m16901(__this, ___value, method) (( bool (*) (Collection_1_t3320 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m16901_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m16902_gshared (Collection_1_t3320 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m16902(__this, ___value, method) (( int32_t (*) (Collection_1_t3320 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m16902_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m16903_gshared (Collection_1_t3320 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m16903(__this, ___index, ___value, method) (( void (*) (Collection_1_t3320 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m16903_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m16904_gshared (Collection_1_t3320 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m16904(__this, ___value, method) (( void (*) (Collection_1_t3320 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m16904_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m16905_gshared (Collection_1_t3320 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m16905(__this, method) (( bool (*) (Collection_1_t3320 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m16905_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m16906_gshared (Collection_1_t3320 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m16906(__this, method) (( Object_t * (*) (Collection_1_t3320 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m16906_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m16907_gshared (Collection_1_t3320 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m16907(__this, method) (( bool (*) (Collection_1_t3320 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m16907_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m16908_gshared (Collection_1_t3320 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m16908(__this, method) (( bool (*) (Collection_1_t3320 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m16908_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m16909_gshared (Collection_1_t3320 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m16909(__this, ___index, method) (( Object_t * (*) (Collection_1_t3320 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m16909_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m16910_gshared (Collection_1_t3320 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m16910(__this, ___index, ___value, method) (( void (*) (Collection_1_t3320 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m16910_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m16911_gshared (Collection_1_t3320 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m16911(__this, ___item, method) (( void (*) (Collection_1_t3320 *, Object_t *, const MethodInfo*))Collection_1_Add_m16911_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m16912_gshared (Collection_1_t3320 * __this, const MethodInfo* method);
#define Collection_1_Clear_m16912(__this, method) (( void (*) (Collection_1_t3320 *, const MethodInfo*))Collection_1_Clear_m16912_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m16913_gshared (Collection_1_t3320 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m16913(__this, method) (( void (*) (Collection_1_t3320 *, const MethodInfo*))Collection_1_ClearItems_m16913_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m16914_gshared (Collection_1_t3320 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m16914(__this, ___item, method) (( bool (*) (Collection_1_t3320 *, Object_t *, const MethodInfo*))Collection_1_Contains_m16914_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m16915_gshared (Collection_1_t3320 * __this, ObjectU5BU5D_t531* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m16915(__this, ___array, ___index, method) (( void (*) (Collection_1_t3320 *, ObjectU5BU5D_t531*, int32_t, const MethodInfo*))Collection_1_CopyTo_m16915_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m16916_gshared (Collection_1_t3320 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m16916(__this, method) (( Object_t* (*) (Collection_1_t3320 *, const MethodInfo*))Collection_1_GetEnumerator_m16916_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m16917_gshared (Collection_1_t3320 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m16917(__this, ___item, method) (( int32_t (*) (Collection_1_t3320 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m16917_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m16918_gshared (Collection_1_t3320 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m16918(__this, ___index, ___item, method) (( void (*) (Collection_1_t3320 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m16918_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m16919_gshared (Collection_1_t3320 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m16919(__this, ___index, ___item, method) (( void (*) (Collection_1_t3320 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m16919_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m16920_gshared (Collection_1_t3320 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m16920(__this, ___item, method) (( bool (*) (Collection_1_t3320 *, Object_t *, const MethodInfo*))Collection_1_Remove_m16920_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m16921_gshared (Collection_1_t3320 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m16921(__this, ___index, method) (( void (*) (Collection_1_t3320 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m16921_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m16922_gshared (Collection_1_t3320 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m16922(__this, ___index, method) (( void (*) (Collection_1_t3320 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m16922_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m16923_gshared (Collection_1_t3320 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m16923(__this, method) (( int32_t (*) (Collection_1_t3320 *, const MethodInfo*))Collection_1_get_Count_m16923_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m16924_gshared (Collection_1_t3320 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m16924(__this, ___index, method) (( Object_t * (*) (Collection_1_t3320 *, int32_t, const MethodInfo*))Collection_1_get_Item_m16924_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m16925_gshared (Collection_1_t3320 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m16925(__this, ___index, ___value, method) (( void (*) (Collection_1_t3320 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m16925_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m16926_gshared (Collection_1_t3320 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m16926(__this, ___index, ___item, method) (( void (*) (Collection_1_t3320 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m16926_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m16927_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m16927(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m16927_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m16928_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m16928(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m16928_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m16929_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m16929(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m16929_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m16930_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m16930(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m16930_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m16931_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m16931(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m16931_gshared)(__this /* static, unused */, ___list, method)
