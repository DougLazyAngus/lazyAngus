#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1972;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9203;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7212;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7763;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7261;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53097_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53097(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53097_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53098_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53098(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53098_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53099_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53099(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53099_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53100_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53100(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53100_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53101_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53101(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53101_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53102_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53102(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53102_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53103_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53103(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53103_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m53104_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53104(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53104_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53105_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53105(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53105_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53106_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53106(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53106_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53107_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53107(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53107_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53108_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53108(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53108_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53109_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2U5BU5D_t7763* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53109(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, KeyValuePair_2U5BU5D_t7763*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53110_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53110(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53110_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53111_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53111(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53111_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53112_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53112(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53112_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53113_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53113(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53113_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53114_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53114(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53114_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53115_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53115(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53115_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7256  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53116_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7216  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53116(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7256  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53116_gshared)(__this /* static, unused */, ___pair, method)
