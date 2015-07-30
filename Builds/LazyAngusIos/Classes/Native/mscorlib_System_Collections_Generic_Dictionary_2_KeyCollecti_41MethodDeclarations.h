#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t5934;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5933;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6271;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4824;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_42.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m30434_gshared (KeyCollection_t5934 * __this, Dictionary_2_t5933 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m30434(__this, ___dictionary, method) (( void (*) (KeyCollection_t5934 *, Dictionary_2_t5933 *, const MethodInfo*))KeyCollection__ctor_m30434_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m30435_gshared (KeyCollection_t5934 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m30435(__this, ___item, method) (( void (*) (KeyCollection_t5934 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m30435_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m30436_gshared (KeyCollection_t5934 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m30436(__this, method) (( void (*) (KeyCollection_t5934 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m30436_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m30437_gshared (KeyCollection_t5934 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m30437(__this, ___item, method) (( bool (*) (KeyCollection_t5934 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m30437_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m30438_gshared (KeyCollection_t5934 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m30438(__this, ___item, method) (( bool (*) (KeyCollection_t5934 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m30438_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m30439_gshared (KeyCollection_t5934 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m30439(__this, method) (( Object_t* (*) (KeyCollection_t5934 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m30439_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m30440_gshared (KeyCollection_t5934 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m30440(__this, ___array, ___index, method) (( void (*) (KeyCollection_t5934 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m30440_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m30441_gshared (KeyCollection_t5934 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m30441(__this, method) (( Object_t * (*) (KeyCollection_t5934 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m30441_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m30442_gshared (KeyCollection_t5934 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m30442(__this, method) (( bool (*) (KeyCollection_t5934 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m30442_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m30443_gshared (KeyCollection_t5934 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m30443(__this, method) (( bool (*) (KeyCollection_t5934 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m30443_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m30444_gshared (KeyCollection_t5934 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m30444(__this, method) (( Object_t * (*) (KeyCollection_t5934 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m30444_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m30445_gshared (KeyCollection_t5934 * __this, Int64U5BU5D_t4824* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m30445(__this, ___array, ___index, method) (( void (*) (KeyCollection_t5934 *, Int64U5BU5D_t4824*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m30445_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t5935  KeyCollection_GetEnumerator_m30446_gshared (KeyCollection_t5934 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m30446(__this, method) (( Enumerator_t5935  (*) (KeyCollection_t5934 *, const MethodInfo*))KeyCollection_GetEnumerator_m30446_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m30447_gshared (KeyCollection_t5934 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m30447(__this, method) (( int32_t (*) (KeyCollection_t5934 *, const MethodInfo*))KeyCollection_get_Count_m30447_gshared)(__this, method)
