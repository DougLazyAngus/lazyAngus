#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>
struct FlexibleDictionaryWrapper_2_t1912;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9103;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7120;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7682;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7180;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52307_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52307(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52307_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52308_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52308(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52308_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52309_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52309(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52309_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52310_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52310(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52310_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52311_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52311(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52311_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52312_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52312(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52312_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52313_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52313(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52313_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52314_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52314(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52314_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52315_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52315(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52315_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52316_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52316(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52316_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52317_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52317(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52317_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52318_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52318(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52318_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52319_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2U5BU5D_t7682* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52319(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2U5BU5D_t7682*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52319_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52320_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52320(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52320_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52321_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52321(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52321_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52322_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52322(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52322_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52323_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52323(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52323_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52324_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52324(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52324_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52325_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52325(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52325_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7175  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52326_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7124  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52326(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7175  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52326_gshared)(__this /* static, unused */, ___pair, method)
