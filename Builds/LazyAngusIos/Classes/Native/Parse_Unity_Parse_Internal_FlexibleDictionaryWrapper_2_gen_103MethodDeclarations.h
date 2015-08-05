#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>
struct FlexibleDictionaryWrapper_2_t1905;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8983;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t767;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7628;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7180;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51196_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51196(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51196_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51197_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51197(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51197_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51198_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51198(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51198_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51199_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51199(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51199_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51200_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51200(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51200_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51201_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51201(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51201_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51202_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51202(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51202_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51203_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51203(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51203_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51204_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51204(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51204_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51205_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51205(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51205_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51206_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51206(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51206_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51207_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51207(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51207_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51208_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2U5BU5D_t7628* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51208(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2U5BU5D_t7628*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51208_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51209_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51209(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51209_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51210_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51210(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51210_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51211_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51211(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51211_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51212_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51212(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51212_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51213_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51213(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51213_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51214_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51214(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51214_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7175  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51215_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t729  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51215(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7175  (*) (Object_t * /* static, unused */, KeyValuePair_2_t729 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51215_gshared)(__this /* static, unused */, ___pair, method)
