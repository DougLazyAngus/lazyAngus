#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>
struct FlexibleDictionaryWrapper_2_t1878;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9138;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7205;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7300;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7192;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47464_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47464(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47464_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47466_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47466(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47466_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47468_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47468(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47468_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47470_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47470(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47470_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47472_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47472(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47472_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47474_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47474(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47474_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47476_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47476(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47476_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47478_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47478(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47478_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47480_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47480(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47480_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47482_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47482(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47482_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47484_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47484(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47484_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47486_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47486(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47486_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47488_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2U5BU5D_t7300* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47488(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2U5BU5D_t7300*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47488_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47490_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47490(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47490_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47492_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47492(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47492_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47494_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47494(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47494_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47496_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47496(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47496_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47498_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47498(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47498_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47500_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47500(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47500_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7187  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47502_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7209  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47502(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7187  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7209 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47502_gshared)(__this /* static, unused */, ___pair, method)
