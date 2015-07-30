#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>
struct ReadOnlyCollection_1_t6004;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1388;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Tuple`2<System.Type,System.Type>>
struct IList_1_t6003;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Tuple`2<System.Type,System.Type>[]
struct Tuple_2U5BU5D_t5995;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerator_1_t8993;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m31274(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t6004 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m7099_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m31275(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t6004 *, Tuple_2_t1388 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21383_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m31276(__this, method) (( void (*) (ReadOnlyCollection_1_t6004 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m21384_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m31277(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t6004 *, int32_t, Tuple_2_t1388 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m21385_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m31278(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t6004 *, Tuple_2_t1388 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m21386_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m31279(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t6004 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m21387_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m31280(__this, ___index, method) (( Tuple_2_t1388 * (*) (ReadOnlyCollection_1_t6004 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m21388_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m31281(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6004 *, int32_t, Tuple_2_t1388 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m21389_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31282(__this, method) (( bool (*) (ReadOnlyCollection_1_t6004 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21390_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m31283(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t6004 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m21391_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m31284(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t6004 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m21392_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m31285(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6004 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m21393_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m31286(__this, method) (( void (*) (ReadOnlyCollection_1_t6004 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m21394_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m31287(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t6004 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m21395_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m31288(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6004 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m21396_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m31289(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6004 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m21397_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m31290(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t6004 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m21398_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m31291(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t6004 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m21399_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m31292(__this, method) (( bool (*) (ReadOnlyCollection_1_t6004 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m21400_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m31293(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t6004 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m21401_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m31294(__this, method) (( bool (*) (ReadOnlyCollection_1_t6004 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m21402_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m31295(__this, method) (( bool (*) (ReadOnlyCollection_1_t6004 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m21403_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m31296(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t6004 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m21404_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m31297(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6004 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m21405_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::Contains(T)
#define ReadOnlyCollection_1_Contains_m31298(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t6004 *, Tuple_2_t1388 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m21406_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m31299(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t6004 *, Tuple_2U5BU5D_t5995*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m21407_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m31300(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t6004 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m21408_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m31301(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6004 *, Tuple_2_t1388 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m21409_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::get_Count()
#define ReadOnlyCollection_1_get_Count_m31302(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t6004 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m21410_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m31303(__this, ___index, method) (( Tuple_2_t1388 * (*) (ReadOnlyCollection_1_t6004 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m21411_gshared)(__this, ___index, method)
