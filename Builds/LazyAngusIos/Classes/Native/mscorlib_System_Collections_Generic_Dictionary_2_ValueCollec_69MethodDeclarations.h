#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7722;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7717;
// System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>
struct IEnumerator_1_t7438;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// Parse.ParseGeoPoint[]
struct ParseGeoPointU5BU5D_t7443;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_70.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m50303_gshared (ValueCollection_t7722 * __this, Dictionary_2_t7717 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m50303(__this, ___dictionary, method) (( void (*) (ValueCollection_t7722 *, Dictionary_2_t7717 *, const MethodInfo*))ValueCollection__ctor_m50303_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m50305_gshared (ValueCollection_t7722 * __this, ParseGeoPoint_t1275  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m50305(__this, ___item, method) (( void (*) (ValueCollection_t7722 *, ParseGeoPoint_t1275 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m50305_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m50307_gshared (ValueCollection_t7722 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m50307(__this, method) (( void (*) (ValueCollection_t7722 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m50307_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m50309_gshared (ValueCollection_t7722 * __this, ParseGeoPoint_t1275  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m50309(__this, ___item, method) (( bool (*) (ValueCollection_t7722 *, ParseGeoPoint_t1275 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m50309_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m50311_gshared (ValueCollection_t7722 * __this, ParseGeoPoint_t1275  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m50311(__this, ___item, method) (( bool (*) (ValueCollection_t7722 *, ParseGeoPoint_t1275 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m50311_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m50313_gshared (ValueCollection_t7722 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m50313(__this, method) (( Object_t* (*) (ValueCollection_t7722 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m50313_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m50315_gshared (ValueCollection_t7722 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m50315(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7722 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m50315_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m50317_gshared (ValueCollection_t7722 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m50317(__this, method) (( Object_t * (*) (ValueCollection_t7722 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m50317_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m50319_gshared (ValueCollection_t7722 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m50319(__this, method) (( bool (*) (ValueCollection_t7722 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m50319_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m50321_gshared (ValueCollection_t7722 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m50321(__this, method) (( bool (*) (ValueCollection_t7722 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m50321_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m50323_gshared (ValueCollection_t7722 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m50323(__this, method) (( Object_t * (*) (ValueCollection_t7722 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m50323_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m50325_gshared (ValueCollection_t7722 * __this, ParseGeoPointU5BU5D_t7443* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m50325(__this, ___array, ___index, method) (( void (*) (ValueCollection_t7722 *, ParseGeoPointU5BU5D_t7443*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m50325_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7723  ValueCollection_GetEnumerator_m50327_gshared (ValueCollection_t7722 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m50327(__this, method) (( Enumerator_t7723  (*) (ValueCollection_t7722 *, const MethodInfo*))ValueCollection_GetEnumerator_m50327_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m50329_gshared (ValueCollection_t7722 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m50329(__this, method) (( int32_t (*) (ValueCollection_t7722 *, const MethodInfo*))ValueCollection_get_Count_m50329_gshared)(__this, method)
