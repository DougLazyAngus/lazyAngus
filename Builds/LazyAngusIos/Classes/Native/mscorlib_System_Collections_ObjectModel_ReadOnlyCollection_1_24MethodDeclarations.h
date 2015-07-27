#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
struct ReadOnlyCollection_1_t3719;
// UnityEngine.Component
struct Component_t660;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.Component>
struct IList_1_t3718;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.Component[]
struct ComponentU5BU5D_t3717;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t4459;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m23075(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t3719 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m17479_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m23076(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t3719 *, Component_t660 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m17480_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m23077(__this, method) (( void (*) (ReadOnlyCollection_1_t3719 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m17481_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m23078(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t3719 *, int32_t, Component_t660 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m17482_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m23079(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t3719 *, Component_t660 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m17483_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m23080(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3719 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m17484_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m23081(__this, ___index, method) (( Component_t660 * (*) (ReadOnlyCollection_1_t3719 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m17485_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m23082(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3719 *, int32_t, Component_t660 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m17486_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23083(__this, method) (( bool (*) (ReadOnlyCollection_1_t3719 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17487_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m23084(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3719 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m17488_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m23085(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3719 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m17489_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m23086(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3719 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m17490_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m23087(__this, method) (( void (*) (ReadOnlyCollection_1_t3719 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m17491_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m23088(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3719 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m17492_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m23089(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3719 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m17493_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m23090(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3719 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m17494_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m23091(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t3719 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m17495_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m23092(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3719 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m17496_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m23093(__this, method) (( bool (*) (ReadOnlyCollection_1_t3719 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m17497_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m23094(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3719 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m17498_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m23095(__this, method) (( bool (*) (ReadOnlyCollection_1_t3719 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m17499_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m23096(__this, method) (( bool (*) (ReadOnlyCollection_1_t3719 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m17500_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m23097(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t3719 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m17501_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m23098(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3719 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m17502_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::Contains(T)
#define ReadOnlyCollection_1_Contains_m23099(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3719 *, Component_t660 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m17503_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m23100(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3719 *, ComponentU5BU5D_t3717*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m17504_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m23101(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t3719 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m17505_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m23102(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3719 *, Component_t660 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m17506_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Count()
#define ReadOnlyCollection_1_get_Count_m23103(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t3719 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m17507_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m23104(__this, ___index, method) (( Component_t660 * (*) (ReadOnlyCollection_1_t3719 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m17508_gshared)(__this, ___index, method)
