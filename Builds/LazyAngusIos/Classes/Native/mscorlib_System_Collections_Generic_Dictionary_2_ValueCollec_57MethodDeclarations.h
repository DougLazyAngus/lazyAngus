#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_t6987;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t6984;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6295;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Single[]
struct SingleU5BU5D_t544;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_134.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_58MethodDeclarations.h"
#define ValueCollection__ctor_m43857(__this, ___dictionary, method) (( void (*) (ValueCollection_t6987 *, Dictionary_2_t6984 *, const MethodInfo*))ValueCollection__ctor_m43858_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m43859(__this, ___item, method) (( void (*) (ValueCollection_t6987 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m43860_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m43861(__this, method) (( void (*) (ValueCollection_t6987 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m43862_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m43863(__this, ___item, method) (( bool (*) (ValueCollection_t6987 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m43864_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m43865(__this, ___item, method) (( bool (*) (ValueCollection_t6987 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m43866_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m43867(__this, method) (( Object_t* (*) (ValueCollection_t6987 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m43868_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m43869(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6987 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m43870_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m43871(__this, method) (( Object_t * (*) (ValueCollection_t6987 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m43872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m43873(__this, method) (( bool (*) (ValueCollection_t6987 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m43874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m43875(__this, method) (( bool (*) (ValueCollection_t6987 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m43876_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m43877(__this, method) (( Object_t * (*) (ValueCollection_t6987 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m43878_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m43879(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6987 *, SingleU5BU5D_t544*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m43880_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::GetEnumerator()
#define ValueCollection_GetEnumerator_m43881(__this, method) (( Enumerator_t9214  (*) (ValueCollection_t6987 *, const MethodInfo*))ValueCollection_GetEnumerator_m43882_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>::get_Count()
#define ValueCollection_get_Count_m43883(__this, method) (( int32_t (*) (ValueCollection_t6987 *, const MethodInfo*))ValueCollection_get_Count_m43884_gshared)(__this, method)
