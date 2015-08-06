#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Byte>
struct Collection_1_t6300;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6239;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t6236;

// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::.ctor()
extern "C" void Collection_1__ctor_m35037_gshared (Collection_1_t6300 * __this, const MethodInfo* method);
#define Collection_1__ctor_m35037(__this, method) (( void (*) (Collection_1_t6300 *, const MethodInfo*))Collection_1__ctor_m35037_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35038_gshared (Collection_1_t6300 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35038(__this, method) (( bool (*) (Collection_1_t6300 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35038_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m35039_gshared (Collection_1_t6300 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m35039(__this, ___array, ___index, method) (( void (*) (Collection_1_t6300 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m35039_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m35040_gshared (Collection_1_t6300 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m35040(__this, method) (( Object_t * (*) (Collection_1_t6300 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m35040_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m35041_gshared (Collection_1_t6300 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m35041(__this, ___value, method) (( int32_t (*) (Collection_1_t6300 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m35041_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m35042_gshared (Collection_1_t6300 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m35042(__this, ___value, method) (( bool (*) (Collection_1_t6300 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m35042_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m35043_gshared (Collection_1_t6300 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m35043(__this, ___value, method) (( int32_t (*) (Collection_1_t6300 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m35043_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m35044_gshared (Collection_1_t6300 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m35044(__this, ___index, ___value, method) (( void (*) (Collection_1_t6300 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m35044_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m35045_gshared (Collection_1_t6300 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m35045(__this, ___value, method) (( void (*) (Collection_1_t6300 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m35045_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m35046_gshared (Collection_1_t6300 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m35046(__this, method) (( bool (*) (Collection_1_t6300 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m35046_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m35047_gshared (Collection_1_t6300 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m35047(__this, method) (( Object_t * (*) (Collection_1_t6300 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m35047_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m35048_gshared (Collection_1_t6300 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m35048(__this, method) (( bool (*) (Collection_1_t6300 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m35048_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m35049_gshared (Collection_1_t6300 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m35049(__this, method) (( bool (*) (Collection_1_t6300 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m35049_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m35050_gshared (Collection_1_t6300 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m35050(__this, ___index, method) (( Object_t * (*) (Collection_1_t6300 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m35050_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m35051_gshared (Collection_1_t6300 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m35051(__this, ___index, ___value, method) (( void (*) (Collection_1_t6300 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m35051_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Add(T)
extern "C" void Collection_1_Add_m35052_gshared (Collection_1_t6300 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Add_m35052(__this, ___item, method) (( void (*) (Collection_1_t6300 *, uint8_t, const MethodInfo*))Collection_1_Add_m35052_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Clear()
extern "C" void Collection_1_Clear_m35053_gshared (Collection_1_t6300 * __this, const MethodInfo* method);
#define Collection_1_Clear_m35053(__this, method) (( void (*) (Collection_1_t6300 *, const MethodInfo*))Collection_1_Clear_m35053_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::ClearItems()
extern "C" void Collection_1_ClearItems_m35054_gshared (Collection_1_t6300 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m35054(__this, method) (( void (*) (Collection_1_t6300 *, const MethodInfo*))Collection_1_ClearItems_m35054_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Contains(T)
extern "C" bool Collection_1_Contains_m35055_gshared (Collection_1_t6300 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m35055(__this, ___item, method) (( bool (*) (Collection_1_t6300 *, uint8_t, const MethodInfo*))Collection_1_Contains_m35055_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m35056_gshared (Collection_1_t6300 * __this, ByteU5BU5D_t66* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m35056(__this, ___array, ___index, method) (( void (*) (Collection_1_t6300 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))Collection_1_CopyTo_m35056_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Byte>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m35057_gshared (Collection_1_t6300 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m35057(__this, method) (( Object_t* (*) (Collection_1_t6300 *, const MethodInfo*))Collection_1_GetEnumerator_m35057_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m35058_gshared (Collection_1_t6300 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m35058(__this, ___item, method) (( int32_t (*) (Collection_1_t6300 *, uint8_t, const MethodInfo*))Collection_1_IndexOf_m35058_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m35059_gshared (Collection_1_t6300 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m35059(__this, ___index, ___item, method) (( void (*) (Collection_1_t6300 *, int32_t, uint8_t, const MethodInfo*))Collection_1_Insert_m35059_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m35060_gshared (Collection_1_t6300 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m35060(__this, ___index, ___item, method) (( void (*) (Collection_1_t6300 *, int32_t, uint8_t, const MethodInfo*))Collection_1_InsertItem_m35060_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Remove(T)
extern "C" bool Collection_1_Remove_m35061_gshared (Collection_1_t6300 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m35061(__this, ___item, method) (( bool (*) (Collection_1_t6300 *, uint8_t, const MethodInfo*))Collection_1_Remove_m35061_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m35062_gshared (Collection_1_t6300 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m35062(__this, ___index, method) (( void (*) (Collection_1_t6300 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m35062_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m35063_gshared (Collection_1_t6300 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m35063(__this, ___index, method) (( void (*) (Collection_1_t6300 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m35063_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::get_Count()
extern "C" int32_t Collection_1_get_Count_m35064_gshared (Collection_1_t6300 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m35064(__this, method) (( int32_t (*) (Collection_1_t6300 *, const MethodInfo*))Collection_1_get_Count_m35064_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t Collection_1_get_Item_m35065_gshared (Collection_1_t6300 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m35065(__this, ___index, method) (( uint8_t (*) (Collection_1_t6300 *, int32_t, const MethodInfo*))Collection_1_get_Item_m35065_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m35066_gshared (Collection_1_t6300 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m35066(__this, ___index, ___value, method) (( void (*) (Collection_1_t6300 *, int32_t, uint8_t, const MethodInfo*))Collection_1_set_Item_m35066_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m35067_gshared (Collection_1_t6300 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m35067(__this, ___index, ___item, method) (( void (*) (Collection_1_t6300 *, int32_t, uint8_t, const MethodInfo*))Collection_1_SetItem_m35067_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m35068_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m35068(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m35068_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::ConvertItem(System.Object)
extern "C" uint8_t Collection_1_ConvertItem_m35069_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m35069(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m35069_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m35070_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m35070(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m35070_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m35071_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m35071(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m35071_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m35072_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m35072(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m35072_gshared)(__this /* static, unused */, ___list, method)
