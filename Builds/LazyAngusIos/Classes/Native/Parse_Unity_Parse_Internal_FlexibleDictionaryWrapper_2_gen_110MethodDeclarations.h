#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1961;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9072;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7230;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7698;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7250;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52406_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52406(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52406_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52407_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52407(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52407_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52408_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52408(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52408_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52409_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52409(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52409_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52410_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52410(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52410_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52411_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52411(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52411_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52412_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52412(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52412_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m52413_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52413(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52413_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52414_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52414(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52414_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52415_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52415(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52415_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52416_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52416(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52416_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52417_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52417(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52417_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52418_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, KeyValuePair_2U5BU5D_t7698* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52418(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, KeyValuePair_2U5BU5D_t7698*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52418_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52419_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52419(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52419_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52420_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52420(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52420_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52421_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52421(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52421_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52422_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52422(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52422_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52423_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52423(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52423_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52424_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52424(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52424_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7245  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52425_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7234  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52425(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7245  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52425_gshared)(__this /* static, unused */, ___pair, method)
