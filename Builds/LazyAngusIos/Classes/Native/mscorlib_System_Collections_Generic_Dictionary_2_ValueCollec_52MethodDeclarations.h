﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t4158;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t2116;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4260;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Int32[]
struct Int32U5BU5D_t495;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_53.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m28995_gshared (ValueCollection_t4158 * __this, Dictionary_2_t2116 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m28995(__this, ___dictionary, method) (( void (*) (ValueCollection_t4158 *, Dictionary_2_t2116 *, const MethodInfo*))ValueCollection__ctor_m28995_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m28996_gshared (ValueCollection_t4158 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m28996(__this, ___item, method) (( void (*) (ValueCollection_t4158 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m28996_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m28997_gshared (ValueCollection_t4158 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m28997(__this, method) (( void (*) (ValueCollection_t4158 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m28997_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m28998_gshared (ValueCollection_t4158 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m28998(__this, ___item, method) (( bool (*) (ValueCollection_t4158 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m28998_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m28999_gshared (ValueCollection_t4158 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m28999(__this, ___item, method) (( bool (*) (ValueCollection_t4158 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m28999_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m29000_gshared (ValueCollection_t4158 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m29000(__this, method) (( Object_t* (*) (ValueCollection_t4158 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m29000_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m29001_gshared (ValueCollection_t4158 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m29001(__this, ___array, ___index, method) (( void (*) (ValueCollection_t4158 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m29001_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m29002_gshared (ValueCollection_t4158 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m29002(__this, method) (( Object_t * (*) (ValueCollection_t4158 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m29002_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m29003_gshared (ValueCollection_t4158 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m29003(__this, method) (( bool (*) (ValueCollection_t4158 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m29003_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m29004_gshared (ValueCollection_t4158 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m29004(__this, method) (( bool (*) (ValueCollection_t4158 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m29004_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m29005_gshared (ValueCollection_t4158 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m29005(__this, method) (( Object_t * (*) (ValueCollection_t4158 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m29005_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m29006_gshared (ValueCollection_t4158 * __this, Int32U5BU5D_t495* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m29006(__this, ___array, ___index, method) (( void (*) (ValueCollection_t4158 *, Int32U5BU5D_t495*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m29006_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t4159  ValueCollection_GetEnumerator_m29007_gshared (ValueCollection_t4158 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m29007(__this, method) (( Enumerator_t4159  (*) (ValueCollection_t4158 *, const MethodInfo*))ValueCollection_GetEnumerator_m29007_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m29008_gshared (ValueCollection_t4158 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m29008(__this, method) (( int32_t (*) (ValueCollection_t4158 *, const MethodInfo*))ValueCollection_get_Count_m29008_gshared)(__this, method)
