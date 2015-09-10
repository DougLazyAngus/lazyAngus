#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>
struct FlexibleDictionaryWrapper_2_t2000;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9851;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7796;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8347;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7845;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57894_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57894(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57894_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57895_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57895(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57895_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57896_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57896(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57896_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57897_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57897(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57897_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57898_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57898(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57898_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57899_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57899(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57899_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57900_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57900(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57900_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m57901_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57901(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57901_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57902_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57902(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57902_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57903_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57903(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57903_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57904_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57904(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57904_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57905_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57905(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57905_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57906_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2U5BU5D_t8347* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57906(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2U5BU5D_t8347*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57906_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57907_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57907(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57907_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57908_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57908(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57908_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57909_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57909(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57909_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57910_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57910(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57910_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57911_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57911(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57911_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57912_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57912(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57912_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7840  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57913_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7800  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57913(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7840  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57913_gshared)(__this /* static, unused */, ___pair, method)
