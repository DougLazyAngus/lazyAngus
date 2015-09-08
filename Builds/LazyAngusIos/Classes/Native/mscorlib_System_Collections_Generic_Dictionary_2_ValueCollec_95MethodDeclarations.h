#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>
struct ValueCollection_t9268;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4478;
// System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.Label>
struct IEnumerator_1_t10378;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Reflection.Emit.Label[]
struct LabelU5BU5D_t9259;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_96.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m69205_gshared (ValueCollection_t9268 * __this, Dictionary_2_t4478 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m69205(__this, ___dictionary, method) (( void (*) (ValueCollection_t9268 *, Dictionary_2_t4478 *, const MethodInfo*))ValueCollection__ctor_m69205_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m69206_gshared (ValueCollection_t9268 * __this, Label_t4475  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m69206(__this, ___item, method) (( void (*) (ValueCollection_t9268 *, Label_t4475 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m69206_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m69207_gshared (ValueCollection_t9268 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m69207(__this, method) (( void (*) (ValueCollection_t9268 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m69207_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m69208_gshared (ValueCollection_t9268 * __this, Label_t4475  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m69208(__this, ___item, method) (( bool (*) (ValueCollection_t9268 *, Label_t4475 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m69208_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m69209_gshared (ValueCollection_t9268 * __this, Label_t4475  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m69209(__this, ___item, method) (( bool (*) (ValueCollection_t9268 *, Label_t4475 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m69209_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m69210_gshared (ValueCollection_t9268 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m69210(__this, method) (( Object_t* (*) (ValueCollection_t9268 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m69210_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m69211_gshared (ValueCollection_t9268 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m69211(__this, ___array, ___index, method) (( void (*) (ValueCollection_t9268 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m69211_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m69212_gshared (ValueCollection_t9268 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m69212(__this, method) (( Object_t * (*) (ValueCollection_t9268 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m69212_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m69213_gshared (ValueCollection_t9268 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m69213(__this, method) (( bool (*) (ValueCollection_t9268 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m69213_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m69214_gshared (ValueCollection_t9268 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m69214(__this, method) (( bool (*) (ValueCollection_t9268 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m69214_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m69215_gshared (ValueCollection_t9268 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m69215(__this, method) (( Object_t * (*) (ValueCollection_t9268 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m69215_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m69216_gshared (ValueCollection_t9268 * __this, LabelU5BU5D_t9259* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m69216(__this, ___array, ___index, method) (( void (*) (ValueCollection_t9268 *, LabelU5BU5D_t9259*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m69216_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::GetEnumerator()
extern "C" Enumerator_t9269  ValueCollection_GetEnumerator_m69217_gshared (ValueCollection_t9268 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m69217(__this, method) (( Enumerator_t9269  (*) (ValueCollection_t9268 *, const MethodInfo*))ValueCollection_GetEnumerator_m69217_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m69218_gshared (ValueCollection_t9268 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m69218(__this, method) (( int32_t (*) (ValueCollection_t9268 *, const MethodInfo*))ValueCollection_get_Count_m69218_gshared)(__this, method)
