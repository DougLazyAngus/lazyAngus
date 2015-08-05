#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>
struct FlexibleDictionaryWrapper_2_t1802;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1171;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7110;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1362;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1349;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45620_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45620(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45620_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45622_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45622(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45622_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45624_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45624(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45624_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45626_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45626(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45626_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45628_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45628(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45628_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45630_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45630(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45630_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45632_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45632(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45632_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45634_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45634(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45634_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45636_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45636(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45636_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45638_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45638(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45638_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45640_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45640(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45640_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45642_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45642(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45642_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45644_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2U5BU5D_t1362* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45644(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2U5BU5D_t1362*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45644_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45646_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45646(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45646_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45648_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45648(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45648_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45650_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45650(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45650_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45652_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45652(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45652_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45654_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45654(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45654_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45656_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45656(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45656_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t728  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45658_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7112  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45658(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t728  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45658_gshared)(__this /* static, unused */, ___pair, method)
