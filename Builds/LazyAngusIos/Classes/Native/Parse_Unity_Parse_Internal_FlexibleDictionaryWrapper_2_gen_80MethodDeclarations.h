#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>
struct FlexibleDictionaryWrapper_2_t1931;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8706;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7190;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7568;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7228;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50677_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50677(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1931 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50677_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50678_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50678(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1931 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50678_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50679_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50679(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1931 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50679_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50680_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50680(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1931 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50680_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50681_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50681(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1931 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50681_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50682_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50682(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1931 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50682_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50683_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50683(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1931 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50683_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50684_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50684(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1931 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50684_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50685_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50685(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1931 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50685_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50686_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50686(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1931 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50686_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50687_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50687(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1931 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50687_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50688_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50688(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1931 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50688_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50689_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, KeyValuePair_2U5BU5D_t7568* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50689(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1931 *, KeyValuePair_2U5BU5D_t7568*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50689_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50690_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50690(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1931 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50690_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50691_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50691(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1931 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50691_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50692_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50692(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1931 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50692_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50693_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50693(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1931 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50693_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50694_gshared (FlexibleDictionaryWrapper_2_t1931 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50694(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1931 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50694_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50695_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50695(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50695_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5543  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50696_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7194  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50696(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5543  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50696_gshared)(__this /* static, unused */, ___pair, method)
