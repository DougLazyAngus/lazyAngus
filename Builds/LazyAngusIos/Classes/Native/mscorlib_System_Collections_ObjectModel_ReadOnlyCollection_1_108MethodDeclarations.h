#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>
struct ReadOnlyCollection_1_t8550;
// System.TimeZoneInfo/AdjustmentRule
struct AdjustmentRule_t3304;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.TimeZoneInfo/AdjustmentRule>
struct IList_1_t8549;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t3307;
// System.Collections.Generic.IEnumerator`1<System.TimeZoneInfo/AdjustmentRule>
struct IEnumerator_1_t9616;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m62873(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t8550 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m7099_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m62874(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t8550 *, AdjustmentRule_t3304 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21383_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m62875(__this, method) (( void (*) (ReadOnlyCollection_1_t8550 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m21384_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m62876(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t8550 *, int32_t, AdjustmentRule_t3304 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m21385_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m62877(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t8550 *, AdjustmentRule_t3304 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m21386_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m62878(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t8550 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m21387_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m62879(__this, ___index, method) (( AdjustmentRule_t3304 * (*) (ReadOnlyCollection_1_t8550 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m21388_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m62880(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t8550 *, int32_t, AdjustmentRule_t3304 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m21389_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62881(__this, method) (( bool (*) (ReadOnlyCollection_1_t8550 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21390_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m62882(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t8550 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m21391_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m62883(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t8550 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m21392_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m62884(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t8550 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m21393_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m62885(__this, method) (( void (*) (ReadOnlyCollection_1_t8550 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m21394_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m62886(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t8550 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m21395_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m62887(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t8550 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m21396_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m62888(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t8550 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m21397_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m62889(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t8550 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m21398_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m62890(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t8550 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m21399_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m62891(__this, method) (( bool (*) (ReadOnlyCollection_1_t8550 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m21400_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m62892(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t8550 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m21401_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m62893(__this, method) (( bool (*) (ReadOnlyCollection_1_t8550 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m21402_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m62894(__this, method) (( bool (*) (ReadOnlyCollection_1_t8550 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m21403_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m62895(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t8550 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m21404_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m62896(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t8550 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m21405_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::Contains(T)
#define ReadOnlyCollection_1_Contains_m62897(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t8550 *, AdjustmentRule_t3304 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m21406_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m62898(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t8550 *, AdjustmentRuleU5BU5D_t3307*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m21407_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m62899(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t8550 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m21408_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m62900(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t8550 *, AdjustmentRule_t3304 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m21409_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::get_Count()
#define ReadOnlyCollection_1_get_Count_m62901(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t8550 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m21410_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m62902(__this, ___index, method) (( AdjustmentRule_t3304 * (*) (ReadOnlyCollection_1_t8550 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m21411_gshared)(__this, ___index, method)
