#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1845;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7142;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7303;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7129;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47766_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47766(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1845 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47766_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47767_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47767(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1845 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47767_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47768_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47768(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1845 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47768_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47769_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47769(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1845 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47769_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47770_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47770(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1845 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47770_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47771_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47771(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1845 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47771_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47772_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47772(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1845 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47772_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47773_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47773(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1845 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47773_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47774_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47774(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1845 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47774_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47775_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47775(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1845 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47775_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47776_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47776(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1845 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47776_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47777_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47777(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1845 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47777_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47778_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, KeyValuePair_2U5BU5D_t7303* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47778(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1845 *, KeyValuePair_2U5BU5D_t7303*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47778_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47779_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47779(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1845 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47779_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47780_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47780(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1845 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47780_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47781_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47781(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1845 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47781_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47782_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47782(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1845 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47782_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47783_gshared (FlexibleDictionaryWrapper_2_t1845 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47783(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1845 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47783_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47784_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47784(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47784_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7124  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47785_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7146  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47785(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7124  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7146 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47785_gshared)(__this /* static, unused */, ___pair, method)
