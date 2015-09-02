#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1989;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9251;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7248;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7799;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7297;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53550_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53550(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53550_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53551_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53551(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53551_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53552_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53552(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53552_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53553_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53553(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53553_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53554_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53554(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53554_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53555_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53555(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53555_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53556_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53556(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53556_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m53557_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53557(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53557_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53558_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53558(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53558_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53559_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, KeyValuePair_2_t7292  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53559(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, KeyValuePair_2_t7292 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53559_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53560_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53560(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53560_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53561_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, KeyValuePair_2_t7292  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53561(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, KeyValuePair_2_t7292 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53561_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53562_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, KeyValuePair_2U5BU5D_t7799* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53562(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1989 *, KeyValuePair_2U5BU5D_t7799*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53562_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53563_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53563(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53563_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53564_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53564(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53564_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53565_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, KeyValuePair_2_t7292  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53565(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1989 *, KeyValuePair_2_t7292 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53565_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53566_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53566(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53566_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53567_gshared (FlexibleDictionaryWrapper_2_t1989 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53567(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1989 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53567_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53568_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53568(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53568_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7292  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53569_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7252  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53569(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7292  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53569_gshared)(__this /* static, unused */, ___pair, method)
