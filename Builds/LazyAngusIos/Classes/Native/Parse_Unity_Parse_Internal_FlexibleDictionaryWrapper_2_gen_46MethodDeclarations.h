#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>
struct FlexibleDictionaryWrapper_2_t1837;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9096;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7159;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7291;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7117;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47817_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47817(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1837 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47817_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47818_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47818(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1837 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47818_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47819_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47819(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1837 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47819_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47820_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47820(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1837 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47820_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47821_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47821(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1837 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47821_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47822_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47822(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1837 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47822_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47823_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47823(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1837 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47823_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47824_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47824(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1837 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47824_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47825_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47825(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1837 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47825_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47826_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47826(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1837 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47826_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47827_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47827(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1837 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47827_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47828_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47828(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1837 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47828_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47829_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, KeyValuePair_2U5BU5D_t7291* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47829(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1837 *, KeyValuePair_2U5BU5D_t7291*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47829_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47830_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47830(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1837 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47830_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47831_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47831(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1837 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47831_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47832_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47832(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1837 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47832_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47833_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47833(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1837 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47833_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47834_gshared (FlexibleDictionaryWrapper_2_t1837 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47834(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1837 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47834_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47835_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47835(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47835_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7112  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47836_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7163  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47836(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7112  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47836_gshared)(__this /* static, unused */, ___pair, method)
