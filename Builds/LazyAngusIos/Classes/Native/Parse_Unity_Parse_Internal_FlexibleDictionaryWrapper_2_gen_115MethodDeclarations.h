#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>
struct FlexibleDictionaryWrapper_2_t1916;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8982;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6928;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7627;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7179;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51925_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51925(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51925_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51926_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51926(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51926_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51927_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51927(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51927_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51928_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51928(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51928_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51929_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51929(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51929_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51930_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51930(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51930_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51931_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51931(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51931_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51932_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51932(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51932_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51933_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51933(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51933_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51934_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51934(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51934_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51935_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51935(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51935_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51936_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51936(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51936_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51937_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2U5BU5D_t7627* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51937(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2U5BU5D_t7627*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51937_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51938_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51938(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51938_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51939_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51939(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51939_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51940_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51940(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51940_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51941_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51941(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51941_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51942_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51942(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51942_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51943_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51943(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51943_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7174  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51944_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6984  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51944(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7174  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6984 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51944_gshared)(__this /* static, unused */, ___pair, method)
