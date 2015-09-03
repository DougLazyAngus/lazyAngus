#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1924;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9833;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7783;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8009;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7781;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53927_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53927(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53927_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53928_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53928(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53928_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53929_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53929(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53929_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53930_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53930(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53930_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53931_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53931(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53931_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53932_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53932(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53932_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53933_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53933(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53933_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m53934_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53934(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53934_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53935_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53935(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53935_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53936_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53936(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53936_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53937_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53937(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53937_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53938_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53938(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53938_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53939_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2U5BU5D_t8009* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53939(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2U5BU5D_t8009*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53939_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53940_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53940(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53940_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53941_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53941(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53941_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53942_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53942(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53942_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53943_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53943(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53943_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53944_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53944(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53944_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53945_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53945(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53945_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7776  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53946_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7787  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53946(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7776  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53946_gshared)(__this /* static, unused */, ___pair, method)
