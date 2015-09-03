﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>
struct ValueCollection_t9267;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4477;
// System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.Label>
struct IEnumerator_1_t10377;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Reflection.Emit.Label[]
struct LabelU5BU5D_t9258;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_96.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m69192_gshared (ValueCollection_t9267 * __this, Dictionary_2_t4477 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m69192(__this, ___dictionary, method) (( void (*) (ValueCollection_t9267 *, Dictionary_2_t4477 *, const MethodInfo*))ValueCollection__ctor_m69192_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m69193_gshared (ValueCollection_t9267 * __this, Label_t4474  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m69193(__this, ___item, method) (( void (*) (ValueCollection_t9267 *, Label_t4474 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m69193_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m69194_gshared (ValueCollection_t9267 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m69194(__this, method) (( void (*) (ValueCollection_t9267 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m69194_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m69195_gshared (ValueCollection_t9267 * __this, Label_t4474  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m69195(__this, ___item, method) (( bool (*) (ValueCollection_t9267 *, Label_t4474 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m69195_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m69196_gshared (ValueCollection_t9267 * __this, Label_t4474  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m69196(__this, ___item, method) (( bool (*) (ValueCollection_t9267 *, Label_t4474 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m69196_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m69197_gshared (ValueCollection_t9267 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m69197(__this, method) (( Object_t* (*) (ValueCollection_t9267 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m69197_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m69198_gshared (ValueCollection_t9267 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m69198(__this, ___array, ___index, method) (( void (*) (ValueCollection_t9267 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m69198_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m69199_gshared (ValueCollection_t9267 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m69199(__this, method) (( Object_t * (*) (ValueCollection_t9267 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m69199_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m69200_gshared (ValueCollection_t9267 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m69200(__this, method) (( bool (*) (ValueCollection_t9267 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m69200_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m69201_gshared (ValueCollection_t9267 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m69201(__this, method) (( bool (*) (ValueCollection_t9267 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m69201_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m69202_gshared (ValueCollection_t9267 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m69202(__this, method) (( Object_t * (*) (ValueCollection_t9267 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m69202_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m69203_gshared (ValueCollection_t9267 * __this, LabelU5BU5D_t9258* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m69203(__this, ___array, ___index, method) (( void (*) (ValueCollection_t9267 *, LabelU5BU5D_t9258*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m69203_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::GetEnumerator()
extern "C" Enumerator_t9268  ValueCollection_GetEnumerator_m69204_gshared (ValueCollection_t9267 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m69204(__this, method) (( Enumerator_t9268  (*) (ValueCollection_t9267 *, const MethodInfo*))ValueCollection_GetEnumerator_m69204_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m69205_gshared (ValueCollection_t9267 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m69205(__this, method) (( int32_t (*) (ValueCollection_t9267 *, const MethodInfo*))ValueCollection_get_Count_m69205_gshared)(__this, method)