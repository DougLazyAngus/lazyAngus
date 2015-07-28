#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1874;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8625;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7131;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7487;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7147;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50019_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50019(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50019_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50020_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50020(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50020_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50021_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50021(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50021_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50022_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50022(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50022_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50023_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50023(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50023_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50024_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50024(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50024_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50025_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50025(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50025_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50026_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50026(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50026_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50027_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50027(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50027_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50028_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50028(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50028_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50029_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50029(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50029_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50030_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50030(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50030_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50031_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, KeyValuePair_2U5BU5D_t7487* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50031(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, KeyValuePair_2U5BU5D_t7487*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50031_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50032_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50032(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50032_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50033_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50033(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50033_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50034_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50034(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50034_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50035_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50035(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50035_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50036_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50036(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50036_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50037_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50037(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50037_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5488  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50038_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7135  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50038(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5488  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50038_gshared)(__this /* static, unused */, ___pair, method)
