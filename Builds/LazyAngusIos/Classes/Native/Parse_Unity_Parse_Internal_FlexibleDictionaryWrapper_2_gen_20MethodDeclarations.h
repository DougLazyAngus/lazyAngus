#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>
struct FlexibleDictionaryWrapper_2_t1901;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9771;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7778;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7873;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7765;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52116_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52116(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52116_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52118_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52118(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52118_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52120_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52120(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52120_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52122_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52122(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52122_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52124_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52124(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52124_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52126_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52126(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52126_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52128_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52128(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52128_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52130_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52130(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52130_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52132_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52132(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52132_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52134_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52134(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52134_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52136_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52136(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52136_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52138_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52138(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52138_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52140_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2U5BU5D_t7873* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52140(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2U5BU5D_t7873*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52140_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52142_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52142(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52142_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52144_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52144(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52144_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52146_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52146(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52146_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52148_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52148(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52148_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52150_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52150(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52150_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52152_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52152(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52152_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7760  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52154_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7782  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52154(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7760  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52154_gshared)(__this /* static, unused */, ___pair, method)
