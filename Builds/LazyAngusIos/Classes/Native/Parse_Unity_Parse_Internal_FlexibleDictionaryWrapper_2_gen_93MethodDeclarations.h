#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>
struct FlexibleDictionaryWrapper_2_t1965;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9842;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7767;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8210;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7816;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56197_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56197(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56197_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56198_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56198(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56198_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56199_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56199(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56199_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56200_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56200(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56200_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56201_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56201(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56201_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56202_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56202(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56202_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56203_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56203(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56203_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56204_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56204(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56204_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56205_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56205(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56205_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56206_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56206(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56206_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56207_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56207(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56207_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56208_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56208(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56208_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56209_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2U5BU5D_t8210* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56209(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2U5BU5D_t8210*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56209_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56210_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56210(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56210_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56211_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56211(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56211_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56212_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56212(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56212_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56213_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56213(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56213_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56214_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56214(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56214_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56215_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56215(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56215_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7811  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56216_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7771  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56216(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7811  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56216_gshared)(__this /* static, unused */, ___pair, method)
