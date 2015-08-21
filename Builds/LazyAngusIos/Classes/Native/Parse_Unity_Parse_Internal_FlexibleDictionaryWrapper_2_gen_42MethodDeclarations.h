#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>
struct FlexibleDictionaryWrapper_2_t1891;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7205;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7377;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7203;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48481_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48481(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48481_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48482_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48482(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48482_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48483_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48483(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48483_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48484_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48484(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48484_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48485_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48485(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48485_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48486_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48486(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48486_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48487_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48487(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48487_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48488_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48488(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48488_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48489_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48489(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48489_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48490_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48490(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48490_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48491_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48491(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48491_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48492_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48492(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48492_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48493_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2U5BU5D_t7377* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48493(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2U5BU5D_t7377*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48493_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48494_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48494(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48494_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48495_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48495(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48495_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48496_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48496(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48496_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48497_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48497(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48497_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48498_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48498(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48498_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48499_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48499(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48499_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7198  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48500_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7209  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48500(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7198  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7209 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48500_gshared)(__this /* static, unused */, ___pair, method)
