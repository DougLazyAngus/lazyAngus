#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>
struct ValueCollection_t5523;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t273;
// FBScore
struct FBScore_t293;
// System.Collections.Generic.IEnumerator`1<FBScore>
struct IEnumerator_1_t8758;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// FBScore[]
struct FBScoreU5BU5D_t5520;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_109.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
#define ValueCollection__ctor_m24349(__this, ___dictionary, method) (( void (*) (ValueCollection_t5523 *, Dictionary_2_t273 *, const MethodInfo*))ValueCollection__ctor_m21625_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m24350(__this, ___item, method) (( void (*) (ValueCollection_t5523 *, FBScore_t293 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21626_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m24351(__this, method) (( void (*) (ValueCollection_t5523 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21627_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m24352(__this, ___item, method) (( bool (*) (ValueCollection_t5523 *, FBScore_t293 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21628_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m24353(__this, ___item, method) (( bool (*) (ValueCollection_t5523 *, FBScore_t293 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21629_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m24354(__this, method) (( Object_t* (*) (ValueCollection_t5523 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21630_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m24355(__this, ___array, ___index, method) (( void (*) (ValueCollection_t5523 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m21631_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m24356(__this, method) (( Object_t * (*) (ValueCollection_t5523 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21632_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m24357(__this, method) (( bool (*) (ValueCollection_t5523 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21633_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m24358(__this, method) (( bool (*) (ValueCollection_t5523 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m21634_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m24359(__this, method) (( Object_t * (*) (ValueCollection_t5523 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m21635_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m24360(__this, ___array, ___index, method) (( void (*) (ValueCollection_t5523 *, FBScoreU5BU5D_t5520*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m21636_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::GetEnumerator()
#define ValueCollection_GetEnumerator_m24361(__this, method) (( Enumerator_t8759  (*) (ValueCollection_t5523 *, const MethodInfo*))ValueCollection_GetEnumerator_m21637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>::get_Count()
#define ValueCollection_get_Count_m24362(__this, method) (( int32_t (*) (ValueCollection_t5523 *, const MethodInfo*))ValueCollection_get_Count_m21638_gshared)(__this, method)
