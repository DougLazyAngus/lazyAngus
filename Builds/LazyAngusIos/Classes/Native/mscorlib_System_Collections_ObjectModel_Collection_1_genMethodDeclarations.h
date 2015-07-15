#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t3322;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t533;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1370;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m16921_gshared (Collection_1_t3322 * __this, const MethodInfo* method);
#define Collection_1__ctor_m16921(__this, method) (( void (*) (Collection_1_t3322 *, const MethodInfo*))Collection_1__ctor_m16921_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16922_gshared (Collection_1_t3322 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16922(__this, method) (( bool (*) (Collection_1_t3322 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16922_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m16923_gshared (Collection_1_t3322 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m16923(__this, ___array, ___index, method) (( void (*) (Collection_1_t3322 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m16923_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m16924_gshared (Collection_1_t3322 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m16924(__this, method) (( Object_t * (*) (Collection_1_t3322 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m16924_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m16925_gshared (Collection_1_t3322 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m16925(__this, ___value, method) (( int32_t (*) (Collection_1_t3322 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m16925_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m16926_gshared (Collection_1_t3322 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m16926(__this, ___value, method) (( bool (*) (Collection_1_t3322 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m16926_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m16927_gshared (Collection_1_t3322 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m16927(__this, ___value, method) (( int32_t (*) (Collection_1_t3322 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m16927_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m16928_gshared (Collection_1_t3322 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m16928(__this, ___index, ___value, method) (( void (*) (Collection_1_t3322 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m16928_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m16929_gshared (Collection_1_t3322 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m16929(__this, ___value, method) (( void (*) (Collection_1_t3322 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m16929_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m16930_gshared (Collection_1_t3322 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m16930(__this, method) (( bool (*) (Collection_1_t3322 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m16930_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m16931_gshared (Collection_1_t3322 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m16931(__this, method) (( Object_t * (*) (Collection_1_t3322 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m16931_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m16932_gshared (Collection_1_t3322 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m16932(__this, method) (( bool (*) (Collection_1_t3322 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m16932_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m16933_gshared (Collection_1_t3322 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m16933(__this, method) (( bool (*) (Collection_1_t3322 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m16933_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m16934_gshared (Collection_1_t3322 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m16934(__this, ___index, method) (( Object_t * (*) (Collection_1_t3322 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m16934_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m16935_gshared (Collection_1_t3322 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m16935(__this, ___index, ___value, method) (( void (*) (Collection_1_t3322 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m16935_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m16936_gshared (Collection_1_t3322 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m16936(__this, ___item, method) (( void (*) (Collection_1_t3322 *, Object_t *, const MethodInfo*))Collection_1_Add_m16936_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m16937_gshared (Collection_1_t3322 * __this, const MethodInfo* method);
#define Collection_1_Clear_m16937(__this, method) (( void (*) (Collection_1_t3322 *, const MethodInfo*))Collection_1_Clear_m16937_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m16938_gshared (Collection_1_t3322 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m16938(__this, method) (( void (*) (Collection_1_t3322 *, const MethodInfo*))Collection_1_ClearItems_m16938_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m16939_gshared (Collection_1_t3322 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m16939(__this, ___item, method) (( bool (*) (Collection_1_t3322 *, Object_t *, const MethodInfo*))Collection_1_Contains_m16939_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m16940_gshared (Collection_1_t3322 * __this, ObjectU5BU5D_t533* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m16940(__this, ___array, ___index, method) (( void (*) (Collection_1_t3322 *, ObjectU5BU5D_t533*, int32_t, const MethodInfo*))Collection_1_CopyTo_m16940_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m16941_gshared (Collection_1_t3322 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m16941(__this, method) (( Object_t* (*) (Collection_1_t3322 *, const MethodInfo*))Collection_1_GetEnumerator_m16941_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m16942_gshared (Collection_1_t3322 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m16942(__this, ___item, method) (( int32_t (*) (Collection_1_t3322 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m16942_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m16943_gshared (Collection_1_t3322 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m16943(__this, ___index, ___item, method) (( void (*) (Collection_1_t3322 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m16943_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m16944_gshared (Collection_1_t3322 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m16944(__this, ___index, ___item, method) (( void (*) (Collection_1_t3322 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m16944_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m16945_gshared (Collection_1_t3322 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m16945(__this, ___item, method) (( bool (*) (Collection_1_t3322 *, Object_t *, const MethodInfo*))Collection_1_Remove_m16945_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m16946_gshared (Collection_1_t3322 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m16946(__this, ___index, method) (( void (*) (Collection_1_t3322 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m16946_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m16947_gshared (Collection_1_t3322 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m16947(__this, ___index, method) (( void (*) (Collection_1_t3322 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m16947_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m16948_gshared (Collection_1_t3322 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m16948(__this, method) (( int32_t (*) (Collection_1_t3322 *, const MethodInfo*))Collection_1_get_Count_m16948_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m16949_gshared (Collection_1_t3322 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m16949(__this, ___index, method) (( Object_t * (*) (Collection_1_t3322 *, int32_t, const MethodInfo*))Collection_1_get_Item_m16949_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m16950_gshared (Collection_1_t3322 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m16950(__this, ___index, ___value, method) (( void (*) (Collection_1_t3322 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m16950_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m16951_gshared (Collection_1_t3322 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m16951(__this, ___index, ___item, method) (( void (*) (Collection_1_t3322 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m16951_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m16952_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m16952(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m16952_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m16953_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m16953(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m16953_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m16954_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m16954(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m16954_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m16955_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m16955(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m16955_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m16956_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m16956(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m16956_gshared)(__this /* static, unused */, ___list, method)
