#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1895;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7156;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7559;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7165;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50929_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50929(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50929_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50930_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50930(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50930_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50931_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50931(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50931_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50932_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50932(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50932_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50933_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50933(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50933_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50934_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50934(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50934_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50935_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50935(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50935_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50936_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50936(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50936_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50937_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50937(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50937_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50938_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2_t7160  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50938(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2_t7160 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50938_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50939_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50939(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50939_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50940_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2_t7160  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50940(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2_t7160 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50940_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50941_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2U5BU5D_t7559* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50941(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2U5BU5D_t7559*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50941_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50942_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50942(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50942_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50943_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50943(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50943_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50944_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2_t7160  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50944(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2_t7160 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50944_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50945_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50945(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50945_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50946_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50946(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50946_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50947_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50947(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50947_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7160  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50948_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7160  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50948(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7160  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7160 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50948_gshared)(__this /* static, unused */, ___pair, method)
