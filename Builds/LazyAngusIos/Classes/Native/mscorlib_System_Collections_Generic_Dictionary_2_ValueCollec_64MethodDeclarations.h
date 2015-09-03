#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>
struct ValueCollection_t7674;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t7671;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t7403;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.DateTime[]
struct DateTimeU5BU5D_t5444;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_142.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_65MethodDeclarations.h"
#define ValueCollection__ctor_m49855(__this, ___dictionary, method) (( void (*) (ValueCollection_t7674 *, Dictionary_2_t7671 *, const MethodInfo*))ValueCollection__ctor_m49856_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m49857(__this, ___item, method) (( void (*) (ValueCollection_t7674 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m49858_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m49859(__this, method) (( void (*) (ValueCollection_t7674 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m49860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m49861(__this, ___item, method) (( bool (*) (ValueCollection_t7674 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m49862_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m49863(__this, ___item, method) (( bool (*) (ValueCollection_t7674 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m49864_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m49865(__this, method) (( Object_t* (*) (ValueCollection_t7674 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m49866_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m49867(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7674 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m49868_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m49869(__this, method) (( Object_t * (*) (ValueCollection_t7674 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m49870_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m49871(__this, method) (( bool (*) (ValueCollection_t7674 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m49872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m49873(__this, method) (( bool (*) (ValueCollection_t7674 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m49874_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m49875(__this, method) (( Object_t * (*) (ValueCollection_t7674 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m49876_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m49877(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7674 *, DateTimeU5BU5D_t5444*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m49878_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::GetEnumerator()
#define ValueCollection_GetEnumerator_m49879(__this, method) (( Enumerator_t9951  (*) (ValueCollection_t7674 *, const MethodInfo*))ValueCollection_GetEnumerator_m49880_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::get_Count()
#define ValueCollection_get_Count_m49881(__this, method) (( int32_t (*) (ValueCollection_t7674 *, const MethodInfo*))ValueCollection_get_Count_m49882_gshared)(__this, method)
