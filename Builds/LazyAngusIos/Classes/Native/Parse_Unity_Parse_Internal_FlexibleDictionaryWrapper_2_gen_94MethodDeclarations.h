#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>
struct FlexibleDictionaryWrapper_2_t1945;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9201;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7201;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7633;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7239;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51500_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51500(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51500_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51501_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51501(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51501_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51502_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51502(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51502_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51503_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51503(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51503_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51504_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51504(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51504_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51505_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51505(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51505_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51506_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51506(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51506_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51507_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51507(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51507_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51508_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51508(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51508_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51509_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51509(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51509_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51510_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51510(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51510_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51511_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51511(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51511_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51512_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2U5BU5D_t7633* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51512(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2U5BU5D_t7633*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51513_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51513(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51513_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51514_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51514(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51514_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51515_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51515(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51515_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51516_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51516(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51516_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51517_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51517(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51517_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51518_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51518(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51518_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7234  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51519_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7205  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51519(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7234  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51519_gshared)(__this /* static, unused */, ___pair, method)
