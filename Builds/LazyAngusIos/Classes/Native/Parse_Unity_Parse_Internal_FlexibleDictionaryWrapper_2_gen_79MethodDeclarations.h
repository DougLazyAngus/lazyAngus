#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1930;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8706;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7568;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7228;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50611_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50611(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50611_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50613_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50613(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50613_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50615_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50615(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50615_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50617_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50617(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50617_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50619_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50619(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50619_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50621_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50621(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50621_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50623_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50623(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50623_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50625_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50625(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50625_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50627_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50627(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50627_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50629_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50629(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50629_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50631_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50631(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50631_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50633_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50633(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50633_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50635_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2U5BU5D_t7568* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50635(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2U5BU5D_t7568*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50635_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50637_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50637(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50637_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50639_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50639(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50639_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50641_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50641(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50641_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50643_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50643(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50643_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50645_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50645(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50645_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50647_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50647(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50647_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5543  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50649_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7183  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50649(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5543  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50649_gshared)(__this /* static, unused */, ___pair, method)
