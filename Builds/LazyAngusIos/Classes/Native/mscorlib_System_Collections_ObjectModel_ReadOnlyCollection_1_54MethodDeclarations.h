#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>
struct ReadOnlyCollection_1_t6083;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1439;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Tuple`2<System.Type,System.Type>>
struct IList_1_t6082;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Tuple`2<System.Type,System.Type>[]
struct Tuple_2U5BU5D_t6074;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerator_1_t9094;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m32069(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t6083 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m7359_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m32070(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t6083 *, Tuple_2_t1439 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21644_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m32071(__this, method) (( void (*) (ReadOnlyCollection_1_t6083 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m21645_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m32072(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t6083 *, int32_t, Tuple_2_t1439 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m21646_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m32073(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t6083 *, Tuple_2_t1439 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m21647_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m32074(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t6083 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m21648_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m32075(__this, ___index, method) (( Tuple_2_t1439 * (*) (ReadOnlyCollection_1_t6083 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m21649_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m32076(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6083 *, int32_t, Tuple_2_t1439 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m21650_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32077(__this, method) (( bool (*) (ReadOnlyCollection_1_t6083 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21651_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m32078(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t6083 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m21652_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m32079(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t6083 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m21653_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m32080(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6083 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m21654_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m32081(__this, method) (( void (*) (ReadOnlyCollection_1_t6083 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m21655_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m32082(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t6083 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m21656_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m32083(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6083 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m21657_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m32084(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6083 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m21658_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m32085(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t6083 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m21659_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m32086(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t6083 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m21660_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m32087(__this, method) (( bool (*) (ReadOnlyCollection_1_t6083 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m21661_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m32088(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t6083 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m21662_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m32089(__this, method) (( bool (*) (ReadOnlyCollection_1_t6083 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m21663_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m32090(__this, method) (( bool (*) (ReadOnlyCollection_1_t6083 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m21664_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m32091(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t6083 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m21665_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m32092(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6083 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m21666_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::Contains(T)
#define ReadOnlyCollection_1_Contains_m32093(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t6083 *, Tuple_2_t1439 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m21667_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m32094(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t6083 *, Tuple_2U5BU5D_t6074*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m21668_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m32095(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t6083 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m21669_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m32096(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6083 *, Tuple_2_t1439 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m21670_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::get_Count()
#define ReadOnlyCollection_1_get_Count_m32097(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t6083 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m21671_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m32098(__this, ___index, method) (( Tuple_2_t1439 * (*) (ReadOnlyCollection_1_t6083 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m21672_gshared)(__this, ___index, method)
