#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t6247;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3803;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t6245;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m31042_gshared (Collection_1_t6247 * __this, const MethodInfo* method);
#define Collection_1__ctor_m31042(__this, method) (( void (*) (Collection_1_t6247 *, const MethodInfo*))Collection_1__ctor_m31042_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31043_gshared (Collection_1_t6247 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31043(__this, method) (( bool (*) (Collection_1_t6247 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31043_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m31044_gshared (Collection_1_t6247 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m31044(__this, ___array, ___index, method) (( void (*) (Collection_1_t6247 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m31044_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m31045_gshared (Collection_1_t6247 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m31045(__this, method) (( Object_t * (*) (Collection_1_t6247 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m31045_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m31046_gshared (Collection_1_t6247 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m31046(__this, ___value, method) (( int32_t (*) (Collection_1_t6247 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m31046_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m31047_gshared (Collection_1_t6247 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m31047(__this, ___value, method) (( bool (*) (Collection_1_t6247 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m31047_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m31048_gshared (Collection_1_t6247 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m31048(__this, ___value, method) (( int32_t (*) (Collection_1_t6247 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m31048_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m31049_gshared (Collection_1_t6247 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m31049(__this, ___index, ___value, method) (( void (*) (Collection_1_t6247 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m31049_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m31050_gshared (Collection_1_t6247 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m31050(__this, ___value, method) (( void (*) (Collection_1_t6247 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m31050_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m31051_gshared (Collection_1_t6247 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m31051(__this, method) (( bool (*) (Collection_1_t6247 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m31051_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m31052_gshared (Collection_1_t6247 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m31052(__this, method) (( Object_t * (*) (Collection_1_t6247 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m31052_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m31053_gshared (Collection_1_t6247 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m31053(__this, method) (( bool (*) (Collection_1_t6247 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m31053_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m31054_gshared (Collection_1_t6247 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m31054(__this, method) (( bool (*) (Collection_1_t6247 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m31054_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m31055_gshared (Collection_1_t6247 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m31055(__this, ___index, method) (( Object_t * (*) (Collection_1_t6247 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m31055_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m31056_gshared (Collection_1_t6247 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m31056(__this, ___index, ___value, method) (( void (*) (Collection_1_t6247 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m31056_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m31057_gshared (Collection_1_t6247 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m31057(__this, ___item, method) (( void (*) (Collection_1_t6247 *, int32_t, const MethodInfo*))Collection_1_Add_m31057_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m31058_gshared (Collection_1_t6247 * __this, const MethodInfo* method);
#define Collection_1_Clear_m31058(__this, method) (( void (*) (Collection_1_t6247 *, const MethodInfo*))Collection_1_Clear_m31058_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m31059_gshared (Collection_1_t6247 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m31059(__this, method) (( void (*) (Collection_1_t6247 *, const MethodInfo*))Collection_1_ClearItems_m31059_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m31060_gshared (Collection_1_t6247 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m31060(__this, ___item, method) (( bool (*) (Collection_1_t6247 *, int32_t, const MethodInfo*))Collection_1_Contains_m31060_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m31061_gshared (Collection_1_t6247 * __this, Int32U5BU5D_t484* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m31061(__this, ___array, ___index, method) (( void (*) (Collection_1_t6247 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))Collection_1_CopyTo_m31061_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m31062_gshared (Collection_1_t6247 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m31062(__this, method) (( Object_t* (*) (Collection_1_t6247 *, const MethodInfo*))Collection_1_GetEnumerator_m31062_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m31063_gshared (Collection_1_t6247 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m31063(__this, ___item, method) (( int32_t (*) (Collection_1_t6247 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m31063_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m31064_gshared (Collection_1_t6247 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m31064(__this, ___index, ___item, method) (( void (*) (Collection_1_t6247 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m31064_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m31065_gshared (Collection_1_t6247 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m31065(__this, ___index, ___item, method) (( void (*) (Collection_1_t6247 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m31065_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m31066_gshared (Collection_1_t6247 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m31066(__this, ___item, method) (( bool (*) (Collection_1_t6247 *, int32_t, const MethodInfo*))Collection_1_Remove_m31066_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m31067_gshared (Collection_1_t6247 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m31067(__this, ___index, method) (( void (*) (Collection_1_t6247 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m31067_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m31068_gshared (Collection_1_t6247 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m31068(__this, ___index, method) (( void (*) (Collection_1_t6247 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m31068_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m31069_gshared (Collection_1_t6247 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m31069(__this, method) (( int32_t (*) (Collection_1_t6247 *, const MethodInfo*))Collection_1_get_Count_m31069_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m31070_gshared (Collection_1_t6247 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m31070(__this, ___index, method) (( int32_t (*) (Collection_1_t6247 *, int32_t, const MethodInfo*))Collection_1_get_Item_m31070_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m31071_gshared (Collection_1_t6247 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m31071(__this, ___index, ___value, method) (( void (*) (Collection_1_t6247 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m31071_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m31072_gshared (Collection_1_t6247 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m31072(__this, ___index, ___item, method) (( void (*) (Collection_1_t6247 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m31072_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m31073_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m31073(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m31073_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m31074_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m31074(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m31074_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m31075_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m31075(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m31075_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m31076_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m31076(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m31076_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m31077_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m31077(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m31077_gshared)(__this /* static, unused */, ___list, method)
