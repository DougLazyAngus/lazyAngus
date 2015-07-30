#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>
struct FlexibleDictionaryWrapper_2_t1826;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9037;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7116;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7222;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7114;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46609_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46609(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46609_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46611_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46611(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46611_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46613_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46613(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46613_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46615_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46615(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46615_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46617_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46617(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46617_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46619_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46619(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46619_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46621_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46621(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46621_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46623_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46623(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46623_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46625_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46625(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46625_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46627_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, KeyValuePair_2_t7109  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46627(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46627_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46629_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46629(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46629_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46631_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, KeyValuePair_2_t7109  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46631(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46631_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46633_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, KeyValuePair_2U5BU5D_t7222* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46633(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, KeyValuePair_2U5BU5D_t7222*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46633_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46635_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46635(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46635_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46637_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46637(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46637_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46639_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, KeyValuePair_2_t7109  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46639(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46639_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46641_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46641(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46641_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46643_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46643(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46643_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46645_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46645(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46645_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7109  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46647_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7120  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46647(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7109  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46647_gshared)(__this /* static, unused */, ___pair, method)
