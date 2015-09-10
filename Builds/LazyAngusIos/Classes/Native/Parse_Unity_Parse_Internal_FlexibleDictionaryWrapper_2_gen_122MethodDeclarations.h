#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>
struct FlexibleDictionaryWrapper_2_t2001;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9851;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7579;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8347;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7845;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57937_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57937(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57937_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57938_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57938(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57938_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57939_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57939(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57939_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57940_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57940(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57940_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57941_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57941(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57941_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57942_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57942(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57942_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57943_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57943(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57943_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m57944_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57944(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57944_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57945_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57945(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57945_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57946_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57946(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57946_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57947_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57947(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57947_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57948_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57948(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57948_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57949_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2U5BU5D_t8347* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57949(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, KeyValuePair_2U5BU5D_t8347*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57949_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57950_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57950(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57950_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57951_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57951(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57951_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57952_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57952(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57952_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57953_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57953(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57953_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57954_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57954(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57954_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57955_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57955(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57955_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7840  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57956_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6104  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57956(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7840  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57956_gshared)(__this /* static, unused */, ___pair, method)
