#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t6217;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6212;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6318;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_49.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m33681_gshared (ValueCollection_t6217 * __this, Dictionary_2_t6212 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m33681(__this, ___dictionary, method) (( void (*) (ValueCollection_t6217 *, Dictionary_2_t6212 *, const MethodInfo*))ValueCollection__ctor_m33681_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m33682_gshared (ValueCollection_t6217 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m33682(__this, ___item, method) (( void (*) (ValueCollection_t6217 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m33682_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m33683_gshared (ValueCollection_t6217 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m33683(__this, method) (( void (*) (ValueCollection_t6217 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m33683_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m33684_gshared (ValueCollection_t6217 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m33684(__this, ___item, method) (( bool (*) (ValueCollection_t6217 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m33684_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m33685_gshared (ValueCollection_t6217 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m33685(__this, ___item, method) (( bool (*) (ValueCollection_t6217 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m33685_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m33686_gshared (ValueCollection_t6217 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m33686(__this, method) (( Object_t* (*) (ValueCollection_t6217 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m33686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m33687_gshared (ValueCollection_t6217 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m33687(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6217 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m33687_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m33688_gshared (ValueCollection_t6217 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m33688(__this, method) (( Object_t * (*) (ValueCollection_t6217 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m33688_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m33689_gshared (ValueCollection_t6217 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m33689(__this, method) (( bool (*) (ValueCollection_t6217 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m33689_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m33690_gshared (ValueCollection_t6217 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m33690(__this, method) (( bool (*) (ValueCollection_t6217 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m33690_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m33691_gshared (ValueCollection_t6217 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m33691(__this, method) (( Object_t * (*) (ValueCollection_t6217 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m33691_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m33692_gshared (ValueCollection_t6217 * __this, ByteU5BU5D_t66* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m33692(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6217 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m33692_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6218  ValueCollection_GetEnumerator_m33693_gshared (ValueCollection_t6217 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m33693(__this, method) (( Enumerator_t6218  (*) (ValueCollection_t6217 *, const MethodInfo*))ValueCollection_GetEnumerator_m33693_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m33694_gshared (ValueCollection_t6217 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m33694(__this, method) (( int32_t (*) (ValueCollection_t6217 *, const MethodInfo*))ValueCollection_get_Count_m33694_gshared)(__this, method)
