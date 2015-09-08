#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.SByte>
struct Collection_1_t7003;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.SByte[]
struct SByteU5BU5D_t5373;
// System.Collections.Generic.IEnumerator`1<System.SByte>
struct IEnumerator_1_t6893;
// System.Collections.Generic.IList`1<System.SByte>
struct IList_1_t6889;

// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::.ctor()
extern "C" void Collection_1__ctor_m41259_gshared (Collection_1_t7003 * __this, const MethodInfo* method);
#define Collection_1__ctor_m41259(__this, method) (( void (*) (Collection_1_t7003 *, const MethodInfo*))Collection_1__ctor_m41259_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41260_gshared (Collection_1_t7003 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41260(__this, method) (( bool (*) (Collection_1_t7003 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41260_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m41261_gshared (Collection_1_t7003 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m41261(__this, ___array, ___index, method) (( void (*) (Collection_1_t7003 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m41261_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m41262_gshared (Collection_1_t7003 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m41262(__this, method) (( Object_t * (*) (Collection_1_t7003 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m41262_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m41263_gshared (Collection_1_t7003 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m41263(__this, ___value, method) (( int32_t (*) (Collection_1_t7003 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m41263_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m41264_gshared (Collection_1_t7003 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m41264(__this, ___value, method) (( bool (*) (Collection_1_t7003 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m41264_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m41265_gshared (Collection_1_t7003 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m41265(__this, ___value, method) (( int32_t (*) (Collection_1_t7003 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m41265_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m41266_gshared (Collection_1_t7003 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m41266(__this, ___index, ___value, method) (( void (*) (Collection_1_t7003 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m41266_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m41267_gshared (Collection_1_t7003 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m41267(__this, ___value, method) (( void (*) (Collection_1_t7003 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m41267_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m41268_gshared (Collection_1_t7003 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m41268(__this, method) (( bool (*) (Collection_1_t7003 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m41268_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m41269_gshared (Collection_1_t7003 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m41269(__this, method) (( Object_t * (*) (Collection_1_t7003 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m41269_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m41270_gshared (Collection_1_t7003 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m41270(__this, method) (( bool (*) (Collection_1_t7003 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m41270_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m41271_gshared (Collection_1_t7003 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m41271(__this, method) (( bool (*) (Collection_1_t7003 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m41271_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m41272_gshared (Collection_1_t7003 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m41272(__this, ___index, method) (( Object_t * (*) (Collection_1_t7003 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m41272_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m41273_gshared (Collection_1_t7003 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m41273(__this, ___index, ___value, method) (( void (*) (Collection_1_t7003 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m41273_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::Add(T)
extern "C" void Collection_1_Add_m41274_gshared (Collection_1_t7003 * __this, int8_t ___item, const MethodInfo* method);
#define Collection_1_Add_m41274(__this, ___item, method) (( void (*) (Collection_1_t7003 *, int8_t, const MethodInfo*))Collection_1_Add_m41274_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::Clear()
extern "C" void Collection_1_Clear_m41275_gshared (Collection_1_t7003 * __this, const MethodInfo* method);
#define Collection_1_Clear_m41275(__this, method) (( void (*) (Collection_1_t7003 *, const MethodInfo*))Collection_1_Clear_m41275_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::ClearItems()
extern "C" void Collection_1_ClearItems_m41276_gshared (Collection_1_t7003 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m41276(__this, method) (( void (*) (Collection_1_t7003 *, const MethodInfo*))Collection_1_ClearItems_m41276_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::Contains(T)
extern "C" bool Collection_1_Contains_m41277_gshared (Collection_1_t7003 * __this, int8_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m41277(__this, ___item, method) (( bool (*) (Collection_1_t7003 *, int8_t, const MethodInfo*))Collection_1_Contains_m41277_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m41278_gshared (Collection_1_t7003 * __this, SByteU5BU5D_t5373* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m41278(__this, ___array, ___index, method) (( void (*) (Collection_1_t7003 *, SByteU5BU5D_t5373*, int32_t, const MethodInfo*))Collection_1_CopyTo_m41278_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.SByte>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m41279_gshared (Collection_1_t7003 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m41279(__this, method) (( Object_t* (*) (Collection_1_t7003 *, const MethodInfo*))Collection_1_GetEnumerator_m41279_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.SByte>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m41280_gshared (Collection_1_t7003 * __this, int8_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m41280(__this, ___item, method) (( int32_t (*) (Collection_1_t7003 *, int8_t, const MethodInfo*))Collection_1_IndexOf_m41280_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m41281_gshared (Collection_1_t7003 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m41281(__this, ___index, ___item, method) (( void (*) (Collection_1_t7003 *, int32_t, int8_t, const MethodInfo*))Collection_1_Insert_m41281_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m41282_gshared (Collection_1_t7003 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m41282(__this, ___index, ___item, method) (( void (*) (Collection_1_t7003 *, int32_t, int8_t, const MethodInfo*))Collection_1_InsertItem_m41282_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::Remove(T)
extern "C" bool Collection_1_Remove_m41283_gshared (Collection_1_t7003 * __this, int8_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m41283(__this, ___item, method) (( bool (*) (Collection_1_t7003 *, int8_t, const MethodInfo*))Collection_1_Remove_m41283_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m41284_gshared (Collection_1_t7003 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m41284(__this, ___index, method) (( void (*) (Collection_1_t7003 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m41284_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m41285_gshared (Collection_1_t7003 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m41285(__this, ___index, method) (( void (*) (Collection_1_t7003 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m41285_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.SByte>::get_Count()
extern "C" int32_t Collection_1_get_Count_m41286_gshared (Collection_1_t7003 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m41286(__this, method) (( int32_t (*) (Collection_1_t7003 *, const MethodInfo*))Collection_1_get_Count_m41286_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.SByte>::get_Item(System.Int32)
extern "C" int8_t Collection_1_get_Item_m41287_gshared (Collection_1_t7003 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m41287(__this, ___index, method) (( int8_t (*) (Collection_1_t7003 *, int32_t, const MethodInfo*))Collection_1_get_Item_m41287_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m41288_gshared (Collection_1_t7003 * __this, int32_t ___index, int8_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m41288(__this, ___index, ___value, method) (( void (*) (Collection_1_t7003 *, int32_t, int8_t, const MethodInfo*))Collection_1_set_Item_m41288_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m41289_gshared (Collection_1_t7003 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m41289(__this, ___index, ___item, method) (( void (*) (Collection_1_t7003 *, int32_t, int8_t, const MethodInfo*))Collection_1_SetItem_m41289_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m41290_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m41290(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m41290_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.SByte>::ConvertItem(System.Object)
extern "C" int8_t Collection_1_ConvertItem_m41291_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m41291(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m41291_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m41292_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m41292(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m41292_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m41293_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m41293(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m41293_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m41294_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m41294(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m41294_gshared)(__this /* static, unused */, ___list, method)
