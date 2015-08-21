#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1889;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7185;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7377;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7203;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48371_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48371(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48371_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48373_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48373(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48373_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48375_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48375(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48375_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48377_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48377(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48377_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48379_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48379(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48379_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48381_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48381(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48381_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48383_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48383(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48383_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48385_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48385(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48385_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48387_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48387(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48387_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48389_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48389(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48389_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48391_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48391(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48391_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48393_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48393(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48393_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48395_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2U5BU5D_t7377* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48395(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2U5BU5D_t7377*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48395_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48397_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48397(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48397_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48399_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48399(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48399_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48401_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48401(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48401_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48403_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48403(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48403_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48405_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48405(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48405_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48407_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48407(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48407_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7198  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48409_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7187  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48409(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7198  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48409_gshared)(__this /* static, unused */, ___pair, method)
