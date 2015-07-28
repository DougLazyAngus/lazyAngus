#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>
struct FlexibleDictionaryWrapper_2_t1860;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9099;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7120;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7422;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7140;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49199_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49199(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49199_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49200_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49200(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49200_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49201_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49201(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49201_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49202_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49202(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49202_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49203_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49203(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49203_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49204_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49204(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49204_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49205_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49205(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49205_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49206_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49206(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49206_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49207_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49207(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49207_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49208_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49208(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49208_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49209_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49209(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49209_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49210_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49210(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49210_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49211_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2U5BU5D_t7422* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49211(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2U5BU5D_t7422*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49211_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49212_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49212(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49212_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49213_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49213(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49213_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49214_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49214(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49214_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49215_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49215(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49215_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49216_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49216(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49216_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49217_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49217(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49217_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7135  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49218_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7124  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49218(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49218_gshared)(__this /* static, unused */, ___pair, method)
