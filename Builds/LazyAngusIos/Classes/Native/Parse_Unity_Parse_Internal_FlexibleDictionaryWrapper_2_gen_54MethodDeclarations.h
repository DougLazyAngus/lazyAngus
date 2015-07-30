#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>
struct FlexibleDictionaryWrapper_2_t1852;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9105;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7116;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7364;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7136;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48426_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48426(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48426_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48427_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48427(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48427_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48428_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48428(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48428_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48429_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48429(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48429_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48430_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48430(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48430_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48431_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48431(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48431_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48432_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48432(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48432_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48433_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48433(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48433_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48434_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48434(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48434_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48435_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2_t7131  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48435(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48435_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48436_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48436(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48436_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48437_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2_t7131  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48437(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48437_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48438_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2U5BU5D_t7364* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48438(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2U5BU5D_t7364*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48438_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48439_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48439(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48439_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48440_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48440(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48440_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48441_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, KeyValuePair_2_t7131  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48441(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1852 *, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48441_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48442_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48442(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48442_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48443_gshared (FlexibleDictionaryWrapper_2_t1852 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48443(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1852 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48443_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48444_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48444(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48444_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7131  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48445_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7120  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48445(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7131  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48445_gshared)(__this /* static, unused */, ___pair, method)
