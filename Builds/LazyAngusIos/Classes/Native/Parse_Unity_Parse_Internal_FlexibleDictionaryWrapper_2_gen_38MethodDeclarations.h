#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>
struct FlexibleDictionaryWrapper_2_t1906;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9832;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7944;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7770;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52698_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52698(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52698_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52699_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52699(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52699_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52700_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52700(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52700_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52701_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52701(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52701_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52702_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52702(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52702_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52703_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52703(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52703_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52704_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52704(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52704_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m52705_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52705(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52705_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52706_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52706(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52706_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52707_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52707(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52707_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52708_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52708(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52708_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52709_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52709(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52709_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52710_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2U5BU5D_t7944* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52710(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2U5BU5D_t7944*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52710_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52711_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52711(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52711_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52712_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52712(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52712_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52713_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52713(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52713_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52714_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52714(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52714_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52715_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52715(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52715_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52716_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52716(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52716_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7765  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52717_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t791  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52717(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7765  (*) (Object_t * /* static, unused */, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52717_gshared)(__this /* static, unused */, ___pair, method)
