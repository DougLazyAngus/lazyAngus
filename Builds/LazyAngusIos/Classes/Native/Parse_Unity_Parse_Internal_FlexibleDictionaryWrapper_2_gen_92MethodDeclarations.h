#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1971;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9849;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7765;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8217;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7823;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56188_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56188(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56188_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56190_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56190(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56190_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56192_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56192(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56192_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56194_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56194(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56194_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56196_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56196(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56196_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56198_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56198(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56198_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56200_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56200(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56200_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56202_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56202(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56202_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56204_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56204(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56204_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56206_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56206(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56206_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56208_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56208(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56208_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56210_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56210(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56210_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56212_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2U5BU5D_t8217* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56212(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2U5BU5D_t8217*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56212_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56214_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56214(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56214_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56216_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56216(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56216_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56218_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56218(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56218_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56220_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56220(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56220_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56222_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56222(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56222_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56224_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56224(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56224_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7818  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56226_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7767  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56226(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7818  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56226_gshared)(__this /* static, unused */, ___pair, method)
