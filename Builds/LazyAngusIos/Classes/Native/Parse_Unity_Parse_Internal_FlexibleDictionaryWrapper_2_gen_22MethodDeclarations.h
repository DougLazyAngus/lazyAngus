#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1879;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9138;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7216;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7300;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7192;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47531_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47531(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47531_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47533_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47533(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47533_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47535_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47535(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47535_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47537_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47537(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47537_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47539_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47539(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47539_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47541_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47541(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47541_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47543_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47543(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47543_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47545_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47545(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47545_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47547_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47547(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47547_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47549_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47549(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47549_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47551_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47551(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47551_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47553_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47553(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47553_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47555_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2U5BU5D_t7300* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47555(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2U5BU5D_t7300*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47555_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47557_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47557(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47557_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47559_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47559(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47559_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47561_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47561(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47561_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47563_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47563(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47563_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47565_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47565(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47565_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47567_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47567(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47567_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7187  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47569_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7220  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47569(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7187  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47569_gshared)(__this /* static, unused */, ___pair, method)
