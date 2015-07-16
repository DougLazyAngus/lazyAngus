#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>
struct ValueCollection_t3526;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>
struct Dictionary_2_t248;
// TweetTemplate
struct TweetTemplate_t255;
// System.Collections.Generic.IEnumerator`1<TweetTemplate>
struct IEnumerator_1_t4303;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// TweetTemplate[]
struct TweetTemplateU5BU5D_t3522;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,TweetTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_66.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
#define ValueCollection__ctor_m20211(__this, ___dictionary, method) (( void (*) (ValueCollection_t3526 *, Dictionary_2_t248 *, const MethodInfo*))ValueCollection__ctor_m17224_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m20212(__this, ___item, method) (( void (*) (ValueCollection_t3526 *, TweetTemplate_t255 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17225_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m20213(__this, method) (( void (*) (ValueCollection_t3526 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17226_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m20214(__this, ___item, method) (( bool (*) (ValueCollection_t3526 *, TweetTemplate_t255 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17227_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m20215(__this, ___item, method) (( bool (*) (ValueCollection_t3526 *, TweetTemplate_t255 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17228_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m20216(__this, method) (( Object_t* (*) (ValueCollection_t3526 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17229_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m20217(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3526 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m17230_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m20218(__this, method) (( Object_t * (*) (ValueCollection_t3526 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17231_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m20219(__this, method) (( bool (*) (ValueCollection_t3526 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17232_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m20220(__this, method) (( bool (*) (ValueCollection_t3526 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17233_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m20221(__this, method) (( Object_t * (*) (ValueCollection_t3526 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m17234_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m20222(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3526 *, TweetTemplateU5BU5D_t3522*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m17235_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::GetEnumerator()
#define ValueCollection_GetEnumerator_m20223(__this, method) (( Enumerator_t4304  (*) (ValueCollection_t3526 *, const MethodInfo*))ValueCollection_GetEnumerator_m17236_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::get_Count()
#define ValueCollection_get_Count_m20224(__this, method) (( int32_t (*) (ValueCollection_t3526 *, const MethodInfo*))ValueCollection_get_Count_m17237_gshared)(__this, method)
