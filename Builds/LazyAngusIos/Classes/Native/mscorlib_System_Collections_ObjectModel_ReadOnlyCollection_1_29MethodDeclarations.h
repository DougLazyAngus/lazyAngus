#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
struct ReadOnlyCollection_1_t3753;
// UnityEngine.GameObject
struct GameObject_t310;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.GameObject>
struct IList_1_t3752;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t424;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t4477;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m23653(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t3753 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m17472_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m23654(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t3753 *, GameObject_t310 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m17473_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m23655(__this, method) (( void (*) (ReadOnlyCollection_1_t3753 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m17474_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m23656(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t3753 *, int32_t, GameObject_t310 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m17475_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m23657(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t3753 *, GameObject_t310 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m17476_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m23658(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3753 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m17477_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m23659(__this, ___index, method) (( GameObject_t310 * (*) (ReadOnlyCollection_1_t3753 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m17478_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m23660(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3753 *, int32_t, GameObject_t310 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m17479_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23661(__this, method) (( bool (*) (ReadOnlyCollection_1_t3753 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17480_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m23662(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3753 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m17481_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m23663(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3753 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m17482_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m23664(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3753 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m17483_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m23665(__this, method) (( void (*) (ReadOnlyCollection_1_t3753 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m17484_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m23666(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3753 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m17485_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m23667(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3753 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m17486_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m23668(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3753 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m17487_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m23669(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t3753 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m17488_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m23670(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3753 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m17489_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m23671(__this, method) (( bool (*) (ReadOnlyCollection_1_t3753 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m17490_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m23672(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3753 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m17491_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m23673(__this, method) (( bool (*) (ReadOnlyCollection_1_t3753 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m17492_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m23674(__this, method) (( bool (*) (ReadOnlyCollection_1_t3753 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m17493_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m23675(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t3753 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m17494_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m23676(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3753 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m17495_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::Contains(T)
#define ReadOnlyCollection_1_Contains_m23677(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3753 *, GameObject_t310 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m17496_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m23678(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3753 *, GameObjectU5BU5D_t424*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m17497_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m23679(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t3753 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m17498_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m23680(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3753 *, GameObject_t310 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m17499_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Count()
#define ReadOnlyCollection_1_get_Count_m23681(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t3753 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m17500_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m23682(__this, ___index, method) (( GameObject_t310 * (*) (ReadOnlyCollection_1_t3753 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m17501_gshared)(__this, ___index, method)
