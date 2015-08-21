#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>
struct ValueCollection_t5576;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t273;
// FBScore
struct FBScore_t293;
// System.Collections.Generic.IEnumerator`1<FBScore>
struct IEnumerator_1_t8843;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// FBScore[]
struct FBScoreU5BU5D_t5573;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_110.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
#define ValueCollection__ctor_m24657(__this, ___dictionary, method) (( void (*) (ValueCollection_t5576 *, Dictionary_2_t273 *, const MethodInfo*))ValueCollection__ctor_m21933_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m24658(__this, ___item, method) (( void (*) (ValueCollection_t5576 *, FBScore_t293 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21934_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m24659(__this, method) (( void (*) (ValueCollection_t5576 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21935_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m24660(__this, ___item, method) (( bool (*) (ValueCollection_t5576 *, FBScore_t293 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21936_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m24661(__this, ___item, method) (( bool (*) (ValueCollection_t5576 *, FBScore_t293 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21937_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m24662(__this, method) (( Object_t* (*) (ValueCollection_t5576 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21938_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m24663(__this, ___array, ___index, method) (( void (*) (ValueCollection_t5576 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m21939_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m24664(__this, method) (( Object_t * (*) (ValueCollection_t5576 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21940_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m24665(__this, method) (( bool (*) (ValueCollection_t5576 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21941_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m24666(__this, method) (( bool (*) (ValueCollection_t5576 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m21942_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m24667(__this, method) (( Object_t * (*) (ValueCollection_t5576 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m21943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m24668(__this, ___array, ___index, method) (( void (*) (ValueCollection_t5576 *, FBScoreU5BU5D_t5573*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m21944_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::GetEnumerator()
#define ValueCollection_GetEnumerator_m24669(__this, method) (( Enumerator_t8844  (*) (ValueCollection_t5576 *, const MethodInfo*))ValueCollection_GetEnumerator_m21945_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::get_Count()
#define ValueCollection_get_Count_m24670(__this, method) (( int32_t (*) (ValueCollection_t5576 *, const MethodInfo*))ValueCollection_get_Count_m21946_gshared)(__this, method)
