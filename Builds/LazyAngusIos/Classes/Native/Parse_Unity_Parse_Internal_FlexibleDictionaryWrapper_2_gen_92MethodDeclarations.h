#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1941;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9209;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7185;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7637;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7243;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51479_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51479(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51479_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51481_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51481(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51481_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51483_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51483(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51483_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51485_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51485(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51485_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51487_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51487(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51487_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51489_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51489(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51489_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51491_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51491(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51491_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51493_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51493(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51493_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51495_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51495(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51495_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51497_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51497(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51497_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51499_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51499(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51499_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51501_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51501(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51501_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51503_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, KeyValuePair_2U5BU5D_t7637* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51503(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, KeyValuePair_2U5BU5D_t7637*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51503_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51505_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51505(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51505_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51507_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51507(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51507_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51509_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51509(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51509_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51511_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51511(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51511_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51513_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51513(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51513_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51515_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51515(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51515_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7238  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51517_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7187  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51517(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7238  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51517_gshared)(__this /* static, unused */, ___pair, method)
