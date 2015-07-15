#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
struct ReadOnlyCollection_1_t3643;
// UnityEngine.Component
struct Component_t599;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.Component>
struct IList_1_t3642;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.Component[]
struct ComponentU5BU5D_t3641;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t4353;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m21997(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t3643 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m16891_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21998(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t3643 *, Component_t599 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m16892_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m21999(__this, method) (( void (*) (ReadOnlyCollection_1_t3643 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m16893_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m22000(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t3643 *, int32_t, Component_t599 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m16894_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m22001(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t3643 *, Component_t599 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m16895_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m22002(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3643 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m16896_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m22003(__this, ___index, method) (( Component_t599 * (*) (ReadOnlyCollection_1_t3643 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m16897_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m22004(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3643 *, int32_t, Component_t599 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m16898_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22005(__this, method) (( bool (*) (ReadOnlyCollection_1_t3643 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16899_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m22006(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3643 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m16900_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m22007(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3643 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m16901_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m22008(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3643 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m16902_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m22009(__this, method) (( void (*) (ReadOnlyCollection_1_t3643 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m16903_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m22010(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3643 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m16904_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m22011(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3643 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m16905_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m22012(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3643 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m16906_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m22013(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t3643 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m16907_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m22014(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3643 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m16908_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m22015(__this, method) (( bool (*) (ReadOnlyCollection_1_t3643 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m16909_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m22016(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3643 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m16910_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m22017(__this, method) (( bool (*) (ReadOnlyCollection_1_t3643 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m16911_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m22018(__this, method) (( bool (*) (ReadOnlyCollection_1_t3643 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m16912_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m22019(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t3643 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m16913_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m22020(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3643 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m16914_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::Contains(T)
#define ReadOnlyCollection_1_Contains_m22021(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3643 *, Component_t599 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m16915_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m22022(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3643 *, ComponentU5BU5D_t3641*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m16916_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m22023(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t3643 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m16917_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m22024(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3643 *, Component_t599 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m16918_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Count()
#define ReadOnlyCollection_1_get_Count_m22025(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t3643 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m16919_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m22026(__this, ___index, method) (( Component_t599 * (*) (ReadOnlyCollection_1_t3643 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m16920_gshared)(__this, ___index, method)
