#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t8366;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8365;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t627;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_81.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m60394_gshared (KeyCollection_t8366 * __this, Dictionary_2_t8365 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m60394(__this, ___dictionary, method) (( void (*) (KeyCollection_t8366 *, Dictionary_2_t8365 *, const MethodInfo*))KeyCollection__ctor_m60394_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m60395_gshared (KeyCollection_t8366 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m60395(__this, ___item, method) (( void (*) (KeyCollection_t8366 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m60395_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m60396_gshared (KeyCollection_t8366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m60396(__this, method) (( void (*) (KeyCollection_t8366 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m60396_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m60397_gshared (KeyCollection_t8366 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m60397(__this, ___item, method) (( bool (*) (KeyCollection_t8366 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m60397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m60398_gshared (KeyCollection_t8366 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m60398(__this, ___item, method) (( bool (*) (KeyCollection_t8366 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m60398_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m60399_gshared (KeyCollection_t8366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m60399(__this, method) (( Object_t* (*) (KeyCollection_t8366 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m60399_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m60400_gshared (KeyCollection_t8366 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m60400(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8366 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m60400_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m60401_gshared (KeyCollection_t8366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m60401(__this, method) (( Object_t * (*) (KeyCollection_t8366 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m60401_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m60402_gshared (KeyCollection_t8366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m60402(__this, method) (( bool (*) (KeyCollection_t8366 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m60402_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m60403_gshared (KeyCollection_t8366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m60403(__this, method) (( bool (*) (KeyCollection_t8366 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m60403_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m60404_gshared (KeyCollection_t8366 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m60404(__this, method) (( Object_t * (*) (KeyCollection_t8366 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m60404_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m60405_gshared (KeyCollection_t8366 * __this, ObjectU5BU5D_t627* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m60405(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8366 *, ObjectU5BU5D_t627*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m60405_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t8367  KeyCollection_GetEnumerator_m60406_gshared (KeyCollection_t8366 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m60406(__this, method) (( Enumerator_t8367  (*) (KeyCollection_t8366 *, const MethodInfo*))KeyCollection_GetEnumerator_m60406_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m60407_gshared (KeyCollection_t8366 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m60407(__this, method) (( int32_t (*) (KeyCollection_t8366 *, const MethodInfo*))KeyCollection_get_Count_m60407_gshared)(__this, method)
