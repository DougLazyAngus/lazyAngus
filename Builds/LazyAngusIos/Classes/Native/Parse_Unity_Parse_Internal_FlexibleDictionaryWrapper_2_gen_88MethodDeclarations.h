#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>
struct FlexibleDictionaryWrapper_2_t1960;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9335;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7582;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7805;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55745_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55745(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55745_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55746_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55746(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55746_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55747_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55747(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55747_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55748_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55748(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55748_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55749_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55749(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55749_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55750_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55750(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55750_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55751_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55751(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55751_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55752_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55752(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55752_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55753_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55753(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55753_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55754_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55754(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55754_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55755_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55755(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55755_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55756_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55756(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55756_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55757_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, KeyValuePair_2U5BU5D_t8145* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55757(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, KeyValuePair_2U5BU5D_t8145*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55757_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55758_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55758(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55758_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55759_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55759(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55759_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55760_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55760(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55760_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55761_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55761(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55761_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55762_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55762(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55762_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55763_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55763(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55763_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6097  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55764_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7652  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55764(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6097  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55764_gshared)(__this /* static, unused */, ___pair, method)
