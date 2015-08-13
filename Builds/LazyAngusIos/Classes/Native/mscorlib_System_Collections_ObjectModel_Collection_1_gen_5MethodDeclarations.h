#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Byte>
struct Collection_1_t6372;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6311;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t6308;

// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::.ctor()
extern "C" void Collection_1__ctor_m35721_gshared (Collection_1_t6372 * __this, const MethodInfo* method);
#define Collection_1__ctor_m35721(__this, method) (( void (*) (Collection_1_t6372 *, const MethodInfo*))Collection_1__ctor_m35721_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35722_gshared (Collection_1_t6372 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35722(__this, method) (( bool (*) (Collection_1_t6372 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35722_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m35723_gshared (Collection_1_t6372 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m35723(__this, ___array, ___index, method) (( void (*) (Collection_1_t6372 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m35723_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m35724_gshared (Collection_1_t6372 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m35724(__this, method) (( Object_t * (*) (Collection_1_t6372 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m35724_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m35725_gshared (Collection_1_t6372 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m35725(__this, ___value, method) (( int32_t (*) (Collection_1_t6372 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m35725_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m35726_gshared (Collection_1_t6372 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m35726(__this, ___value, method) (( bool (*) (Collection_1_t6372 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m35726_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m35727_gshared (Collection_1_t6372 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m35727(__this, ___value, method) (( int32_t (*) (Collection_1_t6372 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m35727_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m35728_gshared (Collection_1_t6372 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m35728(__this, ___index, ___value, method) (( void (*) (Collection_1_t6372 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m35728_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m35729_gshared (Collection_1_t6372 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m35729(__this, ___value, method) (( void (*) (Collection_1_t6372 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m35729_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m35730_gshared (Collection_1_t6372 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m35730(__this, method) (( bool (*) (Collection_1_t6372 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m35730_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m35731_gshared (Collection_1_t6372 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m35731(__this, method) (( Object_t * (*) (Collection_1_t6372 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m35731_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m35732_gshared (Collection_1_t6372 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m35732(__this, method) (( bool (*) (Collection_1_t6372 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m35732_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m35733_gshared (Collection_1_t6372 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m35733(__this, method) (( bool (*) (Collection_1_t6372 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m35733_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m35734_gshared (Collection_1_t6372 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m35734(__this, ___index, method) (( Object_t * (*) (Collection_1_t6372 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m35734_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m35735_gshared (Collection_1_t6372 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m35735(__this, ___index, ___value, method) (( void (*) (Collection_1_t6372 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m35735_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Add(T)
extern "C" void Collection_1_Add_m35736_gshared (Collection_1_t6372 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Add_m35736(__this, ___item, method) (( void (*) (Collection_1_t6372 *, uint8_t, const MethodInfo*))Collection_1_Add_m35736_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Clear()
extern "C" void Collection_1_Clear_m35737_gshared (Collection_1_t6372 * __this, const MethodInfo* method);
#define Collection_1_Clear_m35737(__this, method) (( void (*) (Collection_1_t6372 *, const MethodInfo*))Collection_1_Clear_m35737_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::ClearItems()
extern "C" void Collection_1_ClearItems_m35738_gshared (Collection_1_t6372 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m35738(__this, method) (( void (*) (Collection_1_t6372 *, const MethodInfo*))Collection_1_ClearItems_m35738_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Contains(T)
extern "C" bool Collection_1_Contains_m35739_gshared (Collection_1_t6372 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m35739(__this, ___item, method) (( bool (*) (Collection_1_t6372 *, uint8_t, const MethodInfo*))Collection_1_Contains_m35739_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m35740_gshared (Collection_1_t6372 * __this, ByteU5BU5D_t66* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m35740(__this, ___array, ___index, method) (( void (*) (Collection_1_t6372 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))Collection_1_CopyTo_m35740_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Byte>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m35741_gshared (Collection_1_t6372 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m35741(__this, method) (( Object_t* (*) (Collection_1_t6372 *, const MethodInfo*))Collection_1_GetEnumerator_m35741_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m35742_gshared (Collection_1_t6372 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m35742(__this, ___item, method) (( int32_t (*) (Collection_1_t6372 *, uint8_t, const MethodInfo*))Collection_1_IndexOf_m35742_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m35743_gshared (Collection_1_t6372 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m35743(__this, ___index, ___item, method) (( void (*) (Collection_1_t6372 *, int32_t, uint8_t, const MethodInfo*))Collection_1_Insert_m35743_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m35744_gshared (Collection_1_t6372 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m35744(__this, ___index, ___item, method) (( void (*) (Collection_1_t6372 *, int32_t, uint8_t, const MethodInfo*))Collection_1_InsertItem_m35744_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Remove(T)
extern "C" bool Collection_1_Remove_m35745_gshared (Collection_1_t6372 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m35745(__this, ___item, method) (( bool (*) (Collection_1_t6372 *, uint8_t, const MethodInfo*))Collection_1_Remove_m35745_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m35746_gshared (Collection_1_t6372 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m35746(__this, ___index, method) (( void (*) (Collection_1_t6372 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m35746_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m35747_gshared (Collection_1_t6372 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m35747(__this, ___index, method) (( void (*) (Collection_1_t6372 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m35747_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::get_Count()
extern "C" int32_t Collection_1_get_Count_m35748_gshared (Collection_1_t6372 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m35748(__this, method) (( int32_t (*) (Collection_1_t6372 *, const MethodInfo*))Collection_1_get_Count_m35748_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t Collection_1_get_Item_m35749_gshared (Collection_1_t6372 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m35749(__this, ___index, method) (( uint8_t (*) (Collection_1_t6372 *, int32_t, const MethodInfo*))Collection_1_get_Item_m35749_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m35750_gshared (Collection_1_t6372 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m35750(__this, ___index, ___value, method) (( void (*) (Collection_1_t6372 *, int32_t, uint8_t, const MethodInfo*))Collection_1_set_Item_m35750_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m35751_gshared (Collection_1_t6372 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m35751(__this, ___index, ___item, method) (( void (*) (Collection_1_t6372 *, int32_t, uint8_t, const MethodInfo*))Collection_1_SetItem_m35751_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m35752_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m35752(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m35752_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::ConvertItem(System.Object)
extern "C" uint8_t Collection_1_ConvertItem_m35753_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m35753(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m35753_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m35754_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m35754(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m35754_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m35755_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m35755(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m35755_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m35756_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m35756(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m35756_gshared)(__this /* static, unused */, ___list, method)
