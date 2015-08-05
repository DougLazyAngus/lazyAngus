#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>
struct ReadOnlyCollection_1_t8554;
// System.TimeZoneInfo/AdjustmentRule
struct AdjustmentRule_t3308;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.TimeZoneInfo/AdjustmentRule>
struct IList_1_t8553;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t3311;
// System.Collections.Generic.IEnumerator`1<System.TimeZoneInfo/AdjustmentRule>
struct IEnumerator_1_t9620;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m62904(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t8554 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m7127_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m62905(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t8554 *, AdjustmentRule_t3308 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21414_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m62906(__this, method) (( void (*) (ReadOnlyCollection_1_t8554 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m21415_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m62907(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t8554 *, int32_t, AdjustmentRule_t3308 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m21416_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m62908(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t8554 *, AdjustmentRule_t3308 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m21417_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m62909(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t8554 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m21418_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m62910(__this, ___index, method) (( AdjustmentRule_t3308 * (*) (ReadOnlyCollection_1_t8554 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m21419_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m62911(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t8554 *, int32_t, AdjustmentRule_t3308 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m21420_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m62912(__this, method) (( bool (*) (ReadOnlyCollection_1_t8554 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21421_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m62913(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t8554 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m21422_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m62914(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t8554 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m21423_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m62915(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t8554 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m21424_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m62916(__this, method) (( void (*) (ReadOnlyCollection_1_t8554 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m21425_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m62917(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t8554 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m21426_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m62918(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t8554 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m21427_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m62919(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t8554 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m21428_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m62920(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t8554 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m21429_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m62921(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t8554 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m21430_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m62922(__this, method) (( bool (*) (ReadOnlyCollection_1_t8554 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m21431_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m62923(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t8554 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m21432_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m62924(__this, method) (( bool (*) (ReadOnlyCollection_1_t8554 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m21433_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m62925(__this, method) (( bool (*) (ReadOnlyCollection_1_t8554 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m21434_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m62926(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t8554 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m21435_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m62927(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t8554 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m21436_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::Contains(T)
#define ReadOnlyCollection_1_Contains_m62928(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t8554 *, AdjustmentRule_t3308 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m21437_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m62929(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t8554 *, AdjustmentRuleU5BU5D_t3311*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m21438_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m62930(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t8554 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m21439_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m62931(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t8554 *, AdjustmentRule_t3308 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m21440_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::get_Count()
#define ReadOnlyCollection_1_get_Count_m62932(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t8554 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m21441_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m62933(__this, ___index, method) (( AdjustmentRule_t3308 * (*) (ReadOnlyCollection_1_t8554 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m21442_gshared)(__this, ___index, method)
