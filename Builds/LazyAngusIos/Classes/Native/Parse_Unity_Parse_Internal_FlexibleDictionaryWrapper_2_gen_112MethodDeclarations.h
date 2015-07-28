#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1903;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8971;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7170;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7616;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7168;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51745_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51745(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51745_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51746_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51746(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51746_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51747_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51747(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51747_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51748_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51748(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51748_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51749_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51749(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51749_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51750_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51750(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51750_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51751_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51751(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51751_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51752_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51752(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51752_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51753_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51753(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51753_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51754_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51754(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51754_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51755_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51755(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51755_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51756_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51756(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51756_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51757_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2U5BU5D_t7616* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51757(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2U5BU5D_t7616*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51757_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51758_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51758(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51758_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51759_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51759(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51759_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51760_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51760(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51760_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51761_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51761(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51761_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51762_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51762(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51762_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51763_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51763(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51763_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7163  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51764_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7174  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51764(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7163  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51764_gshared)(__this /* static, unused */, ___pair, method)
