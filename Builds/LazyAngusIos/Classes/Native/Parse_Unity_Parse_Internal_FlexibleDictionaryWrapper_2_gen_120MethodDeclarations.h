#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>
struct FlexibleDictionaryWrapper_2_t1988;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7772;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8334;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7832;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57769_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57769(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57769_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57770_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57770(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57770_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57771_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57771(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57771_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57772_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57772(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57772_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57773_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57773(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57773_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57774_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57774(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57774_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57775_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57775(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57775_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m57776_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57776(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57776_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57777_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57777(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57777_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57778_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57778(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57778_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57779_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57779(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57779_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57780_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57780(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57780_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57781_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, KeyValuePair_2U5BU5D_t8334* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57781(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1988 *, KeyValuePair_2U5BU5D_t8334*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57781_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57782_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57782(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57782_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57783_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57783(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57783_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57784_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57784(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1988 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57784_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57785_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57785(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57785_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57786_gshared (FlexibleDictionaryWrapper_2_t1988 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57786(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1988 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57786_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57787_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57787(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57787_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7827  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57788_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7776  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57788(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7827  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57788_gshared)(__this /* static, unused */, ___pair, method)
