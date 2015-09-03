#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>
struct FlexibleDictionaryWrapper_2_t1870;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7761;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1429;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1416;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51084_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51084(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1870 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51084_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51085_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51085(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1870 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51085_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51086_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51086(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1870 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51086_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51087_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51087(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51087_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51088_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51088(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1870 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51088_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51089_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51089(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1870 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51089_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51090_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51090(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51090_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51091_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51091(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1870 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51091_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51092_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51092(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1870 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51092_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51093_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, KeyValuePair_2_t791  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51093(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1870 *, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51093_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51094_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51094(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51094_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51095_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, KeyValuePair_2_t791  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51095(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1870 *, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51095_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51096_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, KeyValuePair_2U5BU5D_t1429* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51096(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1870 *, KeyValuePair_2U5BU5D_t1429*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51096_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51097_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51097(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51097_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51098_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51098(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51098_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51099_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, KeyValuePair_2_t791  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51099(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1870 *, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51099_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51100_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51100(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51100_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51101_gshared (FlexibleDictionaryWrapper_2_t1870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51101(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51101_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51102_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51102(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51102_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t791  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51103_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7765  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51103(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t791  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51103_gshared)(__this /* static, unused */, ___pair, method)
