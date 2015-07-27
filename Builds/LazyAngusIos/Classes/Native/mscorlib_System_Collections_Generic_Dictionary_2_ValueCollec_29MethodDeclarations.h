#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>
struct ValueCollection_t3593;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>
struct Dictionary_2_t276;
// TweetTemplate
struct TweetTemplate_t283;
// System.Collections.Generic.IEnumerator`1<TweetTemplate>
struct IEnumerator_1_t4400;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// TweetTemplate[]
struct TweetTemplateU5BU5D_t3589;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,TweetTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_74.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_5MethodDeclarations.h"
#define ValueCollection__ctor_m21248(__this, ___dictionary, method) (( void (*) (ValueCollection_t3593 *, Dictionary_2_t276 *, const MethodInfo*))ValueCollection__ctor_m17776_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21249(__this, ___item, method) (( void (*) (ValueCollection_t3593 *, TweetTemplate_t283 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17777_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21250(__this, method) (( void (*) (ValueCollection_t3593 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17778_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21251(__this, ___item, method) (( bool (*) (ValueCollection_t3593 *, TweetTemplate_t283 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17779_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21252(__this, ___item, method) (( bool (*) (ValueCollection_t3593 *, TweetTemplate_t283 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17780_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21253(__this, method) (( Object_t* (*) (ValueCollection_t3593 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17781_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m21254(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3593 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m17782_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21255(__this, method) (( Object_t * (*) (ValueCollection_t3593 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17783_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21256(__this, method) (( bool (*) (ValueCollection_t3593 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17784_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m21257(__this, method) (( bool (*) (ValueCollection_t3593 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17785_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m21258(__this, method) (( Object_t * (*) (ValueCollection_t3593 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m17786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m21259(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3593 *, TweetTemplateU5BU5D_t3589*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m17787_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::GetEnumerator()
#define ValueCollection_GetEnumerator_m21260(__this, method) (( Enumerator_t4401  (*) (ValueCollection_t3593 *, const MethodInfo*))ValueCollection_GetEnumerator_m17788_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>::get_Count()
#define ValueCollection_get_Count_m21261(__this, method) (( int32_t (*) (ValueCollection_t3593 *, const MethodInfo*))ValueCollection_get_Count_m17789_gshared)(__this, method)
