#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t5938;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5937;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6275;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4828;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_42.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m30462_gshared (KeyCollection_t5938 * __this, Dictionary_2_t5937 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m30462(__this, ___dictionary, method) (( void (*) (KeyCollection_t5938 *, Dictionary_2_t5937 *, const MethodInfo*))KeyCollection__ctor_m30462_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m30463_gshared (KeyCollection_t5938 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m30463(__this, ___item, method) (( void (*) (KeyCollection_t5938 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m30463_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m30464_gshared (KeyCollection_t5938 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m30464(__this, method) (( void (*) (KeyCollection_t5938 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m30464_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m30465_gshared (KeyCollection_t5938 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m30465(__this, ___item, method) (( bool (*) (KeyCollection_t5938 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m30465_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m30466_gshared (KeyCollection_t5938 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m30466(__this, ___item, method) (( bool (*) (KeyCollection_t5938 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m30466_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m30467_gshared (KeyCollection_t5938 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m30467(__this, method) (( Object_t* (*) (KeyCollection_t5938 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m30467_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m30468_gshared (KeyCollection_t5938 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m30468(__this, ___array, ___index, method) (( void (*) (KeyCollection_t5938 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m30468_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m30469_gshared (KeyCollection_t5938 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m30469(__this, method) (( Object_t * (*) (KeyCollection_t5938 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m30469_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m30470_gshared (KeyCollection_t5938 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m30470(__this, method) (( bool (*) (KeyCollection_t5938 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m30470_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m30471_gshared (KeyCollection_t5938 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m30471(__this, method) (( bool (*) (KeyCollection_t5938 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m30471_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m30472_gshared (KeyCollection_t5938 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m30472(__this, method) (( Object_t * (*) (KeyCollection_t5938 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m30472_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m30473_gshared (KeyCollection_t5938 * __this, Int64U5BU5D_t4828* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m30473(__this, ___array, ___index, method) (( void (*) (KeyCollection_t5938 *, Int64U5BU5D_t4828*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m30473_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t5939  KeyCollection_GetEnumerator_m30474_gshared (KeyCollection_t5938 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m30474(__this, method) (( Enumerator_t5939  (*) (KeyCollection_t5938 *, const MethodInfo*))KeyCollection_GetEnumerator_m30474_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m30475_gshared (KeyCollection_t5938 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m30475(__this, method) (( int32_t (*) (KeyCollection_t5938 *, const MethodInfo*))KeyCollection_get_Count_m30475_gshared)(__this, method)
