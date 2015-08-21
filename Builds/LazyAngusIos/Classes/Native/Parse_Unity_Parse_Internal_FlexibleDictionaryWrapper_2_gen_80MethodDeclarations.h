#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>
struct FlexibleDictionaryWrapper_2_t1929;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8710;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7194;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7572;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7232;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50769_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50769(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50769_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50770_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50770(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50770_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50771_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50771(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50771_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50772_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50772(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50772_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50773_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50773(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50773_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50774_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50774(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50774_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50775_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50775(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50775_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50776_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50776(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50776_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50777_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50777(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50777_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50778_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t5541  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50778(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t5541 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50778_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50779_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50779(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50779_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50780_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t5541  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50780(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t5541 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50780_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50781_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2U5BU5D_t7572* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50781(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2U5BU5D_t7572*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50781_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50782_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50782(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50782_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50783_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50783(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50783_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50784_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t5541  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50784(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t5541 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50784_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50785_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50785(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50785_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50786_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50786(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50786_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50787_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50787(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50787_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5541  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50788_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7198  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50788(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5541  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50788_gshared)(__this /* static, unused */, ___pair, method)
