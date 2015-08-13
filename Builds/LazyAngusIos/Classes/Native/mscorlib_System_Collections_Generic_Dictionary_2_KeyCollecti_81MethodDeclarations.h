#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t8447;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8446;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_82.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m61141_gshared (KeyCollection_t8447 * __this, Dictionary_2_t8446 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m61141(__this, ___dictionary, method) (( void (*) (KeyCollection_t8447 *, Dictionary_2_t8446 *, const MethodInfo*))KeyCollection__ctor_m61141_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m61142_gshared (KeyCollection_t8447 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m61142(__this, ___item, method) (( void (*) (KeyCollection_t8447 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m61142_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m61143_gshared (KeyCollection_t8447 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m61143(__this, method) (( void (*) (KeyCollection_t8447 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m61143_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m61144_gshared (KeyCollection_t8447 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m61144(__this, ___item, method) (( bool (*) (KeyCollection_t8447 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m61144_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m61145_gshared (KeyCollection_t8447 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m61145(__this, ___item, method) (( bool (*) (KeyCollection_t8447 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m61145_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m61146_gshared (KeyCollection_t8447 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m61146(__this, method) (( Object_t* (*) (KeyCollection_t8447 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m61146_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m61147_gshared (KeyCollection_t8447 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m61147(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8447 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m61147_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m61148_gshared (KeyCollection_t8447 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m61148(__this, method) (( Object_t * (*) (KeyCollection_t8447 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m61148_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m61149_gshared (KeyCollection_t8447 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m61149(__this, method) (( bool (*) (KeyCollection_t8447 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m61149_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m61150_gshared (KeyCollection_t8447 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m61150(__this, method) (( bool (*) (KeyCollection_t8447 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m61150_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m61151_gshared (KeyCollection_t8447 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m61151(__this, method) (( Object_t * (*) (KeyCollection_t8447 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m61151_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m61152_gshared (KeyCollection_t8447 * __this, ObjectU5BU5D_t682* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m61152(__this, ___array, ___index, method) (( void (*) (KeyCollection_t8447 *, ObjectU5BU5D_t682*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m61152_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t8448  KeyCollection_GetEnumerator_m61153_gshared (KeyCollection_t8447 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m61153(__this, method) (( Enumerator_t8448  (*) (KeyCollection_t8447 *, const MethodInfo*))KeyCollection_GetEnumerator_m61153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m61154_gshared (KeyCollection_t8447 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m61154(__this, method) (( int32_t (*) (KeyCollection_t8447 *, const MethodInfo*))KeyCollection_get_Count_m61154_gshared)(__this, method)
