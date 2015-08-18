#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7111;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7106;
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
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_66.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m45146_gshared (ValueCollection_t7111 * __this, Dictionary_2_t7106 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m45146(__this, ___dictionary, method) (( void (*) (ValueCollection_t7111 *, Dictionary_2_t7106 *, const MethodInfo*))ValueCollection__ctor_m45146_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m45148_gshared (ValueCollection_t7111 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m45148(__this, ___item, method) (( void (*) (ValueCollection_t7111 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m45148_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m45150_gshared (ValueCollection_t7111 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m45150(__this, method) (( void (*) (ValueCollection_t7111 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m45150_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45152_gshared (ValueCollection_t7111 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45152(__this, ___item, method) (( bool (*) (ValueCollection_t7111 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45152_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m45154_gshared (ValueCollection_t7111 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m45154(__this, ___item, method) (( bool (*) (ValueCollection_t7111 *, DateTime_t287 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m45154_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m45156_gshared (ValueCollection_t7111 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m45156(__this, method) (( Object_t* (*) (ValueCollection_t7111 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m45156_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m45158_gshared (ValueCollection_t7111 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m45158(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7111 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m45158_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m45160_gshared (ValueCollection_t7111 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m45160(__this, method) (( Object_t * (*) (ValueCollection_t7111 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m45160_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m45162_gshared (ValueCollection_t7111 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m45162(__this, method) (( bool (*) (ValueCollection_t7111 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m45162_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m45164_gshared (ValueCollection_t7111 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m45164(__this, method) (( bool (*) (ValueCollection_t7111 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m45164_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m45166_gshared (ValueCollection_t7111 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m45166(__this, method) (( Object_t * (*) (ValueCollection_t7111 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m45166_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m45168_gshared (ValueCollection_t7111 * __this, DateTimeU5BU5D_t4895* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m45168(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7111 *, DateTimeU5BU5D_t4895*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m45168_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7112  ValueCollection_GetEnumerator_m45170_gshared (ValueCollection_t7111 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m45170(__this, method) (( Enumerator_t7112  (*) (ValueCollection_t7111 *, const MethodInfo*))ValueCollection_GetEnumerator_m45170_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m45172_gshared (ValueCollection_t7111 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m45172(__this, method) (( int32_t (*) (ValueCollection_t7111 *, const MethodInfo*))ValueCollection_get_Count_m45172_gshared)(__this, method)
