#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1911;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9832;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7783;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7944;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7770;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53150_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53150(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53150_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53151_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53151(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53151_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53152_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53152(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53152_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53153_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53153(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53153_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53154_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53154(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53154_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53155_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53155(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53155_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53156_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53156(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53156_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53157_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53157(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53157_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53158_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53158(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53158_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53159_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53159(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53159_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53160_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53160(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53160_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53161_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53161(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53161_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53162_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2U5BU5D_t7944* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53162(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2U5BU5D_t7944*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53162_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53163_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53163(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53163_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53164_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53164(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53164_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53165_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53165(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53165_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53166_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53166(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53166_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53167_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53167(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53167_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53168_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53168(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53168_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7765  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53169_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7787  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53169(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7765  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53169_gshared)(__this /* static, unused */, ___pair, method)
