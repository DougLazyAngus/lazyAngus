#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>
struct FlexibleDictionaryWrapper_2_t1836;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9104;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t764;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7299;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7125;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47283_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47283(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47283_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47284_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47284(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47284_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47285_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47285(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47285_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47286_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47286(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47286_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47287_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47287(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47287_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47288_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47288(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47288_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47289_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47289(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47289_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47290_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47290(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47290_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47291_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47291(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47291_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47292_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47292(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47292_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47293_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47293(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47293_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47294_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47294(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47294_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47295_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, KeyValuePair_2U5BU5D_t7299* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47295(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, KeyValuePair_2U5BU5D_t7299*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47295_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47296_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47296(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47296_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47297_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47297(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47297_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47298_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47298(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47298_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47299_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47299(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47299_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47300_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47300(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47300_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47301_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47301(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47301_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7120  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47302_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t727  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47302(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7120  (*) (Object_t * /* static, unused */, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47302_gshared)(__this /* static, unused */, ___pair, method)
