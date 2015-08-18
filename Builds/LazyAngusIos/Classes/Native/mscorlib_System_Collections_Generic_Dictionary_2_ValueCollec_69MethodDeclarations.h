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
extern "C" void ValueCollection__ctor_m45509_gshared (ValueCollection_t7138 * __this, Dictionary_2_t7133 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m45509(__this, ___dictionary, method) (( void (*) (ValueCollection_t7138 *, Dictionary_2_t7133 *, const MethodInfo*))ValueCollection__ctor_m45509_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m45511_gshared (ValueCollection_t7138 * __this, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m45511(__this, ___item, method) (( void (*) (ValueCollection_t7138 *, ParseGeoPoint_t1247 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m45511_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m45513_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m45513(__this, method) (( void (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m45513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45515_gshared (ValueCollection_t7138 * __this, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45515(__this, ___item, method) (( bool (*) (ValueCollection_t7138 *, ParseGeoPoint_t1247 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m45515_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m45517_gshared (ValueCollection_t7138 * __this, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m45517(__this, ___item, method) (( bool (*) (ValueCollection_t7138 *, ParseGeoPoint_t1247 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m45517_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m45519_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m45519(__this, method) (( Object_t* (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m45519_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m45521_gshared (ValueCollection_t7138 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m45521(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7138 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m45521_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m45523_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m45523(__this, method) (( Object_t * (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m45523_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m45525_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m45525(__this, method) (( bool (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m45525_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m45527_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m45527(__this, method) (( bool (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m45527_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m45529_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m45529(__this, method) (( Object_t * (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m45529_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m45531_gshared (ValueCollection_t7138 * __this, ParseGeoPointU5BU5D_t6859* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m45531(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7138 *, ParseGeoPointU5BU5D_t6859*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m45531_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7139  ValueCollection_GetEnumerator_m45533_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m45533(__this, method) (( Enumerator_t7139  (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_GetEnumerator_m45533_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m45535_gshared (ValueCollection_t7138 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m45535(__this, method) (( int32_t (*) (ValueCollection_t7138 *, const MethodInfo*))ValueCollection_get_Count_m45535_gshared)(__this, method)
