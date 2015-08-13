#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7138;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7133;
// System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>
struct IEnumerator_1_t6854;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// Parse.ParseGeoPoint[]
struct ParseGeoPointU5BU5D_t6859;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_70.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m45512_gshared (ValueCollection_t7138 * __this, Dictionary_2_t7133 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m45512(__this, ___dictionary, method) (( void (*) (ValueCollection_t7138 *, Dictionary_2_t7133 *, const MethodInfo*))ValueCollection__ctor_m45512_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m45514_gshared (ValueCollection_t7138 * __this, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m45514(__this, ___item, method) (( void (*) (ValueCollection_t7138 *, ParseGeoPoint_t1247 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m45514_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m45516_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m45516(__this, method) (( void (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m45516_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45518_gshared (ValueCollection_t7138 * __this, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45518(__this, ___item, method) (( bool (*) (ValueCollection_t7138 *, ParseGeoPoint_t1247 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45518_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m45520_gshared (ValueCollection_t7138 * __this, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m45520(__this, ___item, method) (( bool (*) (ValueCollection_t7138 *, ParseGeoPoint_t1247 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m45520_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m45522_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m45522(__this, method) (( Object_t* (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m45522_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m45524_gshared (ValueCollection_t7138 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m45524(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7138 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m45524_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m45526_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m45526(__this, method) (( Object_t * (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m45526_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m45528_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m45528(__this, method) (( bool (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m45528_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m45530_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m45530(__this, method) (( bool (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m45530_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m45532_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m45532(__this, method) (( Object_t * (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m45532_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m45534_gshared (ValueCollection_t7138 * __this, ParseGeoPointU5BU5D_t6859* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m45534(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7138 *, ParseGeoPointU5BU5D_t6859*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m45534_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7139  ValueCollection_GetEnumerator_m45536_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m45536(__this, method) (( Enumerator_t7139  (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_GetEnumerator_m45536_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m45538_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m45538(__this, method) (( int32_t (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_get_Count_m45538_gshared)(__this, method)
