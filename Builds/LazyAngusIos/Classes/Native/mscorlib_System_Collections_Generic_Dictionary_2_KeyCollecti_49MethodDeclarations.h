#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t6125;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6124;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t627;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_50.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m32775_gshared (KeyCollection_t6125 * __this, Dictionary_2_t6124 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m32775(__this, ___dictionary, method) (( void (*) (KeyCollection_t6125 *, Dictionary_2_t6124 *, const MethodInfo*))KeyCollection__ctor_m32775_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m32776_gshared (KeyCollection_t6125 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m32776(__this, ___item, method) (( void (*) (KeyCollection_t6125 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m32776_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m32777_gshared (KeyCollection_t6125 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m32777(__this, method) (( void (*) (KeyCollection_t6125 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m32777_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m32778_gshared (KeyCollection_t6125 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m32778(__this, ___item, method) (( bool (*) (KeyCollection_t6125 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m32778_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m32779_gshared (KeyCollection_t6125 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m32779(__this, ___item, method) (( bool (*) (KeyCollection_t6125 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m32779_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m32780_gshared (KeyCollection_t6125 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m32780(__this, method) (( Object_t* (*) (KeyCollection_t6125 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m32780_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m32781_gshared (KeyCollection_t6125 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m32781(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6125 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m32781_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m32782_gshared (KeyCollection_t6125 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m32782(__this, method) (( Object_t * (*) (KeyCollection_t6125 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m32782_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m32783_gshared (KeyCollection_t6125 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m32783(__this, method) (( bool (*) (KeyCollection_t6125 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m32783_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m32784_gshared (KeyCollection_t6125 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m32784(__this, method) (( bool (*) (KeyCollection_t6125 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m32784_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m32785_gshared (KeyCollection_t6125 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m32785(__this, method) (( Object_t * (*) (KeyCollection_t6125 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m32785_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m32786_gshared (KeyCollection_t6125 * __this, ObjectU5BU5D_t627* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m32786(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6125 *, ObjectU5BU5D_t627*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m32786_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6126  KeyCollection_GetEnumerator_m32787_gshared (KeyCollection_t6125 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m32787(__this, method) (( Enumerator_t6126  (*) (KeyCollection_t6125 *, const MethodInfo*))KeyCollection_GetEnumerator_m32787_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m32788_gshared (KeyCollection_t6125 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m32788(__this, method) (( int32_t (*) (KeyCollection_t6125 *, const MethodInfo*))KeyCollection_get_Count_m32788_gshared)(__this, method)
