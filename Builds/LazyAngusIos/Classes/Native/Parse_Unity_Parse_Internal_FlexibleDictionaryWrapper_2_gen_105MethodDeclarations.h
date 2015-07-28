#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>
struct FlexibleDictionaryWrapper_2_t1897;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8972;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7100;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7617;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7169;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51421_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51421(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51421_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51423_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51423(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51423_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51425_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51425(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51425_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51427_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51427(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51427_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51429_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51429(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51429_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51431_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51431(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51431_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51433_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51433(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51433_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51435_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51435(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51435_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51437_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51437(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51437_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51439_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51439(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51439_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51441_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51441(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51441_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51443_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51443(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51443_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51445_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2U5BU5D_t7617* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51445(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2U5BU5D_t7617*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51445_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51447_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51447(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51447_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51449_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51449(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51449_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51451_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51451(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51451_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51453_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51453(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51453_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51455_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51455(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51455_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51457_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51457(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51457_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7164  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51459_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7102  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51459(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7164  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51459_gshared)(__this /* static, unused */, ___pair, method)
