#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t7065;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7060;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6365;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Single[]
struct SingleU5BU5D_t586;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_60.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m44524_gshared (ValueCollection_t7065 * __this, Dictionary_2_t7060 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m44524(__this, ___dictionary, method) (( void (*) (ValueCollection_t7065 *, Dictionary_2_t7060 *, const MethodInfo*))ValueCollection__ctor_m44524_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44526_gshared (ValueCollection_t7065 * __this, float ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44526(__this, ___item, method) (( void (*) (ValueCollection_t7065 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m44526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44528_gshared (ValueCollection_t7065 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44528(__this, method) (( void (*) (ValueCollection_t7065 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m44528_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44530_gshared (ValueCollection_t7065 * __this, float ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44530(__this, ___item, method) (( bool (*) (ValueCollection_t7065 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m44530_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44532_gshared (ValueCollection_t7065 * __this, float ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44532(__this, ___item, method) (( bool (*) (ValueCollection_t7065 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m44532_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44534_gshared (ValueCollection_t7065 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44534(__this, method) (( Object_t* (*) (ValueCollection_t7065 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m44534_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m44536_gshared (ValueCollection_t7065 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m44536(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7065 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m44536_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44538_gshared (ValueCollection_t7065 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44538(__this, method) (( Object_t * (*) (ValueCollection_t7065 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m44538_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44540_gshared (ValueCollection_t7065 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44540(__this, method) (( bool (*) (ValueCollection_t7065 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m44540_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44542_gshared (ValueCollection_t7065 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44542(__this, method) (( bool (*) (ValueCollection_t7065 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m44542_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m44544_gshared (ValueCollection_t7065 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m44544(__this, method) (( Object_t * (*) (ValueCollection_t7065 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m44544_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m44546_gshared (ValueCollection_t7065 * __this, SingleU5BU5D_t586* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m44546(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7065 *, SingleU5BU5D_t586*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m44546_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::GetEnumerator()
extern "C" Enumerator_t7066  ValueCollection_GetEnumerator_m44548_gshared (ValueCollection_t7065 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m44548(__this, method) (( Enumerator_t7066  (*) (ValueCollection_t7065 *, const MethodInfo*))ValueCollection_GetEnumerator_m44548_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m44550_gshared (ValueCollection_t7065 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m44550(__this, method) (( int32_t (*) (ValueCollection_t7065 *, const MethodInfo*))ValueCollection_get_Count_m44550_gshared)(__this, method)
