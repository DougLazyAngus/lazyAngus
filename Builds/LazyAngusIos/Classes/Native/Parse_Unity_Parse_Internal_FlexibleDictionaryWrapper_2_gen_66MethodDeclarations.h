#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>
struct FlexibleDictionaryWrapper_2_t1915;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9207;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7185;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7507;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7225;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49925_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49925(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49925_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49927_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49927(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49927_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49929_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49929(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49929_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49931_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49931(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49931_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49933_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49933(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49933_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49935_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49935(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49935_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49937_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49937(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49937_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49939_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49939(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49939_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49941_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49941(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49941_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49943_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2_t7220  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49943(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49943_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49945_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49945(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49945_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49947_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2_t7220  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49947(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49947_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49949_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2U5BU5D_t7507* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49949(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2U5BU5D_t7507*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49949_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49951_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49951(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49951_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49953_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49953(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49953_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49955_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2_t7220  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49955(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49955_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49957_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49957(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49957_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49959_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49959(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49959_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49961_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49961(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49961_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7220  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49963_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7187  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49963(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7220  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49963_gshared)(__this /* static, unused */, ___pair, method)
