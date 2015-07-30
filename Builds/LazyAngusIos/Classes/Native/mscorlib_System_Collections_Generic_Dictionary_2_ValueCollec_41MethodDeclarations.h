#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct ValueCollection_t6001;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t1391;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1139;
// System.Collections.Generic.IEnumerator`1<System.Func`3<System.Object,System.Object,System.Object>>
struct IEnumerator_1_t8995;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Func`3<System.Object,System.Object,System.Object>[]
struct Func_3U5BU5D_t5996;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_122.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
#define ValueCollection__ctor_m31184(__this, ___dictionary, method) (( void (*) (ValueCollection_t6001 *, Dictionary_2_t1391 *, const MethodInfo*))ValueCollection__ctor_m21672_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m31185(__this, ___item, method) (( void (*) (ValueCollection_t6001 *, Func_3_t1139 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m21673_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m31186(__this, method) (( void (*) (ValueCollection_t6001 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m21674_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m31187(__this, ___item, method) (( bool (*) (ValueCollection_t6001 *, Func_3_t1139 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m21675_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m31188(__this, ___item, method) (( bool (*) (ValueCollection_t6001 *, Func_3_t1139 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m21676_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m31189(__this, method) (( Object_t* (*) (ValueCollection_t6001 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m21677_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m31190(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6001 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m21678_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m31191(__this, method) (( Object_t * (*) (ValueCollection_t6001 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m21679_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m31192(__this, method) (( bool (*) (ValueCollection_t6001 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m21680_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m31193(__this, method) (( bool (*) (ValueCollection_t6001 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m21681_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m31194(__this, method) (( Object_t * (*) (ValueCollection_t6001 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m21682_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m31195(__this, ___array, ___index, method) (( void (*) (ValueCollection_t6001 *, Func_3U5BU5D_t5996*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m21683_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::GetEnumerator()
#define ValueCollection_GetEnumerator_m31196(__this, method) (( Enumerator_t8996  (*) (ValueCollection_t6001 *, const MethodInfo*))ValueCollection_GetEnumerator_m21684_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Count()
#define ValueCollection_get_Count_m31197(__this, method) (( int32_t (*) (ValueCollection_t6001 *, const MethodInfo*))ValueCollection_get_Count_m21685_gshared)(__this, method)
