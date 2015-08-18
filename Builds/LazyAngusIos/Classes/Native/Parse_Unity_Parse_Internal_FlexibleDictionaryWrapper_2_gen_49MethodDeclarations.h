#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>
struct FlexibleDictionaryWrapper_2_t1900;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9197;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7005;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7373;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7199;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48671_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48671(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48671_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48672_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48672(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48672_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48673_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48673(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48673_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48674_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48674(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48674_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48675_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48675(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48675_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48676_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48676(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48676_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48677_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48677(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48677_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48678_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48678(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48678_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48679_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48679(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48679_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48680_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48680(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48680_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48681_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48681(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48681_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48682_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48682(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48682_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48683_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2U5BU5D_t7373* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48683(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2U5BU5D_t7373*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48683_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48684_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48684(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48684_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48685_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48685(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48685_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48686_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48686(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48686_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48687_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48687(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48687_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48688_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48688(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48688_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48689_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48689(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48689_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7194  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48690_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7075  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48690(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7194  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48690_gshared)(__this /* static, unused */, ___pair, method)
