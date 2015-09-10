#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>
struct FlexibleDictionaryWrapper_2_t1994;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9720;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7583;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8282;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7834;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57399_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57399(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57399_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57400_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57400(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57400_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57401_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57401(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57401_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57402_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57402(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57402_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57403_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57403(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57403_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57404_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57404(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57404_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57405_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57405(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57405_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57406_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57406(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57406_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57407_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57407(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57407_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57408_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57408(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57408_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57409_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57409(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57409_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57410_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57410(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57410_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57411_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2U5BU5D_t8282* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57411(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2U5BU5D_t8282*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57411_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57412_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57412(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57412_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57413_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57413(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57413_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57414_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57414(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57414_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57415_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57415(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57415_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57416_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57416(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57416_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57417_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57417(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57417_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7829  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57418_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7639  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57418(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7829  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57418_gshared)(__this /* static, unused */, ___pair, method)
