#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t6009;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6008;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6345;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Int64[]
struct Int64U5BU5D_t4872;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_43.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m31138_gshared (KeyCollection_t6009 * __this, Dictionary_2_t6008 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m31138(__this, ___dictionary, method) (( void (*) (KeyCollection_t6009 *, Dictionary_2_t6008 *, const MethodInfo*))KeyCollection__ctor_m31138_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m31139_gshared (KeyCollection_t6009 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m31139(__this, ___item, method) (( void (*) (KeyCollection_t6009 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m31139_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m31140_gshared (KeyCollection_t6009 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m31140(__this, method) (( void (*) (KeyCollection_t6009 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m31140_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m31141_gshared (KeyCollection_t6009 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m31141(__this, ___item, method) (( bool (*) (KeyCollection_t6009 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m31141_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m31142_gshared (KeyCollection_t6009 * __this, int64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m31142(__this, ___item, method) (( bool (*) (KeyCollection_t6009 *, int64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m31142_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m31143_gshared (KeyCollection_t6009 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m31143(__this, method) (( Object_t* (*) (KeyCollection_t6009 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m31143_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m31144_gshared (KeyCollection_t6009 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m31144(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6009 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m31144_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m31145_gshared (KeyCollection_t6009 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m31145(__this, method) (( Object_t * (*) (KeyCollection_t6009 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m31145_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m31146_gshared (KeyCollection_t6009 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m31146(__this, method) (( bool (*) (KeyCollection_t6009 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m31146_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m31147_gshared (KeyCollection_t6009 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m31147(__this, method) (( bool (*) (KeyCollection_t6009 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m31147_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m31148_gshared (KeyCollection_t6009 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m31148(__this, method) (( Object_t * (*) (KeyCollection_t6009 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m31148_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m31149_gshared (KeyCollection_t6009 * __this, Int64U5BU5D_t4872* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m31149(__this, ___array, ___index, method) (( void (*) (KeyCollection_t6009 *, Int64U5BU5D_t4872*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m31149_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t6010  KeyCollection_GetEnumerator_m31150_gshared (KeyCollection_t6009 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m31150(__this, method) (( Enumerator_t6010  (*) (KeyCollection_t6009 *, const MethodInfo*))KeyCollection_GetEnumerator_m31150_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m31151_gshared (KeyCollection_t6009 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m31151(__this, method) (( int32_t (*) (KeyCollection_t6009 *, const MethodInfo*))KeyCollection_get_Count_m31151_gshared)(__this, method)
