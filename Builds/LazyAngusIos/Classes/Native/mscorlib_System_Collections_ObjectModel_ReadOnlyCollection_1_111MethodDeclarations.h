#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>
struct ReadOnlyCollection_1_t8624;
// System.TimeZoneInfo/AdjustmentRule
struct AdjustmentRule_t3354;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.TimeZoneInfo/AdjustmentRule>
struct IList_1_t8623;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t3357;
// System.Collections.Generic.IEnumerator`1<System.TimeZoneInfo/AdjustmentRule>
struct IEnumerator_1_t9709;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m63573(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t8624 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m7371_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m63574(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t8624 *, AdjustmentRule_t3354 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21657_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m63575(__this, method) (( void (*) (ReadOnlyCollection_1_t8624 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m21658_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m63576(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t8624 *, int32_t, AdjustmentRule_t3354 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m21659_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m63577(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t8624 *, AdjustmentRule_t3354 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m21660_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m63578(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t8624 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m21661_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m63579(__this, ___index, method) (( AdjustmentRule_t3354 * (*) (ReadOnlyCollection_1_t8624 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m21662_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m63580(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t8624 *, int32_t, AdjustmentRule_t3354 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m21663_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m63581(__this, method) (( bool (*) (ReadOnlyCollection_1_t8624 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21664_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m63582(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t8624 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m21665_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m63583(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t8624 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m21666_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m63584(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t8624 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m21667_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m63585(__this, method) (( void (*) (ReadOnlyCollection_1_t8624 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m21668_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m63586(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t8624 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m21669_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m63587(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t8624 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m21670_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m63588(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t8624 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m21671_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m63589(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t8624 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m21672_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m63590(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t8624 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m21673_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m63591(__this, method) (( bool (*) (ReadOnlyCollection_1_t8624 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m21674_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m63592(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t8624 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m21675_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m63593(__this, method) (( bool (*) (ReadOnlyCollection_1_t8624 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m21676_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m63594(__this, method) (( bool (*) (ReadOnlyCollection_1_t8624 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m21677_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m63595(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t8624 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m21678_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m63596(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t8624 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m21679_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::Contains(T)
#define ReadOnlyCollection_1_Contains_m63597(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t8624 *, AdjustmentRule_t3354 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m21680_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m63598(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t8624 *, AdjustmentRuleU5BU5D_t3357*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m21681_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m63599(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t8624 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m21682_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m63600(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t8624 *, AdjustmentRule_t3354 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m21683_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::get_Count()
#define ReadOnlyCollection_1_get_Count_m63601(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t8624 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m21684_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo/AdjustmentRule>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m63602(__this, ___index, method) (( AdjustmentRule_t3354 * (*) (ReadOnlyCollection_1_t8624 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m21685_gshared)(__this, ___index, method)
