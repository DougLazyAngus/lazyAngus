#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>
struct FlexibleDictionaryWrapper_2_t1982;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9707;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8269;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7821;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57274_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57274(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57274_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57275_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57275(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57275_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57276_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57276(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57276_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57277_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57277(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57277_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57278_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57278(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57278_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57279_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57279(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57279_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57280_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57280(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57280_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57281_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57281(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57281_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57282_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57282(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57282_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57283_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57283(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57283_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57284_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57284(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57284_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57285_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57285(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57285_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57286_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2U5BU5D_t8269* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57286(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2U5BU5D_t8269*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57286_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57287_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57287(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57287_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57288_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57288(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57288_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57289_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57289(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57289_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57290_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57290(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57290_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57291_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57291(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57291_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57292_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57292(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57292_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7816  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57293_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7646  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57293(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7816  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57293_gshared)(__this /* static, unused */, ___pair, method)
