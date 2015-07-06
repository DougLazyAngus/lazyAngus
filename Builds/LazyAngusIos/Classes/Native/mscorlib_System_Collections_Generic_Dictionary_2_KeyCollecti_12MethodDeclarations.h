﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t3359;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1150;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4166;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Int32[]
struct Int32U5BU5D_t476;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_13.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m17760_gshared (KeyCollection_t3359 * __this, Dictionary_2_t1150 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m17760(__this, ___dictionary, method) (( void (*) (KeyCollection_t3359 *, Dictionary_2_t1150 *, const MethodInfo*))KeyCollection__ctor_m17760_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17761_gshared (KeyCollection_t3359 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17761(__this, ___item, method) (( void (*) (KeyCollection_t3359 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m17761_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17762_gshared (KeyCollection_t3359 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17762(__this, method) (( void (*) (KeyCollection_t3359 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m17762_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17763_gshared (KeyCollection_t3359 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17763(__this, ___item, method) (( bool (*) (KeyCollection_t3359 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m17763_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17764_gshared (KeyCollection_t3359 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17764(__this, ___item, method) (( bool (*) (KeyCollection_t3359 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m17764_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17765_gshared (KeyCollection_t3359 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17765(__this, method) (( Object_t* (*) (KeyCollection_t3359 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m17765_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m17766_gshared (KeyCollection_t3359 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m17766(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3359 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m17766_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17767_gshared (KeyCollection_t3359 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17767(__this, method) (( Object_t * (*) (KeyCollection_t3359 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m17767_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17768_gshared (KeyCollection_t3359 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17768(__this, method) (( bool (*) (KeyCollection_t3359 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m17768_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17769_gshared (KeyCollection_t3359 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17769(__this, method) (( bool (*) (KeyCollection_t3359 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m17769_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m17770_gshared (KeyCollection_t3359 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m17770(__this, method) (( Object_t * (*) (KeyCollection_t3359 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m17770_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m17771_gshared (KeyCollection_t3359 * __this, Int32U5BU5D_t476* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m17771(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3359 *, Int32U5BU5D_t476*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m17771_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t3360  KeyCollection_GetEnumerator_m17772_gshared (KeyCollection_t3359 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m17772(__this, method) (( Enumerator_t3360  (*) (KeyCollection_t3359 *, const MethodInfo*))KeyCollection_GetEnumerator_m17772_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m17773_gshared (KeyCollection_t3359 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m17773(__this, method) (( int32_t (*) (KeyCollection_t3359 *, const MethodInfo*))KeyCollection_get_Count_m17773_gshared)(__this, method)
