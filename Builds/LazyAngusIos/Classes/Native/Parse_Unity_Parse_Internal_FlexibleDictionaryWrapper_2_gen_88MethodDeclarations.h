#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>
struct FlexibleDictionaryWrapper_2_t1939;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8706;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7005;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7568;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7228;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51005_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51005(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51005_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51006_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51006(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51006_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51007_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51007(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51007_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51008_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51008(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51008_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51009_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51009(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51009_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51010_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51010(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51010_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51011_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51011(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51011_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m51012_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51012(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51012_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51013_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51013(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51013_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51014_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51014(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51014_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51015_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51015(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51015_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51016_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51016(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51016_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51017_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2U5BU5D_t7568* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51017(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2U5BU5D_t7568*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51017_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51018_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51018(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51018_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51019_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51019(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51019_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51020_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51020(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51020_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51021_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51021(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51021_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51022_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51022(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51022_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51023_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51023(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51023_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5543  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51024_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7075  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51024(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5543  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51024_gshared)(__this /* static, unused */, ___pair, method)
