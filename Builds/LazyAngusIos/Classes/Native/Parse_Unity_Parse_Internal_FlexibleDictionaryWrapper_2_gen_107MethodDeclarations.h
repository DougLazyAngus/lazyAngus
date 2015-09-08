#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>
struct FlexibleDictionaryWrapper_2_t1979;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9713;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7778;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8275;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7827;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57017_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57017(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57017_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57018_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57018(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57018_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57019_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57019(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57019_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57020_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57020(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57020_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57021_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57021(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57021_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57022_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57022(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57022_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57023_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57023(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57023_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57024_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57024(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57024_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57025_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57025(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57025_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57026_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57026(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57026_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57027_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57027(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57027_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57028_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57028(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57028_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57029_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2U5BU5D_t8275* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57029(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2U5BU5D_t8275*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57029_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57030_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57030(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57030_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57031_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57031(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57031_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57032_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57032(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57032_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57033_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57033(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57033_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57034_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57034(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57034_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57035_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57035(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57035_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7822  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57036_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7782  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57036(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7822  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57036_gshared)(__this /* static, unused */, ___pair, method)
