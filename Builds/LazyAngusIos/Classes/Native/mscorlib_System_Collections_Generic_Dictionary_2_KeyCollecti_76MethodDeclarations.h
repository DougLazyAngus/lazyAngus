#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t8260;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8259;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6264;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4817;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_77.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m58967_gshared (KeyCollection_t8260 * __this, Dictionary_2_t8259 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m58967(__this, ___dictionary, method) (( void (*) (KeyCollection_t8260 *, Dictionary_2_t8259 *, const MethodInfo*))KeyCollection__ctor_m58967_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m58968_gshared (KeyCollection_t8260 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m58968(__this, ___item, method) (( void (*) (KeyCollection_t8260 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m58968_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m58969_gshared (KeyCollection_t8260 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m58969(__this, method) (( void (*) (KeyCollection_t8260 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m58969_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m58970_gshared (KeyCollection_t8260 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m58970(__this, ___item, method) (( bool (*) (KeyCollection_t8260 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m58970_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m58971_gshared (KeyCollection_t8260 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m58971(__this, ___item, method) (( bool (*) (KeyCollection_t8260 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m58971_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m58972_gshared (KeyCollection_t8260 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m58972(__this, method) (( Object_t* (*) (KeyCollection_t8260 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m58972_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m58973_gshared (KeyCollection_t8260 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m58973(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8260 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m58973_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m58974_gshared (KeyCollection_t8260 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m58974(__this, method) (( Object_t * (*) (KeyCollection_t8260 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m58974_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m58975_gshared (KeyCollection_t8260 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m58975(__this, method) (( bool (*) (KeyCollection_t8260 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m58975_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m58976_gshared (KeyCollection_t8260 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m58976(__this, method) (( bool (*) (KeyCollection_t8260 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m58976_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m58977_gshared (KeyCollection_t8260 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m58977(__this, method) (( Object_t * (*) (KeyCollection_t8260 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m58977_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m58978_gshared (KeyCollection_t8260 * __this, Int64U5BU5D_t4817* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m58978(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8260 *, Int64U5BU5D_t4817*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m58978_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8261  KeyCollection_GetEnumerator_m58979_gshared (KeyCollection_t8260 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m58979(__this, method) (( Enumerator_t8261  (*) (KeyCollection_t8260 *, const MethodInfo*))KeyCollection_GetEnumerator_m58979_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m58980_gshared (KeyCollection_t8260 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m58980(__this, method) (( int32_t (*) (KeyCollection_t8260 *, const MethodInfo*))KeyCollection_get_Count_m58980_gshared)(__this, method)
