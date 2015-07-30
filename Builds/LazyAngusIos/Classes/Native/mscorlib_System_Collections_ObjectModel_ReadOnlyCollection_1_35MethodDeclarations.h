#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
struct ReadOnlyCollection_1_t5731;
// UnityEngine.GameObject
struct GameObject_t352;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.GameObject>
struct IList_1_t5730;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t466;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t8878;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m27721(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t5731 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m7099_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27722(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t5731 *, GameObject_t352 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21383_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m27723(__this, method) (( void (*) (ReadOnlyCollection_1_t5731 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m21384_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m27724(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t5731 *, int32_t, GameObject_t352 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m21385_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m27725(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t5731 *, GameObject_t352 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m21386_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m27726(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t5731 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m21387_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m27727(__this, ___index, method) (( GameObject_t352 * (*) (ReadOnlyCollection_1_t5731 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m21388_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m27728(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t5731 *, int32_t, GameObject_t352 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m21389_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27729(__this, method) (( bool (*) (ReadOnlyCollection_1_t5731 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21390_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m27730(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t5731 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m21391_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m27731(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t5731 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m21392_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m27732(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t5731 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m21393_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m27733(__this, method) (( void (*) (ReadOnlyCollection_1_t5731 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m21394_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m27734(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t5731 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m21395_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m27735(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t5731 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m21396_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m27736(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t5731 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m21397_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m27737(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t5731 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m21398_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m27738(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t5731 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m21399_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m27739(__this, method) (( bool (*) (ReadOnlyCollection_1_t5731 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m21400_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m27740(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t5731 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m21401_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m27741(__this, method) (( bool (*) (ReadOnlyCollection_1_t5731 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m21402_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m27742(__this, method) (( bool (*) (ReadOnlyCollection_1_t5731 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m21403_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m27743(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t5731 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m21404_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m27744(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t5731 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m21405_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::Contains(T)
#define ReadOnlyCollection_1_Contains_m27745(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t5731 *, GameObject_t352 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m21406_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m27746(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t5731 *, GameObjectU5BU5D_t466*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m21407_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m27747(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t5731 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m21408_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m27748(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t5731 *, GameObject_t352 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m21409_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Count()
#define ReadOnlyCollection_1_get_Count_m27749(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t5731 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m21410_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m27750(__this, ___index, method) (( GameObject_t352 * (*) (ReadOnlyCollection_1_t5731 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m21411_gshared)(__this, ___index, method)
