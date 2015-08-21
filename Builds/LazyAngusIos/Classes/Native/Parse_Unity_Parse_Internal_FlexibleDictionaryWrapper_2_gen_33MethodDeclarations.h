#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>
struct FlexibleDictionaryWrapper_2_t1885;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9138;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7009;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7300;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7192;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47890_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47890(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47890_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47892_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47892(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47892_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47894_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47894(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47894_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47896_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47896(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47896_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47898_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47898(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47898_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47900_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47900(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47900_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47902_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47902(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47902_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47904_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47904(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47904_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47906_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47906(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47906_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47908_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47908(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47908_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47910_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47910(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47910_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47912_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47912(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47912_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47914_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2U5BU5D_t7300* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47914(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2U5BU5D_t7300*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47914_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47916_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47916(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47916_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47918_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47918(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47918_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47920_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2_t7187  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47920(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47920_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47922_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47922(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47922_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47924_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47924(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47924_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47926_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47926(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47926_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7187  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47928_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7079  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47928(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7187  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47928_gshared)(__this /* static, unused */, ___pair, method)
