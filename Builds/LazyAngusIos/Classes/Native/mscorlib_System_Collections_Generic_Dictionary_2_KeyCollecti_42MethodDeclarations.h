#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t6578;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6577;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6914;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4562;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_43.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m35824_gshared (KeyCollection_t6578 * __this, Dictionary_2_t6577 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m35824(__this, ___dictionary, method) (( void (*) (KeyCollection_t6578 *, Dictionary_2_t6577 *, const MethodInfo*))KeyCollection__ctor_m35824_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m35825_gshared (KeyCollection_t6578 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m35825(__this, ___item, method) (( void (*) (KeyCollection_t6578 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m35825_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m35826_gshared (KeyCollection_t6578 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m35826(__this, method) (( void (*) (KeyCollection_t6578 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m35826_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m35827_gshared (KeyCollection_t6578 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m35827(__this, ___item, method) (( bool (*) (KeyCollection_t6578 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m35827_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m35828_gshared (KeyCollection_t6578 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m35828(__this, ___item, method) (( bool (*) (KeyCollection_t6578 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m35828_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m35829_gshared (KeyCollection_t6578 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m35829(__this, method) (( Object_t* (*) (KeyCollection_t6578 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m35829_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m35830_gshared (KeyCollection_t6578 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m35830(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6578 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m35830_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m35831_gshared (KeyCollection_t6578 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m35831(__this, method) (( Object_t * (*) (KeyCollection_t6578 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m35831_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m35832_gshared (KeyCollection_t6578 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m35832(__this, method) (( bool (*) (KeyCollection_t6578 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m35832_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m35833_gshared (KeyCollection_t6578 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m35833(__this, method) (( bool (*) (KeyCollection_t6578 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m35833_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m35834_gshared (KeyCollection_t6578 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m35834(__this, method) (( Object_t * (*) (KeyCollection_t6578 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m35834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m35835_gshared (KeyCollection_t6578 * __this, Int64U5BU5D_t4562* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m35835(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6578 *, Int64U5BU5D_t4562*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m35835_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t6579  KeyCollection_GetEnumerator_m35836_gshared (KeyCollection_t6578 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m35836(__this, method) (( Enumerator_t6579  (*) (KeyCollection_t6578 *, const MethodInfo*))KeyCollection_GetEnumerator_m35836_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m35837_gshared (KeyCollection_t6578 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m35837(__this, method) (( int32_t (*) (KeyCollection_t6578 *, const MethodInfo*))KeyCollection_get_Count_m35837_gshared)(__this, method)
