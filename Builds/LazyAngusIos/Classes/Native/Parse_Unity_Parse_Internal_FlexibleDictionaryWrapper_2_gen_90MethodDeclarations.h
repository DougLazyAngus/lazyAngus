#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>
struct FlexibleDictionaryWrapper_2_t1892;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9112;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t768;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7563;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7169;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50422_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50422(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50422_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50423_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50423(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50423_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50424_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50424(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50424_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50425_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50425(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50425_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50426_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50426(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50426_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50427_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50427(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50427_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50428_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50428(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50428_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50429_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50429(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50429_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50430_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50430(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50430_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50431_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50431(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50431_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50432_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50432(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50432_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50433_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50433(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50433_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50434_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2U5BU5D_t7563* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50434(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2U5BU5D_t7563*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50434_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50435_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50435(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50435_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50436_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50436(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50436_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50437_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50437(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50437_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50438_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50438(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50438_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50439_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50439(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50439_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50440_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50440(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50440_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7164  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50441_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t730  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50441(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7164  (*) (Object_t * /* static, unused */, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50441_gshared)(__this /* static, unused */, ___pair, method)
