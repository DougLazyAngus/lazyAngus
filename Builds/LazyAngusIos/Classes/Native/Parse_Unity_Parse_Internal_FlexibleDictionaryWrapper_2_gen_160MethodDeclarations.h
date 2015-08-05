#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1962;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8843;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7142;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7836;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7208;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54291_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54291(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54291_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54292_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54292(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54292_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54293_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54293(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54293_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54294_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54294(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54294_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54295_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54295(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54295_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54296_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54296(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54296_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54297_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54297(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54297_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54298_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54298(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54298_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54299_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54299(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54299_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54300_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2_t6985  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54300(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54300_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54301_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54301(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54301_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54302_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2_t6985  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54302(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54302_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54303_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2U5BU5D_t7836* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54303(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2U5BU5D_t7836*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54303_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54304_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54304(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54304_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54305_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54305(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54305_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54306_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2_t6985  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54306(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54306_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54307_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54307(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54307_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54308_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54308(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54308_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54309_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54309(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54309_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6985  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54310_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7146  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54310(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6985  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7146 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54310_gshared)(__this /* static, unused */, ___pair, method)
