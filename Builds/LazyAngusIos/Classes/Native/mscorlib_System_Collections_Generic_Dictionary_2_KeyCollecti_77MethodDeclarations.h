#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t8341;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8340;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6345;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4872;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_78.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m59714_gshared (KeyCollection_t8341 * __this, Dictionary_2_t8340 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m59714(__this, ___dictionary, method) (( void (*) (KeyCollection_t8341 *, Dictionary_2_t8340 *, const MethodInfo*))KeyCollection__ctor_m59714_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m59715_gshared (KeyCollection_t8341 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m59715(__this, ___item, method) (( void (*) (KeyCollection_t8341 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m59715_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m59716_gshared (KeyCollection_t8341 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m59716(__this, method) (( void (*) (KeyCollection_t8341 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m59716_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m59717_gshared (KeyCollection_t8341 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m59717(__this, ___item, method) (( bool (*) (KeyCollection_t8341 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m59717_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m59718_gshared (KeyCollection_t8341 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m59718(__this, ___item, method) (( bool (*) (KeyCollection_t8341 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m59718_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m59719_gshared (KeyCollection_t8341 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m59719(__this, method) (( Object_t* (*) (KeyCollection_t8341 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m59719_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m59720_gshared (KeyCollection_t8341 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m59720(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8341 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m59720_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m59721_gshared (KeyCollection_t8341 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m59721(__this, method) (( Object_t * (*) (KeyCollection_t8341 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m59721_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m59722_gshared (KeyCollection_t8341 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m59722(__this, method) (( bool (*) (KeyCollection_t8341 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m59722_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m59723_gshared (KeyCollection_t8341 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m59723(__this, method) (( bool (*) (KeyCollection_t8341 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m59723_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m59724_gshared (KeyCollection_t8341 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m59724(__this, method) (( Object_t * (*) (KeyCollection_t8341 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m59724_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m59725_gshared (KeyCollection_t8341 * __this, Int64U5BU5D_t4872* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m59725(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8341 *, Int64U5BU5D_t4872*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m59725_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8342  KeyCollection_GetEnumerator_m59726_gshared (KeyCollection_t8341 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m59726(__this, method) (( Enumerator_t8342  (*) (KeyCollection_t8341 *, const MethodInfo*))KeyCollection_GetEnumerator_m59726_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m59727_gshared (KeyCollection_t8341 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m59727(__this, method) (( int32_t (*) (KeyCollection_t8341 *, const MethodInfo*))KeyCollection_get_Count_m59727_gshared)(__this, method)
