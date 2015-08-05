#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>
struct FlexibleDictionaryWrapper_2_t1900;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9112;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7171;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7563;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7169;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51003_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51003(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51003_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51004_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51004(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51004_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51005_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51005(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51005_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51006_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51006(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51006_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51007_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51007(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51007_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51008_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51008(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51008_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51009_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51009(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51009_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51010_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51010(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51010_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51011_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51011(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51011_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51012_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51012(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51012_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51013_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51013(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51013_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51014_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51014(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51014_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51015_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2U5BU5D_t7563* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51015(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2U5BU5D_t7563*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51015_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51016_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51016(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51016_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51017_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51017(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51017_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51018_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51018(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1900 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51018_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51019_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51019(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51019_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51020_gshared (FlexibleDictionaryWrapper_2_t1900 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51020(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1900 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51020_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51021_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51021(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51021_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7164  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51022_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7175  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51022(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7164  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51022_gshared)(__this /* static, unused */, ___pair, method)
