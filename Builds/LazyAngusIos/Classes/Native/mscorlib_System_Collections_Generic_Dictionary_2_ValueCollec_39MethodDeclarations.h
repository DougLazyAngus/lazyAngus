#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t5938;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5933;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object[]
struct ObjectU5BU5D_t634;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_40.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m30472_gshared (ValueCollection_t5938 * __this, Dictionary_2_t5933 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m30472(__this, ___dictionary, method) (( void (*) (ValueCollection_t5938 *, Dictionary_2_t5933 *, const MethodInfo*))ValueCollection__ctor_m30472_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m30473_gshared (ValueCollection_t5938 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m30473(__this, ___item, method) (( void (*) (ValueCollection_t5938 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m30473_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m30474_gshared (ValueCollection_t5938 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m30474(__this, method) (( void (*) (ValueCollection_t5938 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m30474_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m30475_gshared (ValueCollection_t5938 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m30475(__this, ___item, method) (( bool (*) (ValueCollection_t5938 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m30475_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m30476_gshared (ValueCollection_t5938 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m30476(__this, ___item, method) (( bool (*) (ValueCollection_t5938 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m30476_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m30477_gshared (ValueCollection_t5938 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m30477(__this, method) (( Object_t* (*) (ValueCollection_t5938 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m30477_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m30478_gshared (ValueCollection_t5938 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m30478(__this, ___array, ___index, method) (( void (*) (ValueCollection_t5938 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m30478_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m30479_gshared (ValueCollection_t5938 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m30479(__this, method) (( Object_t * (*) (ValueCollection_t5938 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m30479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m30480_gshared (ValueCollection_t5938 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m30480(__this, method) (( bool (*) (ValueCollection_t5938 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m30480_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m30481_gshared (ValueCollection_t5938 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m30481(__this, method) (( bool (*) (ValueCollection_t5938 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m30481_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m30482_gshared (ValueCollection_t5938 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m30482(__this, method) (( Object_t * (*) (ValueCollection_t5938 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m30482_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m30483_gshared (ValueCollection_t5938 * __this, ObjectU5BU5D_t634* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m30483(__this, ___array, ___index, method) (( void (*) (ValueCollection_t5938 *, ObjectU5BU5D_t634*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m30483_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t5939  ValueCollection_GetEnumerator_m30484_gshared (ValueCollection_t5938 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m30484(__this, method) (( Enumerator_t5939  (*) (ValueCollection_t5938 *, const MethodInfo*))ValueCollection_GetEnumerator_m30484_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m30485_gshared (ValueCollection_t5938 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m30485(__this, method) (( int32_t (*) (ValueCollection_t5938 *, const MethodInfo*))ValueCollection_get_Count_m30485_gshared)(__this, method)
