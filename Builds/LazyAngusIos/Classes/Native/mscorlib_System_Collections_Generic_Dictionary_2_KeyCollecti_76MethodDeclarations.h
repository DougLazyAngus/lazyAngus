#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t8267;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8266;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6271;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4824;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_77.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m59014_gshared (KeyCollection_t8267 * __this, Dictionary_2_t8266 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m59014(__this, ___dictionary, method) (( void (*) (KeyCollection_t8267 *, Dictionary_2_t8266 *, const MethodInfo*))KeyCollection__ctor_m59014_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m59015_gshared (KeyCollection_t8267 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m59015(__this, ___item, method) (( void (*) (KeyCollection_t8267 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m59015_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m59016_gshared (KeyCollection_t8267 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m59016(__this, method) (( void (*) (KeyCollection_t8267 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m59016_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m59017_gshared (KeyCollection_t8267 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m59017(__this, ___item, method) (( bool (*) (KeyCollection_t8267 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m59017_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m59018_gshared (KeyCollection_t8267 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m59018(__this, ___item, method) (( bool (*) (KeyCollection_t8267 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m59018_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m59019_gshared (KeyCollection_t8267 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m59019(__this, method) (( Object_t* (*) (KeyCollection_t8267 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m59019_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m59020_gshared (KeyCollection_t8267 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m59020(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8267 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m59020_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m59021_gshared (KeyCollection_t8267 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m59021(__this, method) (( Object_t * (*) (KeyCollection_t8267 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m59021_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m59022_gshared (KeyCollection_t8267 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m59022(__this, method) (( bool (*) (KeyCollection_t8267 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m59022_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m59023_gshared (KeyCollection_t8267 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m59023(__this, method) (( bool (*) (KeyCollection_t8267 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m59023_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m59024_gshared (KeyCollection_t8267 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m59024(__this, method) (( Object_t * (*) (KeyCollection_t8267 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m59024_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m59025_gshared (KeyCollection_t8267 * __this, Int64U5BU5D_t4824* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m59025(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8267 *, Int64U5BU5D_t4824*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m59025_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8268  KeyCollection_GetEnumerator_m59026_gshared (KeyCollection_t8267 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m59026(__this, method) (( Enumerator_t8268  (*) (KeyCollection_t8267 *, const MethodInfo*))KeyCollection_GetEnumerator_m59026_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m59027_gshared (KeyCollection_t8267 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m59027(__this, method) (( int32_t (*) (KeyCollection_t8267 *, const MethodInfo*))KeyCollection_get_Count_m59027_gshared)(__this, method)
