#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t5443;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1392;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m21835_gshared (Collection_1_t5443 * __this, const MethodInfo* method);
#define Collection_1__ctor_m21835(__this, method) (( void (*) (Collection_1_t5443 *, const MethodInfo*))Collection_1__ctor_m21835_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21836_gshared (Collection_1_t5443 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21836(__this, method) (( bool (*) (Collection_1_t5443 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21836_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m21837_gshared (Collection_1_t5443 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m21837(__this, ___array, ___index, method) (( void (*) (Collection_1_t5443 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m21837_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m21838_gshared (Collection_1_t5443 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m21838(__this, method) (( Object_t * (*) (Collection_1_t5443 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m21838_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m21839_gshared (Collection_1_t5443 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m21839(__this, ___value, method) (( int32_t (*) (Collection_1_t5443 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m21839_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m21840_gshared (Collection_1_t5443 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m21840(__this, ___value, method) (( bool (*) (Collection_1_t5443 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m21840_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m21841_gshared (Collection_1_t5443 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m21841(__this, ___value, method) (( int32_t (*) (Collection_1_t5443 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m21841_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m21842_gshared (Collection_1_t5443 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m21842(__this, ___index, ___value, method) (( void (*) (Collection_1_t5443 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m21842_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m21843_gshared (Collection_1_t5443 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m21843(__this, ___value, method) (( void (*) (Collection_1_t5443 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m21843_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m21844_gshared (Collection_1_t5443 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m21844(__this, method) (( bool (*) (Collection_1_t5443 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m21844_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m21845_gshared (Collection_1_t5443 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m21845(__this, method) (( Object_t * (*) (Collection_1_t5443 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m21845_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m21846_gshared (Collection_1_t5443 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m21846(__this, method) (( bool (*) (Collection_1_t5443 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m21846_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m21847_gshared (Collection_1_t5443 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m21847(__this, method) (( bool (*) (Collection_1_t5443 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m21847_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m21848_gshared (Collection_1_t5443 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m21848(__this, ___index, method) (( Object_t * (*) (Collection_1_t5443 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m21848_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m21849_gshared (Collection_1_t5443 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m21849(__this, ___index, ___value, method) (( void (*) (Collection_1_t5443 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m21849_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m21850_gshared (Collection_1_t5443 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m21850(__this, ___item, method) (( void (*) (Collection_1_t5443 *, Object_t *, const MethodInfo*))Collection_1_Add_m21850_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m21851_gshared (Collection_1_t5443 * __this, const MethodInfo* method);
#define Collection_1_Clear_m21851(__this, method) (( void (*) (Collection_1_t5443 *, const MethodInfo*))Collection_1_Clear_m21851_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m21852_gshared (Collection_1_t5443 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m21852(__this, method) (( void (*) (Collection_1_t5443 *, const MethodInfo*))Collection_1_ClearItems_m21852_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m21853_gshared (Collection_1_t5443 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m21853(__this, ___item, method) (( bool (*) (Collection_1_t5443 *, Object_t *, const MethodInfo*))Collection_1_Contains_m21853_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m21854_gshared (Collection_1_t5443 * __this, ObjectU5BU5D_t696* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m21854(__this, ___array, ___index, method) (( void (*) (Collection_1_t5443 *, ObjectU5BU5D_t696*, int32_t, const MethodInfo*))Collection_1_CopyTo_m21854_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m21855_gshared (Collection_1_t5443 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m21855(__this, method) (( Object_t* (*) (Collection_1_t5443 *, const MethodInfo*))Collection_1_GetEnumerator_m21855_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m21856_gshared (Collection_1_t5443 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m21856(__this, ___item, method) (( int32_t (*) (Collection_1_t5443 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m21856_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m21857_gshared (Collection_1_t5443 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m21857(__this, ___index, ___item, method) (( void (*) (Collection_1_t5443 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m21857_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m21858_gshared (Collection_1_t5443 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m21858(__this, ___index, ___item, method) (( void (*) (Collection_1_t5443 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m21858_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m21859_gshared (Collection_1_t5443 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m21859(__this, ___item, method) (( bool (*) (Collection_1_t5443 *, Object_t *, const MethodInfo*))Collection_1_Remove_m21859_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m21860_gshared (Collection_1_t5443 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m21860(__this, ___index, method) (( void (*) (Collection_1_t5443 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m21860_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m21861_gshared (Collection_1_t5443 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m21861(__this, ___index, method) (( void (*) (Collection_1_t5443 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m21861_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m21862_gshared (Collection_1_t5443 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m21862(__this, method) (( int32_t (*) (Collection_1_t5443 *, const MethodInfo*))Collection_1_get_Count_m21862_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m21863_gshared (Collection_1_t5443 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m21863(__this, ___index, method) (( Object_t * (*) (Collection_1_t5443 *, int32_t, const MethodInfo*))Collection_1_get_Item_m21863_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m21864_gshared (Collection_1_t5443 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m21864(__this, ___index, ___value, method) (( void (*) (Collection_1_t5443 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m21864_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m21865_gshared (Collection_1_t5443 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m21865(__this, ___index, ___item, method) (( void (*) (Collection_1_t5443 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m21865_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m21866_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m21866(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m21866_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m21867_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m21867(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m21867_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m21868_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m21868(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m21868_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m21869_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m21869(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m21869_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m21870_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m21870(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m21870_gshared)(__this /* static, unused */, ___list, method)
