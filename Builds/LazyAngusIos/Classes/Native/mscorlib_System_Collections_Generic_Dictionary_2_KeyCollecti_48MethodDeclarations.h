#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t6191;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6190;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6345;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4872;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_49.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m33312_gshared (KeyCollection_t6191 * __this, Dictionary_2_t6190 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m33312(__this, ___dictionary, method) (( void (*) (KeyCollection_t6191 *, Dictionary_2_t6190 *, const MethodInfo*))KeyCollection__ctor_m33312_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m33313_gshared (KeyCollection_t6191 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m33313(__this, ___item, method) (( void (*) (KeyCollection_t6191 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m33313_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m33314_gshared (KeyCollection_t6191 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m33314(__this, method) (( void (*) (KeyCollection_t6191 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m33314_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m33315_gshared (KeyCollection_t6191 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m33315(__this, ___item, method) (( bool (*) (KeyCollection_t6191 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m33315_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m33316_gshared (KeyCollection_t6191 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m33316(__this, ___item, method) (( bool (*) (KeyCollection_t6191 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m33316_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m33317_gshared (KeyCollection_t6191 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m33317(__this, method) (( Object_t* (*) (KeyCollection_t6191 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m33317_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m33318_gshared (KeyCollection_t6191 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m33318(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6191 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m33318_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m33319_gshared (KeyCollection_t6191 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m33319(__this, method) (( Object_t * (*) (KeyCollection_t6191 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m33319_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m33320_gshared (KeyCollection_t6191 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m33320(__this, method) (( bool (*) (KeyCollection_t6191 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m33320_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m33321_gshared (KeyCollection_t6191 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m33321(__this, method) (( bool (*) (KeyCollection_t6191 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m33321_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m33322_gshared (KeyCollection_t6191 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m33322(__this, method) (( Object_t * (*) (KeyCollection_t6191 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m33322_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m33323_gshared (KeyCollection_t6191 * __this, Int64U5BU5D_t4872* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m33323(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6191 *, Int64U5BU5D_t4872*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m33323_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6192  KeyCollection_GetEnumerator_m33324_gshared (KeyCollection_t6191 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m33324(__this, method) (( Enumerator_t6192  (*) (KeyCollection_t6191 *, const MethodInfo*))KeyCollection_GetEnumerator_m33324_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m33325_gshared (KeyCollection_t6191 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m33325(__this, method) (( int32_t (*) (KeyCollection_t6191 *, const MethodInfo*))KeyCollection_get_Count_m33325_gshared)(__this, method)
