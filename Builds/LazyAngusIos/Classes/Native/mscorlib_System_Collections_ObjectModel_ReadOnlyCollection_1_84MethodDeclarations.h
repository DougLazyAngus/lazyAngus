#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct ReadOnlyCollection_1_t7636;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IList_1_t7635;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7633;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7239;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_83MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m51338(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t7636 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m51192_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m51339(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t7636 *, KeyValuePair_2_t7234 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m51193_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m51340(__this, method) (( void (*) (ReadOnlyCollection_1_t7636 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m51194_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m51341(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t7636 *, int32_t, KeyValuePair_2_t7234 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m51195_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m51342(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t7636 *, KeyValuePair_2_t7234 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m51196_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m51343(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t7636 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m51197_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m51344(__this, ___index, method) (( KeyValuePair_2_t7234  (*) (ReadOnlyCollection_1_t7636 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m51198_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m51345(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t7636 *, int32_t, KeyValuePair_2_t7234 , const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m51199_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51346(__this, method) (( bool (*) (ReadOnlyCollection_1_t7636 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51200_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m51347(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t7636 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m51201_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m51348(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t7636 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m51202_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m51349(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t7636 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m51203_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m51350(__this, method) (( void (*) (ReadOnlyCollection_1_t7636 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m51204_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m51351(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t7636 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m51205_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m51352(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t7636 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m51206_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m51353(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t7636 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m51207_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m51354(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t7636 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m51208_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m51355(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t7636 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m51209_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m51356(__this, method) (( bool (*) (ReadOnlyCollection_1_t7636 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m51210_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m51357(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t7636 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m51211_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m51358(__this, method) (( bool (*) (ReadOnlyCollection_1_t7636 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m51212_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m51359(__this, method) (( bool (*) (ReadOnlyCollection_1_t7636 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m51213_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m51360(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t7636 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m51214_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m51361(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t7636 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m51215_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Contains(T)
#define ReadOnlyCollection_1_Contains_m51362(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t7636 *, KeyValuePair_2_t7234 , const MethodInfo*))ReadOnlyCollection_1_Contains_m51216_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m51363(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t7636 *, KeyValuePair_2U5BU5D_t7633*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m51217_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m51364(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t7636 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m51218_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m51365(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t7636 *, KeyValuePair_2_t7234 , const MethodInfo*))ReadOnlyCollection_1_IndexOf_m51219_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Count()
#define ReadOnlyCollection_1_get_Count_m51366(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t7636 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m51220_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m51367(__this, ___index, method) (( KeyValuePair_2_t7234  (*) (ReadOnlyCollection_1_t7636 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m51221_gshared)(__this, ___index, method)
