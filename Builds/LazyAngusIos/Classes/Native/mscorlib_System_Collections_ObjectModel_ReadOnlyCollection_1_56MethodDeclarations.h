#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>
struct ReadOnlyCollection_1_t6648;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1458;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Tuple`2<System.Type,System.Type>>
struct IList_1_t6647;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Tuple`2<System.Type,System.Type>[]
struct Tuple_2U5BU5D_t6639;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerator_1_t9721;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m36665(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t6648 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m7528_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m36666(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t6648 *, Tuple_2_t1458 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m25995_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m36667(__this, method) (( void (*) (ReadOnlyCollection_1_t6648 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m25996_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m36668(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t6648 *, int32_t, Tuple_2_t1458 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m25997_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m36669(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t6648 *, Tuple_2_t1458 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m25998_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m36670(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t6648 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m25999_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m36671(__this, ___index, method) (( Tuple_2_t1458 * (*) (ReadOnlyCollection_1_t6648 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m26000_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m36672(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6648 *, int32_t, Tuple_2_t1458 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m26001_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36673(__this, method) (( bool (*) (ReadOnlyCollection_1_t6648 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26002_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m36674(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t6648 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m26003_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m36675(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t6648 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m26004_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m36676(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6648 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m26005_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m36677(__this, method) (( void (*) (ReadOnlyCollection_1_t6648 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m26006_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m36678(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t6648 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m26007_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m36679(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6648 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m26008_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m36680(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6648 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m26009_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m36681(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t6648 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m26010_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m36682(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t6648 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m26011_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m36683(__this, method) (( bool (*) (ReadOnlyCollection_1_t6648 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m26012_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m36684(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t6648 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m26013_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m36685(__this, method) (( bool (*) (ReadOnlyCollection_1_t6648 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m26014_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m36686(__this, method) (( bool (*) (ReadOnlyCollection_1_t6648 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m26015_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m36687(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t6648 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m26016_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m36688(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6648 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m26017_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::Contains(T)
#define ReadOnlyCollection_1_Contains_m36689(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t6648 *, Tuple_2_t1458 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m26018_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m36690(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t6648 *, Tuple_2U5BU5D_t6639*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m26019_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m36691(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t6648 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m26020_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m36692(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6648 *, Tuple_2_t1458 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m26021_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::get_Count()
#define ReadOnlyCollection_1_get_Count_m36693(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t6648 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m26022_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m36694(__this, ___index, method) (( Tuple_2_t1458 * (*) (ReadOnlyCollection_1_t6648 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m26023_gshared)(__this, ___index, method)
