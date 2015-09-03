#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7709;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7704;
// System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>
struct IEnumerator_1_t7425;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// Parse.ParseGeoPoint[]
struct ParseGeoPointU5BU5D_t7430;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_70.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m50221_gshared (ValueCollection_t7709 * __this, Dictionary_2_t7704 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m50221(__this, ___dictionary, method) (( void (*) (ValueCollection_t7709 *, Dictionary_2_t7704 *, const MethodInfo*))ValueCollection__ctor_m50221_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m50223_gshared (ValueCollection_t7709 * __this, ParseGeoPoint_t1264  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m50223(__this, ___item, method) (( void (*) (ValueCollection_t7709 *, ParseGeoPoint_t1264 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m50223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m50225_gshared (ValueCollection_t7709 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m50225(__this, method) (( void (*) (ValueCollection_t7709 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m50225_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m50227_gshared (ValueCollection_t7709 * __this, ParseGeoPoint_t1264  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m50227(__this, ___item, method) (( bool (*) (ValueCollection_t7709 *, ParseGeoPoint_t1264 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m50227_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m50229_gshared (ValueCollection_t7709 * __this, ParseGeoPoint_t1264  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m50229(__this, ___item, method) (( bool (*) (ValueCollection_t7709 *, ParseGeoPoint_t1264 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m50229_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m50231_gshared (ValueCollection_t7709 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m50231(__this, method) (( Object_t* (*) (ValueCollection_t7709 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m50231_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m50233_gshared (ValueCollection_t7709 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m50233(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7709 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m50233_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m50235_gshared (ValueCollection_t7709 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m50235(__this, method) (( Object_t * (*) (ValueCollection_t7709 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m50235_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m50237_gshared (ValueCollection_t7709 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m50237(__this, method) (( bool (*) (ValueCollection_t7709 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m50237_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m50239_gshared (ValueCollection_t7709 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m50239(__this, method) (( bool (*) (ValueCollection_t7709 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m50239_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m50241_gshared (ValueCollection_t7709 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m50241(__this, method) (( Object_t * (*) (ValueCollection_t7709 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m50241_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m50243_gshared (ValueCollection_t7709 * __this, ParseGeoPointU5BU5D_t7430* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m50243(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7709 *, ParseGeoPointU5BU5D_t7430*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m50243_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7710  ValueCollection_GetEnumerator_m50245_gshared (ValueCollection_t7709 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m50245(__this, method) (( Enumerator_t7710  (*) (ValueCollection_t7709 *, const MethodInfo*))ValueCollection_GetEnumerator_m50245_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m50247_gshared (ValueCollection_t7709 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m50247(__this, method) (( int32_t (*) (ValueCollection_t7709 *, const MethodInfo*))ValueCollection_get_Count_m50247_gshared)(__this, method)
