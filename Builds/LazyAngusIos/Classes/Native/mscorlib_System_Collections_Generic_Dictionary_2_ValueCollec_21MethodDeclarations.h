#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>
struct ValueCollection_t3453;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t204;
// FBScore
struct FBScore_t225;
// System.Collections.Generic.IEnumerator`1<FBScore>
struct IEnumerator_1_t4237;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// FBScore[]
struct FBScoreU5BU5D_t3450;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_62.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
#define ValueCollection__ctor_m19278(__this, ___dictionary, method) (( void (*) (ValueCollection_t3453 *, Dictionary_2_t204 *, const MethodInfo*))ValueCollection__ctor_m17008_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m19279(__this, ___item, method) (( void (*) (ValueCollection_t3453 *, FBScore_t225 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17009_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m19280(__this, method) (( void (*) (ValueCollection_t3453 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17010_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m19281(__this, ___item, method) (( bool (*) (ValueCollection_t3453 *, FBScore_t225 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17011_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m19282(__this, ___item, method) (( bool (*) (ValueCollection_t3453 *, FBScore_t225 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17012_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m19283(__this, method) (( Object_t* (*) (ValueCollection_t3453 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17013_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m19284(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3453 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m17014_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m19285(__this, method) (( Object_t * (*) (ValueCollection_t3453 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17015_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m19286(__this, method) (( bool (*) (ValueCollection_t3453 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17016_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m19287(__this, method) (( bool (*) (ValueCollection_t3453 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17017_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m19288(__this, method) (( Object_t * (*) (ValueCollection_t3453 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m17018_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m19289(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3453 *, FBScoreU5BU5D_t3450*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m17019_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::GetEnumerator()
#define ValueCollection_GetEnumerator_m19290(__this, method) (( Enumerator_t4238  (*) (ValueCollection_t3453 *, const MethodInfo*))ValueCollection_GetEnumerator_m17020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::get_Count()
#define ValueCollection_get_Count_m19291(__this, method) (( int32_t (*) (ValueCollection_t3453 *, const MethodInfo*))ValueCollection_get_Count_m17021_gshared)(__this, method)
