#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>
struct FlexibleDictionaryWrapper_2_t1840;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9104;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7127;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7299;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7125;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47692_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47692(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1840 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47692_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47693_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47693(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1840 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47693_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47694_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47694(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1840 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47694_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47695_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47695(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1840 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47695_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47696_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47696(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1840 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47696_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47697_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47697(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1840 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47697_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47698_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47698(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1840 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47698_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47699_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47699(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1840 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47699_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47700_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47700(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1840 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47700_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47701_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47701(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1840 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47701_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47702_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47702(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1840 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47702_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47703_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47703(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1840 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47703_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47704_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, KeyValuePair_2U5BU5D_t7299* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47704(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1840 *, KeyValuePair_2U5BU5D_t7299*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47704_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47705_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47705(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1840 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47705_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47706_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47706(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1840 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47706_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47707_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47707(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1840 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47707_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47708_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47708(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1840 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47708_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47709_gshared (FlexibleDictionaryWrapper_2_t1840 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47709(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1840 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47709_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47710_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47710(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47710_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7120  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47711_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7131  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47711(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7120  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47711_gshared)(__this /* static, unused */, ___pair, method)
