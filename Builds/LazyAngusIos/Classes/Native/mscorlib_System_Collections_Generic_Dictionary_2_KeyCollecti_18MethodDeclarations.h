﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t3418;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t154;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t4135;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_56.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_16MethodDeclarations.h"
#define KeyCollection__ctor_m18586(__this, ___dictionary, method) (( void (*) (KeyCollection_t3418 *, Dictionary_2_t154 *, const MethodInfo*))KeyCollection__ctor_m18504_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m18587(__this, ___item, method) (( void (*) (KeyCollection_t3418 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m18505_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m18588(__this, method) (( void (*) (KeyCollection_t3418 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m18506_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m18589(__this, ___item, method) (( bool (*) (KeyCollection_t3418 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m18507_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m18590(__this, ___item, method) (( bool (*) (KeyCollection_t3418 *, String_t*, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m18508_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m18591(__this, method) (( Object_t* (*) (KeyCollection_t3418 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m18509_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m18592(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3418 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m18510_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m18593(__this, method) (( Object_t * (*) (KeyCollection_t3418 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m18511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m18594(__this, method) (( bool (*) (KeyCollection_t3418 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m18512_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m18595(__this, method) (( bool (*) (KeyCollection_t3418 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m18513_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m18596(__this, method) (( Object_t * (*) (KeyCollection_t3418 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m18514_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m18597(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3418 *, StringU5BU5D_t45*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m18515_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::GetEnumerator()
#define KeyCollection_GetEnumerator_m18598(__this, method) (( Enumerator_t4201  (*) (KeyCollection_t3418 *, const MethodInfo*))KeyCollection_GetEnumerator_m18516_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>::get_Count()
#define KeyCollection_get_Count_m18599(__this, method) (( int32_t (*) (KeyCollection_t3418 *, const MethodInfo*))KeyCollection_get_Count_m18517_gshared)(__this, method)
