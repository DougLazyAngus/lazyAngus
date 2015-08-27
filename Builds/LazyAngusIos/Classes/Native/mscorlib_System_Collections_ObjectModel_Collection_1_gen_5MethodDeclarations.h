﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Byte>
struct Collection_1_t6379;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6318;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t6315;

// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::.ctor()
extern "C" void Collection_1__ctor_m35842_gshared (Collection_1_t6379 * __this, const MethodInfo* method);
#define Collection_1__ctor_m35842(__this, method) (( void (*) (Collection_1_t6379 *, const MethodInfo*))Collection_1__ctor_m35842_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35843_gshared (Collection_1_t6379 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35843(__this, method) (( bool (*) (Collection_1_t6379 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35843_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m35844_gshared (Collection_1_t6379 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m35844(__this, ___array, ___index, method) (( void (*) (Collection_1_t6379 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m35844_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m35845_gshared (Collection_1_t6379 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m35845(__this, method) (( Object_t * (*) (Collection_1_t6379 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m35845_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m35846_gshared (Collection_1_t6379 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m35846(__this, ___value, method) (( int32_t (*) (Collection_1_t6379 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m35846_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m35847_gshared (Collection_1_t6379 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m35847(__this, ___value, method) (( bool (*) (Collection_1_t6379 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m35847_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m35848_gshared (Collection_1_t6379 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m35848(__this, ___value, method) (( int32_t (*) (Collection_1_t6379 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m35848_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m35849_gshared (Collection_1_t6379 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m35849(__this, ___index, ___value, method) (( void (*) (Collection_1_t6379 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m35849_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m35850_gshared (Collection_1_t6379 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m35850(__this, ___value, method) (( void (*) (Collection_1_t6379 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m35850_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m35851_gshared (Collection_1_t6379 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m35851(__this, method) (( bool (*) (Collection_1_t6379 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m35851_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m35852_gshared (Collection_1_t6379 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m35852(__this, method) (( Object_t * (*) (Collection_1_t6379 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m35852_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m35853_gshared (Collection_1_t6379 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m35853(__this, method) (( bool (*) (Collection_1_t6379 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m35853_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m35854_gshared (Collection_1_t6379 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m35854(__this, method) (( bool (*) (Collection_1_t6379 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m35854_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m35855_gshared (Collection_1_t6379 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m35855(__this, ___index, method) (( Object_t * (*) (Collection_1_t6379 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m35855_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m35856_gshared (Collection_1_t6379 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m35856(__this, ___index, ___value, method) (( void (*) (Collection_1_t6379 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m35856_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Add(T)
extern "C" void Collection_1_Add_m35857_gshared (Collection_1_t6379 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Add_m35857(__this, ___item, method) (( void (*) (Collection_1_t6379 *, uint8_t, const MethodInfo*))Collection_1_Add_m35857_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Clear()
extern "C" void Collection_1_Clear_m35858_gshared (Collection_1_t6379 * __this, const MethodInfo* method);
#define Collection_1_Clear_m35858(__this, method) (( void (*) (Collection_1_t6379 *, const MethodInfo*))Collection_1_Clear_m35858_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::ClearItems()
extern "C" void Collection_1_ClearItems_m35859_gshared (Collection_1_t6379 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m35859(__this, method) (( void (*) (Collection_1_t6379 *, const MethodInfo*))Collection_1_ClearItems_m35859_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Contains(T)
extern "C" bool Collection_1_Contains_m35860_gshared (Collection_1_t6379 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m35860(__this, ___item, method) (( bool (*) (Collection_1_t6379 *, uint8_t, const MethodInfo*))Collection_1_Contains_m35860_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m35861_gshared (Collection_1_t6379 * __this, ByteU5BU5D_t66* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m35861(__this, ___array, ___index, method) (( void (*) (Collection_1_t6379 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))Collection_1_CopyTo_m35861_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Byte>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m35862_gshared (Collection_1_t6379 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m35862(__this, method) (( Object_t* (*) (Collection_1_t6379 *, const MethodInfo*))Collection_1_GetEnumerator_m35862_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m35863_gshared (Collection_1_t6379 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m35863(__this, ___item, method) (( int32_t (*) (Collection_1_t6379 *, uint8_t, const MethodInfo*))Collection_1_IndexOf_m35863_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m35864_gshared (Collection_1_t6379 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m35864(__this, ___index, ___item, method) (( void (*) (Collection_1_t6379 *, int32_t, uint8_t, const MethodInfo*))Collection_1_Insert_m35864_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m35865_gshared (Collection_1_t6379 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m35865(__this, ___index, ___item, method) (( void (*) (Collection_1_t6379 *, int32_t, uint8_t, const MethodInfo*))Collection_1_InsertItem_m35865_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Remove(T)
extern "C" bool Collection_1_Remove_m35866_gshared (Collection_1_t6379 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m35866(__this, ___item, method) (( bool (*) (Collection_1_t6379 *, uint8_t, const MethodInfo*))Collection_1_Remove_m35866_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m35867_gshared (Collection_1_t6379 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m35867(__this, ___index, method) (( void (*) (Collection_1_t6379 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m35867_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m35868_gshared (Collection_1_t6379 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m35868(__this, ___index, method) (( void (*) (Collection_1_t6379 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m35868_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::get_Count()
extern "C" int32_t Collection_1_get_Count_m35869_gshared (Collection_1_t6379 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m35869(__this, method) (( int32_t (*) (Collection_1_t6379 *, const MethodInfo*))Collection_1_get_Count_m35869_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t Collection_1_get_Item_m35870_gshared (Collection_1_t6379 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m35870(__this, ___index, method) (( uint8_t (*) (Collection_1_t6379 *, int32_t, const MethodInfo*))Collection_1_get_Item_m35870_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m35871_gshared (Collection_1_t6379 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m35871(__this, ___index, ___value, method) (( void (*) (Collection_1_t6379 *, int32_t, uint8_t, const MethodInfo*))Collection_1_set_Item_m35871_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m35872_gshared (Collection_1_t6379 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m35872(__this, ___index, ___item, method) (( void (*) (Collection_1_t6379 *, int32_t, uint8_t, const MethodInfo*))Collection_1_SetItem_m35872_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m35873_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m35873(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m35873_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::ConvertItem(System.Object)
extern "C" uint8_t Collection_1_ConvertItem_m35874_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m35874(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m35874_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m35875_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m35875(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m35875_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m35876_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m35876(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m35876_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m35877_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m35877(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m35877_gshared)(__this /* static, unused */, ___list, method)
