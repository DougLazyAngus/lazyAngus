#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
struct ReadOnlyCollection_1_t5776;
// UnityEngine.Component
struct Component_t761;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<UnityEngine.Component>
struct IList_1_t5775;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// UnityEngine.Component[]
struct ComponentU5BU5D_t5774;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t8952;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m27826(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t5776 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m7371_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27827(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t5776 *, Component_t761 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21657_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m27828(__this, method) (( void (*) (ReadOnlyCollection_1_t5776 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m21658_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m27829(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t5776 *, int32_t, Component_t761 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m21659_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m27830(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t5776 *, Component_t761 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m21660_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m27831(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t5776 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m21661_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m27832(__this, ___index, method) (( Component_t761 * (*) (ReadOnlyCollection_1_t5776 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m21662_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m27833(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t5776 *, int32_t, Component_t761 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m21663_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27834(__this, method) (( bool (*) (ReadOnlyCollection_1_t5776 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21664_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m27835(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t5776 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m21665_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m27836(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t5776 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m21666_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m27837(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t5776 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m21667_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m27838(__this, method) (( void (*) (ReadOnlyCollection_1_t5776 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m21668_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m27839(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t5776 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m21669_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m27840(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t5776 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m21670_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m27841(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t5776 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m21671_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m27842(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t5776 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m21672_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m27843(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t5776 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m21673_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m27844(__this, method) (( bool (*) (ReadOnlyCollection_1_t5776 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m21674_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m27845(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t5776 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m21675_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m27846(__this, method) (( bool (*) (ReadOnlyCollection_1_t5776 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m21676_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m27847(__this, method) (( bool (*) (ReadOnlyCollection_1_t5776 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m21677_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m27848(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t5776 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m21678_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m27849(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t5776 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m21679_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::Contains(T)
#define ReadOnlyCollection_1_Contains_m27850(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t5776 *, Component_t761 *, const MethodInfo*))ReadOnlyCollection_1_Contains_m21680_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m27851(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t5776 *, ComponentU5BU5D_t5774*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m21681_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m27852(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t5776 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m21682_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m27853(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t5776 *, Component_t761 *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m21683_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Count()
#define ReadOnlyCollection_1_get_Count_m27854(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t5776 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m21684_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m27855(__this, ___index, method) (( Component_t761 * (*) (ReadOnlyCollection_1_t5776 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m21685_gshared)(__this, ___index, method)
