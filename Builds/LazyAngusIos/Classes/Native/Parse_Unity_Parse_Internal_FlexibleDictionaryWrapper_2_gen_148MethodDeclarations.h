#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>
struct FlexibleDictionaryWrapper_2_t2020;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9846;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7572;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8418;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7848;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58969_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58969(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2020 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58969_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58970_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58970(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2020 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58970_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58971_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58971(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2020 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58971_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58972_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58972(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2020 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58972_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58973_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58973(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2020 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58973_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58974_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58974(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2020 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58974_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58975_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58975(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2020 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58975_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m58976_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58976(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2020 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58976_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58977_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58977(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2020 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58977_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58978_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58978(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2020 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58978_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58979_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58979(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2020 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58979_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58980_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58980(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2020 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58980_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58981_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, KeyValuePair_2U5BU5D_t8418* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58981(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2020 *, KeyValuePair_2U5BU5D_t8418*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58981_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58982_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58982(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2020 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58982_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58983_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58983(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2020 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58983_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58984_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58984(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2020 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58984_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58985_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58985(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2020 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58985_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58986_gshared (FlexibleDictionaryWrapper_2_t2020 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58986(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2020 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58986_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58987_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58987(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58987_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7652  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58988_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6097  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58988(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7652  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58988_gshared)(__this /* static, unused */, ___pair, method)
