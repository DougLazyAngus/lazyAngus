#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1881;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9138;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7234;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7300;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7192;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47665_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47665(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47665_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47667_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47667(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47667_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47669_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47669(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47669_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47671_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47671(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47671_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47673_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47673(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47673_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47675_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47675(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47675_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47677_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47677(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47677_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47679_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47679(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47679_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47681_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47681(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47681_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47683_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47683(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47683_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47685_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47685(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47685_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47687_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47687(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47687_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47689_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2U5BU5D_t7300* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47689(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2U5BU5D_t7300*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47689_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47691_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47691(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47691_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47693_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47693(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47693_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47695_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47695(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47695_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47697_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47697(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47697_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47699_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47699(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47699_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47701_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47701(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47701_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7187  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47703_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7238  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47703(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7187  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47703_gshared)(__this /* static, unused */, ___pair, method)
