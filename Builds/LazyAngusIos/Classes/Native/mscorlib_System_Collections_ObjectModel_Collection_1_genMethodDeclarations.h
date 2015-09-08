#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t5977;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t697;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1393;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m26037_gshared (Collection_1_t5977 * __this, const MethodInfo* method);
#define Collection_1__ctor_m26037(__this, method) (( void (*) (Collection_1_t5977 *, const MethodInfo*))Collection_1__ctor_m26037_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26038_gshared (Collection_1_t5977 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26038(__this, method) (( bool (*) (Collection_1_t5977 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26038_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m26039_gshared (Collection_1_t5977 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m26039(__this, ___array, ___index, method) (( void (*) (Collection_1_t5977 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m26039_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m26040_gshared (Collection_1_t5977 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m26040(__this, method) (( Object_t * (*) (Collection_1_t5977 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m26040_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m26041_gshared (Collection_1_t5977 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m26041(__this, ___value, method) (( int32_t (*) (Collection_1_t5977 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m26041_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m26042_gshared (Collection_1_t5977 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m26042(__this, ___value, method) (( bool (*) (Collection_1_t5977 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m26042_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m26043_gshared (Collection_1_t5977 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m26043(__this, ___value, method) (( int32_t (*) (Collection_1_t5977 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m26043_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m26044_gshared (Collection_1_t5977 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m26044(__this, ___index, ___value, method) (( void (*) (Collection_1_t5977 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m26044_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m26045_gshared (Collection_1_t5977 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m26045(__this, ___value, method) (( void (*) (Collection_1_t5977 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m26045_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m26046_gshared (Collection_1_t5977 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m26046(__this, method) (( bool (*) (Collection_1_t5977 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m26046_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m26047_gshared (Collection_1_t5977 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m26047(__this, method) (( Object_t * (*) (Collection_1_t5977 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m26047_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m26048_gshared (Collection_1_t5977 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m26048(__this, method) (( bool (*) (Collection_1_t5977 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m26048_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m26049_gshared (Collection_1_t5977 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m26049(__this, method) (( bool (*) (Collection_1_t5977 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m26049_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m26050_gshared (Collection_1_t5977 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m26050(__this, ___index, method) (( Object_t * (*) (Collection_1_t5977 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m26050_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m26051_gshared (Collection_1_t5977 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m26051(__this, ___index, ___value, method) (( void (*) (Collection_1_t5977 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m26051_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m26052_gshared (Collection_1_t5977 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m26052(__this, ___item, method) (( void (*) (Collection_1_t5977 *, Object_t *, const MethodInfo*))Collection_1_Add_m26052_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m26053_gshared (Collection_1_t5977 * __this, const MethodInfo* method);
#define Collection_1_Clear_m26053(__this, method) (( void (*) (Collection_1_t5977 *, const MethodInfo*))Collection_1_Clear_m26053_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m26054_gshared (Collection_1_t5977 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m26054(__this, method) (( void (*) (Collection_1_t5977 *, const MethodInfo*))Collection_1_ClearItems_m26054_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m26055_gshared (Collection_1_t5977 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m26055(__this, ___item, method) (( bool (*) (Collection_1_t5977 *, Object_t *, const MethodInfo*))Collection_1_Contains_m26055_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m26056_gshared (Collection_1_t5977 * __this, ObjectU5BU5D_t697* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m26056(__this, ___array, ___index, method) (( void (*) (Collection_1_t5977 *, ObjectU5BU5D_t697*, int32_t, const MethodInfo*))Collection_1_CopyTo_m26056_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m26057_gshared (Collection_1_t5977 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m26057(__this, method) (( Object_t* (*) (Collection_1_t5977 *, const MethodInfo*))Collection_1_GetEnumerator_m26057_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m26058_gshared (Collection_1_t5977 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m26058(__this, ___item, method) (( int32_t (*) (Collection_1_t5977 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m26058_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m26059_gshared (Collection_1_t5977 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m26059(__this, ___index, ___item, method) (( void (*) (Collection_1_t5977 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m26059_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m26060_gshared (Collection_1_t5977 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m26060(__this, ___index, ___item, method) (( void (*) (Collection_1_t5977 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m26060_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m26061_gshared (Collection_1_t5977 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m26061(__this, ___item, method) (( bool (*) (Collection_1_t5977 *, Object_t *, const MethodInfo*))Collection_1_Remove_m26061_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m26062_gshared (Collection_1_t5977 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m26062(__this, ___index, method) (( void (*) (Collection_1_t5977 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m26062_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m26063_gshared (Collection_1_t5977 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m26063(__this, ___index, method) (( void (*) (Collection_1_t5977 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m26063_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m26064_gshared (Collection_1_t5977 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m26064(__this, method) (( int32_t (*) (Collection_1_t5977 *, const MethodInfo*))Collection_1_get_Count_m26064_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m26065_gshared (Collection_1_t5977 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m26065(__this, ___index, method) (( Object_t * (*) (Collection_1_t5977 *, int32_t, const MethodInfo*))Collection_1_get_Item_m26065_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m26066_gshared (Collection_1_t5977 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m26066(__this, ___index, ___value, method) (( void (*) (Collection_1_t5977 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m26066_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m26067_gshared (Collection_1_t5977 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m26067(__this, ___index, ___item, method) (( void (*) (Collection_1_t5977 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m26067_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m26068_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m26068(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m26068_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m26069_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m26069(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m26069_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m26070_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m26070(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m26070_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m26071_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m26071(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m26071_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m26072_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m26072(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m26072_gshared)(__this /* static, unused */, ___list, method)
