#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t5370;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t626;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1315;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m21365_gshared (Collection_1_t5370 * __this, const MethodInfo* method);
#define Collection_1__ctor_m21365(__this, method) (( void (*) (Collection_1_t5370 *, const MethodInfo*))Collection_1__ctor_m21365_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21366_gshared (Collection_1_t5370 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21366(__this, method) (( bool (*) (Collection_1_t5370 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21366_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m21367_gshared (Collection_1_t5370 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m21367(__this, ___array, ___index, method) (( void (*) (Collection_1_t5370 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m21367_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m21368_gshared (Collection_1_t5370 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m21368(__this, method) (( Object_t * (*) (Collection_1_t5370 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m21368_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m21369_gshared (Collection_1_t5370 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m21369(__this, ___value, method) (( int32_t (*) (Collection_1_t5370 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m21369_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m21370_gshared (Collection_1_t5370 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m21370(__this, ___value, method) (( bool (*) (Collection_1_t5370 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m21370_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m21371_gshared (Collection_1_t5370 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m21371(__this, ___value, method) (( int32_t (*) (Collection_1_t5370 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m21371_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m21372_gshared (Collection_1_t5370 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m21372(__this, ___index, ___value, method) (( void (*) (Collection_1_t5370 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m21372_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m21373_gshared (Collection_1_t5370 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m21373(__this, ___value, method) (( void (*) (Collection_1_t5370 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m21373_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m21374_gshared (Collection_1_t5370 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m21374(__this, method) (( bool (*) (Collection_1_t5370 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m21374_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m21375_gshared (Collection_1_t5370 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m21375(__this, method) (( Object_t * (*) (Collection_1_t5370 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m21375_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m21376_gshared (Collection_1_t5370 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m21376(__this, method) (( bool (*) (Collection_1_t5370 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m21376_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m21377_gshared (Collection_1_t5370 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m21377(__this, method) (( bool (*) (Collection_1_t5370 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m21377_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m21378_gshared (Collection_1_t5370 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m21378(__this, ___index, method) (( Object_t * (*) (Collection_1_t5370 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m21378_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m21379_gshared (Collection_1_t5370 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m21379(__this, ___index, ___value, method) (( void (*) (Collection_1_t5370 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m21379_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m21380_gshared (Collection_1_t5370 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m21380(__this, ___item, method) (( void (*) (Collection_1_t5370 *, Object_t *, const MethodInfo*))Collection_1_Add_m21380_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m21381_gshared (Collection_1_t5370 * __this, const MethodInfo* method);
#define Collection_1_Clear_m21381(__this, method) (( void (*) (Collection_1_t5370 *, const MethodInfo*))Collection_1_Clear_m21381_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m21382_gshared (Collection_1_t5370 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m21382(__this, method) (( void (*) (Collection_1_t5370 *, const MethodInfo*))Collection_1_ClearItems_m21382_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m21383_gshared (Collection_1_t5370 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m21383(__this, ___item, method) (( bool (*) (Collection_1_t5370 *, Object_t *, const MethodInfo*))Collection_1_Contains_m21383_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m21384_gshared (Collection_1_t5370 * __this, ObjectU5BU5D_t626* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m21384(__this, ___array, ___index, method) (( void (*) (Collection_1_t5370 *, ObjectU5BU5D_t626*, int32_t, const MethodInfo*))Collection_1_CopyTo_m21384_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m21385_gshared (Collection_1_t5370 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m21385(__this, method) (( Object_t* (*) (Collection_1_t5370 *, const MethodInfo*))Collection_1_GetEnumerator_m21385_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m21386_gshared (Collection_1_t5370 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m21386(__this, ___item, method) (( int32_t (*) (Collection_1_t5370 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m21386_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m21387_gshared (Collection_1_t5370 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m21387(__this, ___index, ___item, method) (( void (*) (Collection_1_t5370 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m21387_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m21388_gshared (Collection_1_t5370 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m21388(__this, ___index, ___item, method) (( void (*) (Collection_1_t5370 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m21388_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m21389_gshared (Collection_1_t5370 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m21389(__this, ___item, method) (( bool (*) (Collection_1_t5370 *, Object_t *, const MethodInfo*))Collection_1_Remove_m21389_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m21390_gshared (Collection_1_t5370 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m21390(__this, ___index, method) (( void (*) (Collection_1_t5370 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m21390_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m21391_gshared (Collection_1_t5370 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m21391(__this, ___index, method) (( void (*) (Collection_1_t5370 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m21391_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m21392_gshared (Collection_1_t5370 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m21392(__this, method) (( int32_t (*) (Collection_1_t5370 *, const MethodInfo*))Collection_1_get_Count_m21392_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m21393_gshared (Collection_1_t5370 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m21393(__this, ___index, method) (( Object_t * (*) (Collection_1_t5370 *, int32_t, const MethodInfo*))Collection_1_get_Item_m21393_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m21394_gshared (Collection_1_t5370 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m21394(__this, ___index, ___value, method) (( void (*) (Collection_1_t5370 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m21394_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m21395_gshared (Collection_1_t5370 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m21395(__this, ___index, ___item, method) (( void (*) (Collection_1_t5370 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m21395_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m21396_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m21396(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m21396_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m21397_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m21397(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m21397_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m21398_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m21398(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m21398_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m21399_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m21399(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m21399_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m21400_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m21400(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m21400_gshared)(__this /* static, unused */, ___list, method)
