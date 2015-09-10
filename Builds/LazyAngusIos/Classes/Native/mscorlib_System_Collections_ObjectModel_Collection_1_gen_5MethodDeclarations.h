#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Byte>
struct Collection_1_t6954;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6893;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t6890;

// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::.ctor()
extern "C" void Collection_1__ctor_m40504_gshared (Collection_1_t6954 * __this, const MethodInfo* method);
#define Collection_1__ctor_m40504(__this, method) (( void (*) (Collection_1_t6954 *, const MethodInfo*))Collection_1__ctor_m40504_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40505_gshared (Collection_1_t6954 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40505(__this, method) (( bool (*) (Collection_1_t6954 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40505_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m40506_gshared (Collection_1_t6954 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m40506(__this, ___array, ___index, method) (( void (*) (Collection_1_t6954 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m40506_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m40507_gshared (Collection_1_t6954 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m40507(__this, method) (( Object_t * (*) (Collection_1_t6954 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m40507_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m40508_gshared (Collection_1_t6954 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m40508(__this, ___value, method) (( int32_t (*) (Collection_1_t6954 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m40508_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m40509_gshared (Collection_1_t6954 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m40509(__this, ___value, method) (( bool (*) (Collection_1_t6954 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m40509_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m40510_gshared (Collection_1_t6954 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m40510(__this, ___value, method) (( int32_t (*) (Collection_1_t6954 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m40510_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m40511_gshared (Collection_1_t6954 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m40511(__this, ___index, ___value, method) (( void (*) (Collection_1_t6954 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m40511_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m40512_gshared (Collection_1_t6954 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m40512(__this, ___value, method) (( void (*) (Collection_1_t6954 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m40512_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m40513_gshared (Collection_1_t6954 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m40513(__this, method) (( bool (*) (Collection_1_t6954 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m40513_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m40514_gshared (Collection_1_t6954 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m40514(__this, method) (( Object_t * (*) (Collection_1_t6954 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m40514_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m40515_gshared (Collection_1_t6954 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m40515(__this, method) (( bool (*) (Collection_1_t6954 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m40515_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m40516_gshared (Collection_1_t6954 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m40516(__this, method) (( bool (*) (Collection_1_t6954 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m40516_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m40517_gshared (Collection_1_t6954 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m40517(__this, ___index, method) (( Object_t * (*) (Collection_1_t6954 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m40517_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m40518_gshared (Collection_1_t6954 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m40518(__this, ___index, ___value, method) (( void (*) (Collection_1_t6954 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m40518_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Add(T)
extern "C" void Collection_1_Add_m40519_gshared (Collection_1_t6954 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Add_m40519(__this, ___item, method) (( void (*) (Collection_1_t6954 *, uint8_t, const MethodInfo*))Collection_1_Add_m40519_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Clear()
extern "C" void Collection_1_Clear_m40520_gshared (Collection_1_t6954 * __this, const MethodInfo* method);
#define Collection_1_Clear_m40520(__this, method) (( void (*) (Collection_1_t6954 *, const MethodInfo*))Collection_1_Clear_m40520_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::ClearItems()
extern "C" void Collection_1_ClearItems_m40521_gshared (Collection_1_t6954 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m40521(__this, method) (( void (*) (Collection_1_t6954 *, const MethodInfo*))Collection_1_ClearItems_m40521_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Contains(T)
extern "C" bool Collection_1_Contains_m40522_gshared (Collection_1_t6954 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m40522(__this, ___item, method) (( bool (*) (Collection_1_t6954 *, uint8_t, const MethodInfo*))Collection_1_Contains_m40522_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m40523_gshared (Collection_1_t6954 * __this, ByteU5BU5D_t66* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m40523(__this, ___array, ___index, method) (( void (*) (Collection_1_t6954 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))Collection_1_CopyTo_m40523_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Byte>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m40524_gshared (Collection_1_t6954 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m40524(__this, method) (( Object_t* (*) (Collection_1_t6954 *, const MethodInfo*))Collection_1_GetEnumerator_m40524_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m40525_gshared (Collection_1_t6954 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m40525(__this, ___item, method) (( int32_t (*) (Collection_1_t6954 *, uint8_t, const MethodInfo*))Collection_1_IndexOf_m40525_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m40526_gshared (Collection_1_t6954 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m40526(__this, ___index, ___item, method) (( void (*) (Collection_1_t6954 *, int32_t, uint8_t, const MethodInfo*))Collection_1_Insert_m40526_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m40527_gshared (Collection_1_t6954 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m40527(__this, ___index, ___item, method) (( void (*) (Collection_1_t6954 *, int32_t, uint8_t, const MethodInfo*))Collection_1_InsertItem_m40527_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Remove(T)
extern "C" bool Collection_1_Remove_m40528_gshared (Collection_1_t6954 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m40528(__this, ___item, method) (( bool (*) (Collection_1_t6954 *, uint8_t, const MethodInfo*))Collection_1_Remove_m40528_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m40529_gshared (Collection_1_t6954 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m40529(__this, ___index, method) (( void (*) (Collection_1_t6954 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m40529_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m40530_gshared (Collection_1_t6954 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m40530(__this, ___index, method) (( void (*) (Collection_1_t6954 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m40530_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::get_Count()
extern "C" int32_t Collection_1_get_Count_m40531_gshared (Collection_1_t6954 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m40531(__this, method) (( int32_t (*) (Collection_1_t6954 *, const MethodInfo*))Collection_1_get_Count_m40531_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t Collection_1_get_Item_m40532_gshared (Collection_1_t6954 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m40532(__this, ___index, method) (( uint8_t (*) (Collection_1_t6954 *, int32_t, const MethodInfo*))Collection_1_get_Item_m40532_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m40533_gshared (Collection_1_t6954 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m40533(__this, ___index, ___value, method) (( void (*) (Collection_1_t6954 *, int32_t, uint8_t, const MethodInfo*))Collection_1_set_Item_m40533_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m40534_gshared (Collection_1_t6954 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m40534(__this, ___index, ___item, method) (( void (*) (Collection_1_t6954 *, int32_t, uint8_t, const MethodInfo*))Collection_1_SetItem_m40534_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m40535_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m40535(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m40535_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::ConvertItem(System.Object)
extern "C" uint8_t Collection_1_ConvertItem_m40536_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m40536(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m40536_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m40537_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m40537(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m40537_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m40538_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m40538(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m40538_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m40539_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m40539(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m40539_gshared)(__this /* static, unused */, ___list, method)
