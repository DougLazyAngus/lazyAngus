#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>
struct FlexibleDictionaryWrapper_2_t1857;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9109;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7131;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7140;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48500_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48500(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48500_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48501_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48501(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48501_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48502_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48502(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48502_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48503_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48503(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48503_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48504_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48504(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48504_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48505_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48505(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48505_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48506_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48506(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48506_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48507_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48507(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48507_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48508_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48508(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48508_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48509_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48509(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48509_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48510_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48510(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48510_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48511_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48511(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48511_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48512_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, KeyValuePair_2U5BU5D_t7368* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48512(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, KeyValuePair_2U5BU5D_t7368*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48513_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48513(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48513_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48514_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48514(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48514_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48515_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48515(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48515_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48516_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48516(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48516_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48517_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48517(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48517_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48518_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48518(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48518_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7135  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48519_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7135  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48519(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48519_gshared)(__this /* static, unused */, ___pair, method)
