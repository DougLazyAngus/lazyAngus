#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>
struct ValueCollection_t3551;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t231;
// FBScore
struct FBScore_t251;
// System.Collections.Generic.IEnumerator`1<FBScore>
struct IEnumerator_1_t4360;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// FBScore[]
struct FBScoreU5BU5D_t3548;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_70.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
#define ValueCollection__ctor_m20516(__this, ___dictionary, method) (( void (*) (ValueCollection_t3551 *, Dictionary_2_t231 *, const MethodInfo*))ValueCollection__ctor_m17761_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20517(__this, ___item, method) (( void (*) (ValueCollection_t3551 *, FBScore_t251 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17762_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20518(__this, method) (( void (*) (ValueCollection_t3551 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20519(__this, ___item, method) (( bool (*) (ValueCollection_t3551 *, FBScore_t251 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17764_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20520(__this, ___item, method) (( bool (*) (ValueCollection_t3551 *, FBScore_t251 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17765_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20521(__this, method) (( Object_t* (*) (ValueCollection_t3551 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17766_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m20522(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3551 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m17767_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20523(__this, method) (( Object_t * (*) (ValueCollection_t3551 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17768_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20524(__this, method) (( bool (*) (ValueCollection_t3551 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17769_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20525(__this, method) (( bool (*) (ValueCollection_t3551 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m20526(__this, method) (( Object_t * (*) (ValueCollection_t3551 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m17771_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m20527(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3551 *, FBScoreU5BU5D_t3548*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m17772_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::GetEnumerator()
#define ValueCollection_GetEnumerator_m20528(__this, method) (( Enumerator_t4361  (*) (ValueCollection_t3551 *, const MethodInfo*))ValueCollection_GetEnumerator_m17773_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::get_Count()
#define ValueCollection_get_Count_m20529(__this, method) (( int32_t (*) (ValueCollection_t3551 *, const MethodInfo*))ValueCollection_get_Count_m17774_gshared)(__this, method)
