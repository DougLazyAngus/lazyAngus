#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1900;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9765;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7801;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7867;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7759;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52292_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52292(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52292_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52294_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52294(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52294_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52296_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52296(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52296_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52298_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52298(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52298_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52300_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52300(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52300_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52302_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52302(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52302_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52304_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52304(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52304_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52306_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52306(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52306_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52308_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52308(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52308_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52310_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52310(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52310_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52312_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52312(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52312_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52314_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52314(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52314_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52316_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2U5BU5D_t7867* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52316(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2U5BU5D_t7867*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52316_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52318_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52318(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52318_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52320_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52320(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52320_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52322_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52322(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52322_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52324_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52324(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52324_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52326_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52326(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52326_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52328_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52328(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52328_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7754  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52330_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7805  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52330(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7754  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52330_gshared)(__this /* static, unused */, ___pair, method)
