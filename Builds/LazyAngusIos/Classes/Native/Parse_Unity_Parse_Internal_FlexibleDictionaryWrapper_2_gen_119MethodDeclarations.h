#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>
struct FlexibleDictionaryWrapper_2_t1970;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9203;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7190;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7763;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7261;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53011_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53011(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53011_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53012_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53012(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53012_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53013_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53013(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53013_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53014_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53014(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53014_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53015_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53015(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53015_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53016_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53016(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53016_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53017_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53017(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53017_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m53018_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53018(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53018_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53019_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53019(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53019_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53020_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53020(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53020_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53021_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53021(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53021_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53022_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53022(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53022_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53023_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2U5BU5D_t7763* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53023(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2U5BU5D_t7763*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53023_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53024_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53024(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53024_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53025_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53025(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53025_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53026_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53026(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53026_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53027_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53027(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53027_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53028_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53028(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53028_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53029_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53029(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53029_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7256  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53030_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7194  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53030(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7256  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53030_gshared)(__this /* static, unused */, ___pair, method)
