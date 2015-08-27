﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.UInt64>
struct Collection_1_t6701;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.UInt64[]
struct UInt64U5BU5D_t4711;
// System.Collections.Generic.IEnumerator`1<System.UInt64>
struct IEnumerator_1_t6359;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t6355;

// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::.ctor()
extern "C" void Collection_1__ctor_m39979_gshared (Collection_1_t6701 * __this, const MethodInfo* method);
#define Collection_1__ctor_m39979(__this, method) (( void (*) (Collection_1_t6701 *, const MethodInfo*))Collection_1__ctor_m39979_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39980_gshared (Collection_1_t6701 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39980(__this, method) (( bool (*) (Collection_1_t6701 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39980_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m39981_gshared (Collection_1_t6701 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m39981(__this, ___array, ___index, method) (( void (*) (Collection_1_t6701 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m39981_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m39982_gshared (Collection_1_t6701 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m39982(__this, method) (( Object_t * (*) (Collection_1_t6701 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m39982_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m39983_gshared (Collection_1_t6701 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m39983(__this, ___value, method) (( int32_t (*) (Collection_1_t6701 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m39983_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m39984_gshared (Collection_1_t6701 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m39984(__this, ___value, method) (( bool (*) (Collection_1_t6701 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m39984_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m39985_gshared (Collection_1_t6701 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m39985(__this, ___value, method) (( int32_t (*) (Collection_1_t6701 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m39985_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m39986_gshared (Collection_1_t6701 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m39986(__this, ___index, ___value, method) (( void (*) (Collection_1_t6701 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m39986_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m39987_gshared (Collection_1_t6701 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m39987(__this, ___value, method) (( void (*) (Collection_1_t6701 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m39987_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m39988_gshared (Collection_1_t6701 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m39988(__this, method) (( bool (*) (Collection_1_t6701 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m39988_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m39989_gshared (Collection_1_t6701 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m39989(__this, method) (( Object_t * (*) (Collection_1_t6701 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m39989_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m39990_gshared (Collection_1_t6701 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m39990(__this, method) (( bool (*) (Collection_1_t6701 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m39990_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m39991_gshared (Collection_1_t6701 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m39991(__this, method) (( bool (*) (Collection_1_t6701 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m39991_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m39992_gshared (Collection_1_t6701 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m39992(__this, ___index, method) (( Object_t * (*) (Collection_1_t6701 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m39992_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m39993_gshared (Collection_1_t6701 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m39993(__this, ___index, ___value, method) (( void (*) (Collection_1_t6701 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m39993_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::Add(T)
extern "C" void Collection_1_Add_m39994_gshared (Collection_1_t6701 * __this, uint64_t ___item, const MethodInfo* method);
#define Collection_1_Add_m39994(__this, ___item, method) (( void (*) (Collection_1_t6701 *, uint64_t, const MethodInfo*))Collection_1_Add_m39994_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::Clear()
extern "C" void Collection_1_Clear_m39995_gshared (Collection_1_t6701 * __this, const MethodInfo* method);
#define Collection_1_Clear_m39995(__this, method) (( void (*) (Collection_1_t6701 *, const MethodInfo*))Collection_1_Clear_m39995_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::ClearItems()
extern "C" void Collection_1_ClearItems_m39996_gshared (Collection_1_t6701 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m39996(__this, method) (( void (*) (Collection_1_t6701 *, const MethodInfo*))Collection_1_ClearItems_m39996_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt64>::Contains(T)
extern "C" bool Collection_1_Contains_m39997_gshared (Collection_1_t6701 * __this, uint64_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m39997(__this, ___item, method) (( bool (*) (Collection_1_t6701 *, uint64_t, const MethodInfo*))Collection_1_Contains_m39997_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m39998_gshared (Collection_1_t6701 * __this, UInt64U5BU5D_t4711* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m39998(__this, ___array, ___index, method) (( void (*) (Collection_1_t6701 *, UInt64U5BU5D_t4711*, int32_t, const MethodInfo*))Collection_1_CopyTo_m39998_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.UInt64>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m39999_gshared (Collection_1_t6701 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m39999(__this, method) (( Object_t* (*) (Collection_1_t6701 *, const MethodInfo*))Collection_1_GetEnumerator_m39999_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.UInt64>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m40000_gshared (Collection_1_t6701 * __this, uint64_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m40000(__this, ___item, method) (( int32_t (*) (Collection_1_t6701 *, uint64_t, const MethodInfo*))Collection_1_IndexOf_m40000_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m40001_gshared (Collection_1_t6701 * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m40001(__this, ___index, ___item, method) (( void (*) (Collection_1_t6701 *, int32_t, uint64_t, const MethodInfo*))Collection_1_Insert_m40001_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m40002_gshared (Collection_1_t6701 * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m40002(__this, ___index, ___item, method) (( void (*) (Collection_1_t6701 *, int32_t, uint64_t, const MethodInfo*))Collection_1_InsertItem_m40002_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt64>::Remove(T)
extern "C" bool Collection_1_Remove_m40003_gshared (Collection_1_t6701 * __this, uint64_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m40003(__this, ___item, method) (( bool (*) (Collection_1_t6701 *, uint64_t, const MethodInfo*))Collection_1_Remove_m40003_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m40004_gshared (Collection_1_t6701 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m40004(__this, ___index, method) (( void (*) (Collection_1_t6701 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m40004_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m40005_gshared (Collection_1_t6701 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m40005(__this, ___index, method) (( void (*) (Collection_1_t6701 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m40005_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.UInt64>::get_Count()
extern "C" int32_t Collection_1_get_Count_m40006_gshared (Collection_1_t6701 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m40006(__this, method) (( int32_t (*) (Collection_1_t6701 *, const MethodInfo*))Collection_1_get_Count_m40006_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.UInt64>::get_Item(System.Int32)
extern "C" uint64_t Collection_1_get_Item_m40007_gshared (Collection_1_t6701 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m40007(__this, ___index, method) (( uint64_t (*) (Collection_1_t6701 *, int32_t, const MethodInfo*))Collection_1_get_Item_m40007_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m40008_gshared (Collection_1_t6701 * __this, int32_t ___index, uint64_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m40008(__this, ___index, ___value, method) (( void (*) (Collection_1_t6701 *, int32_t, uint64_t, const MethodInfo*))Collection_1_set_Item_m40008_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m40009_gshared (Collection_1_t6701 * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m40009(__this, ___index, ___item, method) (( void (*) (Collection_1_t6701 *, int32_t, uint64_t, const MethodInfo*))Collection_1_SetItem_m40009_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt64>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m40010_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m40010(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m40010_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.UInt64>::ConvertItem(System.Object)
extern "C" uint64_t Collection_1_ConvertItem_m40011_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m40011(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m40011_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.UInt64>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m40012_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m40012(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m40012_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt64>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m40013_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m40013(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m40013_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.UInt64>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m40014_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m40014(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m40014_gshared)(__this /* static, unused */, ___list, method)
