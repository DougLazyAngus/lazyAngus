#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>
struct FlexibleDictionaryWrapper_2_t1892;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9197;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7190;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7373;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7199;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48346_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48346(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48346_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48347_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48347(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48347_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48348_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48348(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48348_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48349_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48349(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48349_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48350_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48350(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48350_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48351_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48351(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48351_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48352_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48352(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48352_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48353_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48353(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48353_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48354_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48354(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48354_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48355_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48355(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48355_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48356_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48356(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48356_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48357_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48357(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48357_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48358_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2U5BU5D_t7373* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48358(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2U5BU5D_t7373*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48358_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48359_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48359(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48359_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48360_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48360(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48360_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48361_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48361(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48361_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48362_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48362(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48362_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48363_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48363(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48363_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48364_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48364(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48364_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7194  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48365_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7194  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48365(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7194  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48365_gshared)(__this /* static, unused */, ___pair, method)
