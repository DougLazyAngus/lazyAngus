#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t4031;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4028;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t62;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t533;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_49.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m27402_gshared (KeyCollection_t4031 * __this, Dictionary_2_t4028 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m27402(__this, ___dictionary, method) (( void (*) (KeyCollection_t4031 *, Dictionary_2_t4028 *, const MethodInfo*))KeyCollection__ctor_m27402_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m27403_gshared (KeyCollection_t4031 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m27403(__this, ___item, method) (( void (*) (KeyCollection_t4031 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m27403_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m27404_gshared (KeyCollection_t4031 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m27404(__this, method) (( void (*) (KeyCollection_t4031 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m27404_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m27405_gshared (KeyCollection_t4031 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m27405(__this, ___item, method) (( bool (*) (KeyCollection_t4031 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m27405_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m27406_gshared (KeyCollection_t4031 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m27406(__this, ___item, method) (( bool (*) (KeyCollection_t4031 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m27406_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m27407_gshared (KeyCollection_t4031 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m27407(__this, method) (( Object_t* (*) (KeyCollection_t4031 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m27407_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m27408_gshared (KeyCollection_t4031 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m27408(__this, ___array, ___index, method) (( void (*) (KeyCollection_t4031 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m27408_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m27409_gshared (KeyCollection_t4031 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m27409(__this, method) (( Object_t * (*) (KeyCollection_t4031 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m27409_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m27410_gshared (KeyCollection_t4031 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m27410(__this, method) (( bool (*) (KeyCollection_t4031 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m27410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m27411_gshared (KeyCollection_t4031 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m27411(__this, method) (( bool (*) (KeyCollection_t4031 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m27411_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m27412_gshared (KeyCollection_t4031 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m27412(__this, method) (( Object_t * (*) (KeyCollection_t4031 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m27412_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m27413_gshared (KeyCollection_t4031 * __this, ObjectU5BU5D_t533* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m27413(__this, ___array, ___index, method) (( void (*) (KeyCollection_t4031 *, ObjectU5BU5D_t533*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m27413_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t4032  KeyCollection_GetEnumerator_m27414_gshared (KeyCollection_t4031 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m27414(__this, method) (( Enumerator_t4032  (*) (KeyCollection_t4031 *, const MethodInfo*))KeyCollection_GetEnumerator_m27414_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m27415_gshared (KeyCollection_t4031 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m27415(__this, method) (( int32_t (*) (KeyCollection_t4031 *, const MethodInfo*))KeyCollection_get_Count_m27415_gshared)(__this, method)
