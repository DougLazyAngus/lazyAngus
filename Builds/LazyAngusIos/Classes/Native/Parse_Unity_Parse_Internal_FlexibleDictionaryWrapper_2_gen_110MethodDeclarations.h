#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1989;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9720;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7814;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8282;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7834;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57203_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57203(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57203_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57204_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57204(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57204_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57205_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57205(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57205_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57206_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57206(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57206_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57207_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57207(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57207_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57208_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57208(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57208_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57209_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57209(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57209_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57210_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57210(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57210_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57211_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57211(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57211_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57212_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57212(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57212_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57213_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57213(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57213_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57214_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57214(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57214_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57215_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, KeyValuePair_2U5BU5D_t8282* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57215(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, KeyValuePair_2U5BU5D_t8282*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57216_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57216(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57216_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57217_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57217(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57217_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57218_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57218(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57218_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57219_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57219(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57219_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57220_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57220(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57220_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57221_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57221(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57221_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7829  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57222_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7818  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57222(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7829  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57222_gshared)(__this /* static, unused */, ___pair, method)
