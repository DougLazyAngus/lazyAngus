#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1990;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7784;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8335;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7833;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57825_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57825(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57825_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57826_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57826(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57826_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57827_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57827(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57827_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57828_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57828(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57828_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57829_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57829(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57829_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57830_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57830(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57830_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57831_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57831(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57831_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m57832_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57832(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57832_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57833_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57833(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57833_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57834_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2_t7828  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57834(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57834_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57835_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57835(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57835_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57836_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2_t7828  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57836(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57836_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57837_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2U5BU5D_t8335* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57837(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2U5BU5D_t8335*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57837_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57838_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57838(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57838_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57839_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57839(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57839_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57840_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2_t7828  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57840(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57840_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57841_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57841(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57841_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57842_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57842(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57842_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57843_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57843(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57843_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7828  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57844_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7788  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57844(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7828  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57844_gshared)(__this /* static, unused */, ___pair, method)
