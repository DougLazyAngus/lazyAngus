#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>
struct FlexibleDictionaryWrapper_2_t1893;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9110;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7118;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7561;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7167;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50773_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50773(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50773_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50774_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50774(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50774_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50775_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50775(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50775_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50776_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50776(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50776_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50777_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50777(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50777_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50778_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50778(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50778_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50779_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50779(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50779_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50780_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50780(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50780_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50781_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50781(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50781_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50782_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50782(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7162 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50782_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50783_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50783(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50783_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50784_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50784(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7162 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50784_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50785_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2U5BU5D_t7561* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50785(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2U5BU5D_t7561*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50785_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50786_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50786(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50786_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50787_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50787(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50787_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50788_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50788(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7162 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50788_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50789_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50789(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50789_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50790_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50790(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50790_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50791_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50791(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50791_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7162  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50792_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7122  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50792(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7162  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7122 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50792_gshared)(__this /* static, unused */, ___pair, method)
