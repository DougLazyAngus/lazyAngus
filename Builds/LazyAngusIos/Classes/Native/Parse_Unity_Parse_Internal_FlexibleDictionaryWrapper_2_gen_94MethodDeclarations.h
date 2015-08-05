#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>
struct FlexibleDictionaryWrapper_2_t1896;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9112;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7131;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7563;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7169;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50831_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50831(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50831_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50832_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50832(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50832_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50833_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50833(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50833_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50834_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50834(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50834_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50835_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50835(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50835_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50836_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50836(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50836_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50837_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50837(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50837_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50838_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50838(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50838_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50839_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50839(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50839_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50840_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50840(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50840_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50841_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50841(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50841_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50842_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50842(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50842_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50843_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2U5BU5D_t7563* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50843(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2U5BU5D_t7563*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50843_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50844_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50844(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50844_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50845_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50845(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50845_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50846_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50846(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50846_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50847_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50847(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50847_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50848_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50848(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50848_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50849_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50849(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50849_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7164  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50850_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7135  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50850(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7164  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50850_gshared)(__this /* static, unused */, ___pair, method)
