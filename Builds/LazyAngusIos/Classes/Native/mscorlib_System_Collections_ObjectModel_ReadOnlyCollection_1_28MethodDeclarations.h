#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
struct ReadOnlyCollection_1_t3659;
// UnityEngine.GameObject
struct GameObject_t284;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.GameObject>
struct IList_1_t3658;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t382;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t4369;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m22526(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t3659 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m16711_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m22527(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t3659 *, GameObject_t284 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m16712_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m22528(__this, method) (( void (*) (ReadOnlyCollection_1_t3659 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m16713_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m22529(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t3659 *, int32_t, GameObject_t284 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m16714_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m22530(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t3659 *, GameObject_t284 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m16715_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m22531(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3659 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m16716_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m22532(__this, ___index, method) (( GameObject_t284 * (*) (ReadOnlyCollection_1_t3659 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m16717_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m22533(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3659 *, int32_t, GameObject_t284 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m16718_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22534(__this, method) (( bool (*) (ReadOnlyCollection_1_t3659 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16719_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m22535(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3659 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m16720_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m22536(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3659 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m16721_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m22537(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3659 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m16722_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m22538(__this, method) (( void (*) (ReadOnlyCollection_1_t3659 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m16723_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m22539(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3659 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m16724_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m22540(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3659 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m16725_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m22541(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3659 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m16726_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m22542(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t3659 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m16727_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m22543(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3659 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m16728_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m22544(__this, method) (( bool (*) (ReadOnlyCollection_1_t3659 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m16729_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m22545(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3659 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m16730_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m22546(__this, method) (( bool (*) (ReadOnlyCollection_1_t3659 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m16731_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m22547(__this, method) (( bool (*) (ReadOnlyCollection_1_t3659 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m16732_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m22548(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t3659 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m16733_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m22549(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3659 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m16734_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::Contains(T)
#define ReadOnlyCollection_1_Contains_m22550(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3659 *, GameObject_t284 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m16735_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m22551(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3659 *, GameObjectU5BU5D_t382*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m16736_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m22552(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t3659 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m16737_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m22553(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3659 *, GameObject_t284 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m16738_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Count()
#define ReadOnlyCollection_1_get_Count_m22554(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t3659 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m16739_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m22555(__this, ___index, method) (( GameObject_t284 * (*) (ReadOnlyCollection_1_t3659 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m16740_gshared)(__this, ___index, method)
