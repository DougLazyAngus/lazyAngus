#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>
struct FlexibleDictionaryWrapper_2_t1899;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9111;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7170;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7562;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7168;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50995_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50995(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50995_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50996_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50996(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50996_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50997_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50997(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50997_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50998_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50998(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50998_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50999_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50999(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50999_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51000_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51000(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51000_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51001_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51001(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51001_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51002_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51002(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51002_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51003_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51003(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51003_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51004_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51004(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51004_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51005_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51005(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51005_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51006_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51006(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51006_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51007_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2U5BU5D_t7562* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51007(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2U5BU5D_t7562*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51007_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51008_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51008(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51008_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51009_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51009(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51009_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51010_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51010(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51010_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51011_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51011(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51011_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51012_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51012(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51012_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51013_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51013(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51013_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7163  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51014_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7174  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51014(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7163  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51014_gshared)(__this /* static, unused */, ___pair, method)
