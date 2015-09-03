#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1876;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7823;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1429;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1416;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51432_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51432(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51432_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51433_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51433(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51433_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51434_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51434(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51434_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51435_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51435(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51435_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51436_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51436(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51436_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51437_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51437(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51437_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51438_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51438(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51438_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51439_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51439(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51439_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51440_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51440(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51440_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51441_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2_t791  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51441(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51441_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51442_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51442(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51442_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51443_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2_t791  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51443(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51443_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51444_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2U5BU5D_t1429* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51444(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2U5BU5D_t1429*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51444_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51445_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51445(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51445_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51446_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51446(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51446_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51447_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2_t791  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51447(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51447_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51448_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51448(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51448_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51449_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51449(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51449_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51450_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51450(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51450_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t791  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51451_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7827  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51451(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t791  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51451_gshared)(__this /* static, unused */, ___pair, method)
