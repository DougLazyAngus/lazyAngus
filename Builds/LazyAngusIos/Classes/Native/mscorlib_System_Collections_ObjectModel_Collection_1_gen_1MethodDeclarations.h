#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Single>
struct Collection_1_t5730;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Single[]
struct SingleU5BU5D_t586;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6365;
// System.Collections.Generic.IList`1<System.Single>
struct IList_1_t5728;

// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::.ctor()
extern "C" void Collection_1__ctor_m27255_gshared (Collection_1_t5730 * __this, const MethodInfo* method);
#define Collection_1__ctor_m27255(__this, method) (( void (*) (Collection_1_t5730 *, const MethodInfo*))Collection_1__ctor_m27255_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27256_gshared (Collection_1_t5730 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27256(__this, method) (( bool (*) (Collection_1_t5730 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27256_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m27257_gshared (Collection_1_t5730 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m27257(__this, ___array, ___index, method) (( void (*) (Collection_1_t5730 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m27257_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m27258_gshared (Collection_1_t5730 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m27258(__this, method) (( Object_t * (*) (Collection_1_t5730 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m27258_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m27259_gshared (Collection_1_t5730 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m27259(__this, ___value, method) (( int32_t (*) (Collection_1_t5730 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m27259_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m27260_gshared (Collection_1_t5730 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m27260(__this, ___value, method) (( bool (*) (Collection_1_t5730 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m27260_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m27261_gshared (Collection_1_t5730 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m27261(__this, ___value, method) (( int32_t (*) (Collection_1_t5730 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m27261_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m27262_gshared (Collection_1_t5730 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m27262(__this, ___index, ___value, method) (( void (*) (Collection_1_t5730 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m27262_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m27263_gshared (Collection_1_t5730 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m27263(__this, ___value, method) (( void (*) (Collection_1_t5730 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m27263_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m27264_gshared (Collection_1_t5730 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m27264(__this, method) (( bool (*) (Collection_1_t5730 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m27264_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m27265_gshared (Collection_1_t5730 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m27265(__this, method) (( Object_t * (*) (Collection_1_t5730 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m27265_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m27266_gshared (Collection_1_t5730 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m27266(__this, method) (( bool (*) (Collection_1_t5730 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m27266_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m27267_gshared (Collection_1_t5730 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m27267(__this, method) (( bool (*) (Collection_1_t5730 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m27267_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m27268_gshared (Collection_1_t5730 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m27268(__this, ___index, method) (( Object_t * (*) (Collection_1_t5730 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m27268_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m27269_gshared (Collection_1_t5730 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m27269(__this, ___index, ___value, method) (( void (*) (Collection_1_t5730 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m27269_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Add(T)
extern "C" void Collection_1_Add_m27270_gshared (Collection_1_t5730 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Add_m27270(__this, ___item, method) (( void (*) (Collection_1_t5730 *, float, const MethodInfo*))Collection_1_Add_m27270_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Clear()
extern "C" void Collection_1_Clear_m27271_gshared (Collection_1_t5730 * __this, const MethodInfo* method);
#define Collection_1_Clear_m27271(__this, method) (( void (*) (Collection_1_t5730 *, const MethodInfo*))Collection_1_Clear_m27271_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::ClearItems()
extern "C" void Collection_1_ClearItems_m27272_gshared (Collection_1_t5730 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m27272(__this, method) (( void (*) (Collection_1_t5730 *, const MethodInfo*))Collection_1_ClearItems_m27272_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Contains(T)
extern "C" bool Collection_1_Contains_m27273_gshared (Collection_1_t5730 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Contains_m27273(__this, ___item, method) (( bool (*) (Collection_1_t5730 *, float, const MethodInfo*))Collection_1_Contains_m27273_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m27274_gshared (Collection_1_t5730 * __this, SingleU5BU5D_t586* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m27274(__this, ___array, ___index, method) (( void (*) (Collection_1_t5730 *, SingleU5BU5D_t586*, int32_t, const MethodInfo*))Collection_1_CopyTo_m27274_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Single>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m27275_gshared (Collection_1_t5730 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m27275(__this, method) (( Object_t* (*) (Collection_1_t5730 *, const MethodInfo*))Collection_1_GetEnumerator_m27275_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m27276_gshared (Collection_1_t5730 * __this, float ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m27276(__this, ___item, method) (( int32_t (*) (Collection_1_t5730 *, float, const MethodInfo*))Collection_1_IndexOf_m27276_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m27277_gshared (Collection_1_t5730 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_Insert_m27277(__this, ___index, ___item, method) (( void (*) (Collection_1_t5730 *, int32_t, float, const MethodInfo*))Collection_1_Insert_m27277_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m27278_gshared (Collection_1_t5730 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m27278(__this, ___index, ___item, method) (( void (*) (Collection_1_t5730 *, int32_t, float, const MethodInfo*))Collection_1_InsertItem_m27278_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Remove(T)
extern "C" bool Collection_1_Remove_m27279_gshared (Collection_1_t5730 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Remove_m27279(__this, ___item, method) (( bool (*) (Collection_1_t5730 *, float, const MethodInfo*))Collection_1_Remove_m27279_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m27280_gshared (Collection_1_t5730 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m27280(__this, ___index, method) (( void (*) (Collection_1_t5730 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m27280_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m27281_gshared (Collection_1_t5730 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m27281(__this, ___index, method) (( void (*) (Collection_1_t5730 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m27281_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::get_Count()
extern "C" int32_t Collection_1_get_Count_m27282_gshared (Collection_1_t5730 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m27282(__this, method) (( int32_t (*) (Collection_1_t5730 *, const MethodInfo*))Collection_1_get_Count_m27282_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::get_Item(System.Int32)
extern "C" float Collection_1_get_Item_m27283_gshared (Collection_1_t5730 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m27283(__this, ___index, method) (( float (*) (Collection_1_t5730 *, int32_t, const MethodInfo*))Collection_1_get_Item_m27283_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m27284_gshared (Collection_1_t5730 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define Collection_1_set_Item_m27284(__this, ___index, ___value, method) (( void (*) (Collection_1_t5730 *, int32_t, float, const MethodInfo*))Collection_1_set_Item_m27284_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m27285_gshared (Collection_1_t5730 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_SetItem_m27285(__this, ___index, ___item, method) (( void (*) (Collection_1_t5730 *, int32_t, float, const MethodInfo*))Collection_1_SetItem_m27285_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m27286_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m27286(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m27286_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::ConvertItem(System.Object)
extern "C" float Collection_1_ConvertItem_m27287_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m27287(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m27287_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m27288_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m27288(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m27288_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m27289_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m27289(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m27289_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m27290_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m27290(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m27290_gshared)(__this /* static, unused */, ___list, method)
