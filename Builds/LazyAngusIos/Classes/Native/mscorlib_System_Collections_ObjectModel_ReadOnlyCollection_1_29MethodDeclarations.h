#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
struct ReadOnlyCollection_1_t3754;
// UnityEngine.GameObject
struct GameObject_t312;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.GameObject>
struct IList_1_t3753;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t426;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t4478;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m23660(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t3754 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m17479_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m23661(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t3754 *, GameObject_t312 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m17480_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m23662(__this, method) (( void (*) (ReadOnlyCollection_1_t3754 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m17481_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m23663(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t3754 *, int32_t, GameObject_t312 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m17482_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m23664(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t3754 *, GameObject_t312 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m17483_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m23665(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3754 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m17484_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m23666(__this, ___index, method) (( GameObject_t312 * (*) (ReadOnlyCollection_1_t3754 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m17485_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m23667(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3754 *, int32_t, GameObject_t312 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m17486_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23668(__this, method) (( bool (*) (ReadOnlyCollection_1_t3754 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17487_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m23669(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3754 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m17488_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m23670(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3754 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m17489_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m23671(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3754 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m17490_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m23672(__this, method) (( void (*) (ReadOnlyCollection_1_t3754 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m17491_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m23673(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3754 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m17492_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m23674(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3754 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m17493_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m23675(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3754 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m17494_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m23676(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t3754 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m17495_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m23677(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3754 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m17496_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m23678(__this, method) (( bool (*) (ReadOnlyCollection_1_t3754 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m17497_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m23679(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3754 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m17498_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m23680(__this, method) (( bool (*) (ReadOnlyCollection_1_t3754 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m17499_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m23681(__this, method) (( bool (*) (ReadOnlyCollection_1_t3754 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m17500_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m23682(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t3754 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m17501_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m23683(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3754 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m17502_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::Contains(T)
#define ReadOnlyCollection_1_Contains_m23684(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3754 *, GameObject_t312 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m17503_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m23685(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3754 *, GameObjectU5BU5D_t426*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m17504_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m23686(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t3754 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m17505_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m23687(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3754 *, GameObject_t312 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m17506_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Count()
#define ReadOnlyCollection_1_get_Count_m23688(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t3754 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m17507_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m23689(__this, ___index, method) (( GameObject_t312 * (*) (ReadOnlyCollection_1_t3754 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m17508_gshared)(__this, ___index, method)
