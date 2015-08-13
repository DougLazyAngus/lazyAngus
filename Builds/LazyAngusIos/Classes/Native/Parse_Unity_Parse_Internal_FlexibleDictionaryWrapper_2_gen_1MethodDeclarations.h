#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>
struct FlexibleDictionaryWrapper_2_t1852;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1412;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1399;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46297_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46297(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46297_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46299_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46299(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46299_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46301_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46301(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46301_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46303_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46303(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46303_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46305_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46305(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46305_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46307_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46307(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46307_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46309_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46309(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46309_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46311_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46311(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46311_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46313_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46313(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46313_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46315_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46315(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46315_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46317_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46317(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46317_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46319_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46319(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46319_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46321_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2U5BU5D_t1412* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46321(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2U5BU5D_t1412*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46321_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46323_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46323(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46323_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46325_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46325(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46325_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46327_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46327(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46327_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46329_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46329(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46329_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46331_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46331(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46331_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46333_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46333(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46333_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t777  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46335_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7183  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46335(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t777  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46335_gshared)(__this /* static, unused */, ___pair, method)
