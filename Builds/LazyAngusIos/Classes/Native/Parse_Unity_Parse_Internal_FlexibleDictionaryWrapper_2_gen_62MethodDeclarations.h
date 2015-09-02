#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>
struct FlexibleDictionaryWrapper_2_t1930;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9246;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7041;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7474;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7246;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49904_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49904(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49904_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49905_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49905(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49905_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49906_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49906(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49906_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49907_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49907(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49907_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49908_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49908(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49908_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49909_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49909(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49909_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49910_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49910(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49910_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m49911_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49911(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49911_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49912_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49912(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49912_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49913_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49913(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49913_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49914_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49914(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49914_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49915_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49915(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49915_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49916_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2U5BU5D_t7474* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49916(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2U5BU5D_t7474*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49916_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49917_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49917(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49917_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49918_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49918(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49918_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49919_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49919(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49919_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49920_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49920(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49920_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49921_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49921(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49921_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49922_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49922(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49922_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7241  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49923_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7111  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49923(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7241  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49923_gshared)(__this /* static, unused */, ___pair, method)
