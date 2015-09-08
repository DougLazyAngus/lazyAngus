#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t6584;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6583;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6920;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4566;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_43.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m35849_gshared (KeyCollection_t6584 * __this, Dictionary_2_t6583 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m35849(__this, ___dictionary, method) (( void (*) (KeyCollection_t6584 *, Dictionary_2_t6583 *, const MethodInfo*))KeyCollection__ctor_m35849_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m35850_gshared (KeyCollection_t6584 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m35850(__this, ___item, method) (( void (*) (KeyCollection_t6584 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m35850_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m35851_gshared (KeyCollection_t6584 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m35851(__this, method) (( void (*) (KeyCollection_t6584 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m35851_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m35852_gshared (KeyCollection_t6584 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m35852(__this, ___item, method) (( bool (*) (KeyCollection_t6584 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m35852_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m35853_gshared (KeyCollection_t6584 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m35853(__this, ___item, method) (( bool (*) (KeyCollection_t6584 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m35853_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m35854_gshared (KeyCollection_t6584 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m35854(__this, method) (( Object_t* (*) (KeyCollection_t6584 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m35854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m35855_gshared (KeyCollection_t6584 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m35855(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6584 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m35855_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m35856_gshared (KeyCollection_t6584 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m35856(__this, method) (( Object_t * (*) (KeyCollection_t6584 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m35856_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m35857_gshared (KeyCollection_t6584 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m35857(__this, method) (( bool (*) (KeyCollection_t6584 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m35857_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m35858_gshared (KeyCollection_t6584 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m35858(__this, method) (( bool (*) (KeyCollection_t6584 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m35858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m35859_gshared (KeyCollection_t6584 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m35859(__this, method) (( Object_t * (*) (KeyCollection_t6584 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m35859_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m35860_gshared (KeyCollection_t6584 * __this, Int64U5BU5D_t4566* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m35860(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6584 *, Int64U5BU5D_t4566*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m35860_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t6585  KeyCollection_GetEnumerator_m35861_gshared (KeyCollection_t6584 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m35861(__this, method) (( Enumerator_t6585  (*) (KeyCollection_t6584 *, const MethodInfo*))KeyCollection_GetEnumerator_m35861_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m35862_gshared (KeyCollection_t6584 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m35862(__this, method) (( int32_t (*) (KeyCollection_t6584 *, const MethodInfo*))KeyCollection_get_Count_m35862_gshared)(__this, method)
