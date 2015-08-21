#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>
struct FlexibleDictionaryWrapper_2_t1939;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9209;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7637;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7243;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51179_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51179(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51179_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51180_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51180(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51180_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51181_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51181(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51181_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51182_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51182(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51182_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51183_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51183(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51183_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51184_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51184(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51184_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51185_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51185(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51185_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51186_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51186(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51186_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51187_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51187(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51187_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51188_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51188(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51188_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51189_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51189(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51189_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51190_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51190(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51190_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51191_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2U5BU5D_t7637* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51191(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2U5BU5D_t7637*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51191_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51192_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51192(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51192_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51193_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51193(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51193_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51194_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51194(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51194_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51195_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51195(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51195_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51196_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51196(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51196_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51197_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51197(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51197_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7238  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51198_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t775  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51198(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7238  (*) (Object_t * /* static, unused */, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51198_gshared)(__this /* static, unused */, ___pair, method)
