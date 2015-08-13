#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>
struct ValueCollection_t7103;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t7100;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t6834;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.DateTime[]
struct DateTimeU5BU5D_t4895;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_138.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_65MethodDeclarations.h"
#define ValueCollection__ctor_m45148(__this, ___dictionary, method) (( void (*) (ValueCollection_t7103 *, Dictionary_2_t7100 *, const MethodInfo*))ValueCollection__ctor_m45149_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m45150(__this, ___item, method) (( void (*) (ValueCollection_t7103 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m45151_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m45152(__this, method) (( void (*) (ValueCollection_t7103 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m45153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45154(__this, ___item, method) (( bool (*) (ValueCollection_t7103 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45155_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m45156(__this, ___item, method) (( bool (*) (ValueCollection_t7103 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m45157_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m45158(__this, method) (( Object_t* (*) (ValueCollection_t7103 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m45159_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m45160(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7103 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m45161_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m45162(__this, method) (( Object_t * (*) (ValueCollection_t7103 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m45163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m45164(__this, method) (( bool (*) (ValueCollection_t7103 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m45165_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m45166(__this, method) (( bool (*) (ValueCollection_t7103 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m45167_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m45168(__this, method) (( Object_t * (*) (ValueCollection_t7103 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m45169_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m45170(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7103 *, DateTimeU5BU5D_t4895*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m45171_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::GetEnumerator()
#define ValueCollection_GetEnumerator_m45172(__this, method) (( Enumerator_t9316  (*) (ValueCollection_t7103 *, const MethodInfo*))ValueCollection_GetEnumerator_m45173_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>::get_Count()
#define ValueCollection_get_Count_m45174(__this, method) (( int32_t (*) (ValueCollection_t7103 *, const MethodInfo*))ValueCollection_get_Count_m45175_gshared)(__this, method)
