#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct ReadOnlyCollection_1_t7506;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IList_1_t7505;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7503;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7221;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_79MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m49784(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t7506 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m49638_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m49785(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t7506 *, KeyValuePair_2_t7216 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m49639_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m49786(__this, method) (( void (*) (ReadOnlyCollection_1_t7506 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m49640_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m49787(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t7506 *, int32_t, KeyValuePair_2_t7216 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m49641_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m49788(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t7506 *, KeyValuePair_2_t7216 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m49642_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m49789(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t7506 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m49643_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m49790(__this, ___index, method) (( KeyValuePair_2_t7216  (*) (ReadOnlyCollection_1_t7506 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m49644_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m49791(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t7506 *, int32_t, KeyValuePair_2_t7216 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m49645_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49792(__this, method) (( bool (*) (ReadOnlyCollection_1_t7506 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49646_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m49793(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t7506 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m49647_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m49794(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t7506 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m49648_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m49795(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t7506 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m49649_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m49796(__this, method) (( void (*) (ReadOnlyCollection_1_t7506 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m49650_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m49797(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t7506 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m49651_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m49798(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t7506 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m49652_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m49799(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t7506 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m49653_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m49800(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t7506 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m49654_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m49801(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t7506 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m49655_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m49802(__this, method) (( bool (*) (ReadOnlyCollection_1_t7506 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m49656_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m49803(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t7506 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m49657_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m49804(__this, method) (( bool (*) (ReadOnlyCollection_1_t7506 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m49658_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m49805(__this, method) (( bool (*) (ReadOnlyCollection_1_t7506 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m49659_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m49806(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t7506 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m49660_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m49807(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t7506 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m49661_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Contains(T)
#define ReadOnlyCollection_1_Contains_m49808(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t7506 *, KeyValuePair_2_t7216 , const MethodInfo*))ReadOnlyCollection_1_Contains_m49662_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m49809(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t7506 *, KeyValuePair_2U5BU5D_t7503*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m49663_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m49810(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t7506 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m49664_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m49811(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t7506 *, KeyValuePair_2_t7216 , const MethodInfo*))ReadOnlyCollection_1_IndexOf_m49665_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Count()
#define ReadOnlyCollection_1_get_Count_m49812(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t7506 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m49666_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m49813(__this, ___index, method) (( KeyValuePair_2_t7216  (*) (ReadOnlyCollection_1_t7506 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m49667_gshared)(__this, ___index, method)
