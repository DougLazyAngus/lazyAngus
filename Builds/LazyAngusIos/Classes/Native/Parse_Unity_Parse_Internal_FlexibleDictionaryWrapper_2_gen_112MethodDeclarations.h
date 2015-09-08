#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1981;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9708;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7824;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8270;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7822;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57220_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57220(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57220_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57221_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57221(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57221_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57222_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57222(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57222_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57223_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57223(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57223_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57224_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57224(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57224_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57225_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57225(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57225_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57226_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57226(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57226_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57227_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57227(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57227_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57228_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57228(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57228_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57229_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57229(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57229_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57230_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57230(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57230_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57231_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57231(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57231_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57232_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, KeyValuePair_2U5BU5D_t8270* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57232(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, KeyValuePair_2U5BU5D_t8270*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57232_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57233_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57233(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57233_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57234_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57234(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57234_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57235_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57235(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57235_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57236_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57236(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57236_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57237_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57237(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57237_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57238_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57238(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57238_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7817  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57239_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7828  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57239(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7817  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57239_gshared)(__this /* static, unused */, ___pair, method)
